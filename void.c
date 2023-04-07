#include <stdio.h>

int main() {
  void *p;
  printf("p has the value %p\n", p);
  printf("the size of *p is %lu byte\n", sizeof(*p)); 
  return 0;
}
