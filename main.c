#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void insertionsort(int A[SIZE],int n)
{
    int i,j,item;
    for(i=1;i<=n-1;i++)
    {
        item=A[i];
        j=i-1;
        while(j>=0 && A[j]>item)
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=item;
    }
}
int main()
{
    int A[SIZE],n,i;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    printf("\nEnter the elements into array:");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    insertionsort(A,n);
    printf("\nAfter Sorting:\t");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    return 0;
}
