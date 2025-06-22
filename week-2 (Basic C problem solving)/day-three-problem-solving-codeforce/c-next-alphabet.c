#include <stdio.h>

int main()
{
  char alpha;
  scanf("%c", &alpha);
  if(alpha == 'z')
    {
        printf("%c",alpha - 25);
    }
    else{
        printf("%c", alpha+1);
    }
  return 0;
}