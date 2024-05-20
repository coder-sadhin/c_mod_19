#include <stdio.h>

void digitP(int n){
    int summition=n/10;
    int obosistho=n%10;
    if(obosistho==0) return;
    digitP(summition);
    printf("%d ",obosistho);
}

int main()
{

    int n;
    scanf("%d",&n);
    for (int i = 1; i < n+1; i++)
    {
        int num;
        scanf("%d", &num);
        digitP(num);
        printf("\n");
    }
    

    
    return 0;
}