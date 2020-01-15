#include <stdio.h>

int main() {
  int fib1 = 1;
  int fib2 = 1;
  int fibAdd = 0;
  int sum = 0;
  printf("The sum of the even-valued terms in the fibonacci sequence are: ");

  while (fib2 < 4000000) {
    fibAdd = fib1 + fib2;
    fib1 = fib2;
    fib2 = fibAdd;
    if (fibAdd % 2 == 0) {
      sum = sum + fibAdd;
    }
  }
  printf("%d \n", sum);
  return 0;
}
