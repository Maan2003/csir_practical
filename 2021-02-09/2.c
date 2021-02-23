#include <stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);

  int num = 1;
  int add = 2;
  for(int i = 1; i <= n; ++i) {
    for(int j = 1; j <= i; ++j) {
      printf("%d ", num);
      num += add;
      add += 1;
    }
    printf("\n");
  }
  return 0;
}
