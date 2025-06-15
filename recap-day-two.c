
#include <stdio.h>


void problemTwo()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %.2f\n", a, b, (float)a/b);
}

int main()
{
    printf("Recently I heard that you've achieved 95%% marks in your exam. \nThis is brilliant! \nI wish you'll shine in your life! \tGood luck wiht all the barriers(/\\) in your life.");
    printf("\n\n\n");

    problemTwo();
    return 0;
}