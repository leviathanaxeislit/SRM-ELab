#include <stdio.h>
#define MAX 100
int main() {
  int n, i, a[MAX];
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  for(i=n-1; i>=0; i--) {
    printf("%d ", a[i]);
  }
  return 0;
}