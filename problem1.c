#include <stdio.h>

int main() {
  int sum = 0;

  printf("The sum of all the multiples of 3 or 5 below 1000 are: ");

  for (int i = 0; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum = sum + i;
    }
  }
  printf("%d\n", sum);
  return 0;
}
