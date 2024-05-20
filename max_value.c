#include <stdio.h>
#include <limits.h>

int fan(int arr[], int n, int i){
    if(i==n){
        return INT_MIN;
    }
    int maxValue=fan(arr,n,i+1);
    if(arr[i]>maxValue){
        return arr[i];
    }
    else{
        return maxValue;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maxValue=fan(arr,n,0);
    printf("%d",maxValue);
    return 0;

}