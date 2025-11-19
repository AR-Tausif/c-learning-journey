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

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp =arr[i];
                printf("%d %dyes\n", arr[i],temp);
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        // printf("\n");
    }
     for(int i=0; i<N; i++)
    {
        printf("%d", arr[i]);

    }
    return 0;
}
