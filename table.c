#include <stdio.h>

int main() {
  printf("type\tsize\n\n"); 
  printf("char\t%lu bytes\n", sizeof(char));
  printf("int\t%lu bytes\n", sizeof(int)); 
  printf("float\t%lu bytes\n", sizeof(float)); 
  printf("void\t%lu bytes\n", sizeof(void));  
  printf("pointer\t%lu bytes\n", sizeof(void*));  
  return 0;
}
