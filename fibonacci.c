#include <stdio.h>
int main() {
  int t1 = 0, t2 = 1, nextTerm = 0, n;
  int i=1;
  printf("Enter a positive number: ");
  scanf("%d", &n);
do
{
  i++;
  printf("%d\t", nextTerm);
  t1=t2;
  t2=nextTerm;
  nextTerm=t1+t2;
} while (i<=n);
}
