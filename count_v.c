#include <stdio.h>

int fun(char s[], int i){
    // base case
    if(s[i]=='\0'){
        return 0;
    }
    if(s[i]>='A' && s[i]<='Z'){
        s[i]=s[i]+32;
    }
    int ans=fun(s,i+1);
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
        return ans+1;
    }
    else{
        return ans;
    }
}

int main()
{
    char newC[205];
    fgets(newC,205,stdin);
    int ans=fun(newC,0);
    printf("%d", ans);
    return 0;

}