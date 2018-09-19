#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand( time(NULL));

  //first array
  int ray[10];
  for( int i = 0; i < 9; i++){
    ray[i] = rand();
  }
  ray[9] = 0;
  printf("first array \n");
  for( int i = 0; i < 10; i++){
    printf("element %d : %d \n", i, ray[i]);
  }

  //second array
  int rray[10];
  int x = 9;
  for( int i = 0; i < 10; i++){
    * (rray + i) = * (ray + x);
    x--;
  }
  printf("\nsecond array \n");
  for( int i = 0; i < 10; i++){
    printf("element %d : %d \n", i, rray[i]);
  }
}
