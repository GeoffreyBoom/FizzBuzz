#include "stdio.h"
void fizzbuzz(int i){
  if(i%5 == 0 && i%3 == 0){
    printf("fizzbuzz\n");
    return;
  }
  if(i%5 == 0){
    printf("buzz\n");
    return;
  }
  if(i%3 == 0){
    printf("fizz\n");
    return;
  }
 
  printf("%i\n", i);
}
int main(int argv, char**args){
  int i = 1;
  for(i; i<101;i++){
    fizzbuzz(i);
  }
  return 0;
}

