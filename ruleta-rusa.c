#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  int rata;
  rata = rand()%6;
  if ( rand() == 1){
    printf("I am a fucking rat\n");
  }
  else{
    printf("I ain\'t no rat\n");
  }
  return 0;
}
