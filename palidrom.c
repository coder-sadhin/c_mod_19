#include <stdio.h>
#include <string.h>


int main()
{
    char a[201],b[201];
    scanf("%s", a);
    strcpy(b,a);
    for (int i = 0, j=strlen(b)-1; i < j;)
    {
        char temp=b[i];
        b[i]=b[j];
        b[j]=temp;
        i++;
        j--;
    }
    int ans=strcmp(a,b);
    if(ans==0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;

}