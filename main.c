#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int count;
int bfsm(char t[20],char p[10]){
    int m,n,i,j;
    n=strlen(t);
    m=strlen(p);
    for(i=0;i<=n-m;i++){
        j=0;
        while(j<m && p[j]==t[i+j])
        {
            j=j+1;
            count++;
        }
        count++;
        if (j==m)
            return i+1;
    }
    return -1;

}
int main()
{
    char t[20],p[10];
    int res;
    printf("Enter the text\t");
    scanf("%s",t);
    printf("Enter the pattern\t");
    scanf("%s",p);
    res=bfsm(t,p);
    if(res==-1)
        printf("Pattern not found");
    else
        printf("Pattern found at %d position",res);
    printf("\n Number of comparisons=%d",count-1);
    return 0;
}
