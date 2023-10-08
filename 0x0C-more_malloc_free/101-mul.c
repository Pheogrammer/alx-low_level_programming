#include <stdio.h>
#include <stdlib.h>

int is_digit(char c) {
  return c >= '0' && c <= '9';
}

int multiply(int num1, int num2) {
  int result = 0;
  int carry = 0;
  while (num2 > 0) {
    int product = (num1 * (num2 % 10) + carry) % 10;
    carry = (num1 * (num2 % 10) + carry) / 10;
    result += product;
    num2 /= 10;
  }
  result += carry;
  return result;
}

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Error\n");
    exit(98);
  }

  for (int i = 0; i < strlen(argv[1]); i++) {
    if (!is_digit(argv[1][i])) {
      printf("Error\n");
      exit(98);
    }
  }

  for (int i = 0; i < strlen(argv[2]); i++) {
    if (!is_digit(argv[2][i])) {
      printf("Error\n");
      exit(98);
    }
  }

  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]);

  if (num1 < 0 || num2 < 0) {
    printf("Error\n");
    exit(98);
  }

  printf("%d\n", multiply(num1, num2));

  return 0;
}
