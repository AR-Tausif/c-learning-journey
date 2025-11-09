 space2=0;

for(int i =0; i<N; i++) // loop for lines
{
  for(int j=0;j<=space2; j++) // printing space
  {
    printf(" ");
  }
  for(int j=1; j<=star2;j++) // for printing star
  {
    printf("*");
  }
  printf("\n");
  star-=2;
  space++;
}

return 0;
}