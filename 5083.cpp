#include <stdio.h>
int sumD(int n);
int main() {
  int a;
  scanf("%d", &a);
  int value, min = 10000000, num;
  for (int i = 0; i < a; i++) {
    scanf("%d", &value);
    if (min >= sumD(value)) {
      min = sumD(value);
      num = value;
    }
  }
  printf("%d", num);
}

int sumD(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}