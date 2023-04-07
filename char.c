#include <stdio.h>

int main() {
  char c = 'a';
  printf("c has the value of %c\n",c);
  printf("c is located at %p\n", &c);
  printf("c is %lu byte\n", sizeof(c)); 

  return 0;
}
