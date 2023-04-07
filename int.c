#include <stdio.h>

int main() {
  int i = 31536000;
  printf("i has the value of %d\n",i);
  printf("n is located at %p\n", &i);
  printf("n is %lu bytes\n", sizeof(i)); 

  return 0;
}
