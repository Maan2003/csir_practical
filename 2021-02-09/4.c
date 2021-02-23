#include <stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);

  int num = 1;
  for(int i = 1; i <= n; ++i) {

    // print the whitespace
    for(int j = 0; j < n - i; ++j) {
      printf(" ");
    }

    for(int j = 1; j <= i; ++j) {
      printf("%d ", num);
      num += 1;
    }
    printf("\n");
  }
  return 0;
}
