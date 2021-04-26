#include <stdio.h>

int main(void) {
  int i;
  int j;
  int k;
  
  for(i = 1; i < 10; i++) {
      for(j = 9; j > i; j--) {
      printf(" ");
    }
    for(k = 1; k <= i; k++) {
      printf("*");
    }
      printf("\n");
  }
    return 0;
}
