#include <stdio.h>

int main() {
  float f = 3.14159265;
  printf("f has the value of %.3f\n",f);
  printf("f is located at %p\n", &f);
  printf("f is %lu bytes\n", sizeof(f)); 

  return 0;
}
