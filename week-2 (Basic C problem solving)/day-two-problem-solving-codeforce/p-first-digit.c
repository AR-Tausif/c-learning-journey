#include <stdio.h>

int main()
{
  int x;
  scanf("%d", &x);
  int firstDigit = x;
  while(firstDigit >= 10)
  {
    firstDigit = firstDigit / 10;
  }

  if(firstDigit % 2 == 0)
  {
    printf("EVEN");
  }
  else
  {
    printf("ODD");
  }
  return 0;
}