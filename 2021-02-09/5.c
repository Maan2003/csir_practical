#include <stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);

  for(int i = 0; i < n; ++i) {

    // print the whitespace
    for(int _ = 0; _ < i; ++_) {
      printf(" ");
    }

    // print the stars
    for(int _ = 0; _ < 2 * (n - i) - 1; ++_) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
