#include <stdio.h>
int main()
{

int N;
scanf("%d", &N);
int star=1, space=N-1;

for(int i =0; i<N; i++) // loop for lines
{
  for(int j=0;j<space; j++) // printing space
  {
    printf(" ");
  }
  for(int j=1; j<=star;j++) // for printing star
  {
    printf("*");
  }
  printf("\n");
  star+=1;
  space--;
}

return 0;
}
   