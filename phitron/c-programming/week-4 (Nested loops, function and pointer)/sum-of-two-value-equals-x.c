#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    // for(int i=0; i<N; i++)
    // {
    //     printf("%d", arr[i]);

    // }
    int x;
    scanf("%d", &x);

    int flag = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                flag = 1;
            }
        }
        // printf("\n");
    }
    if (flag == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}
