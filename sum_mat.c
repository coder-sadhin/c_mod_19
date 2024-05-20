#include <stdio.h>
int main()
{
    int N,M;
    scanf("%d %d", &N, &M);
    int arr[N][M], arr2[N][M], sum_arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int sum=arr[i][j]+arr2[i][j];
            sum_arr[i][j]=sum;
        }
    }


    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", sum_arr[i][j]);
        }
        printf("\n");
    }

    return 0;

}