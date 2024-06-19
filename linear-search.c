#include<stdio.h>
int main()
{
    int a[100], n,key,i;
    printf("How many elements?");
    scanf("%d",&n);
    printf("Enter array elements:");
    for( i=0; i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter search key:");
    scanf("%d", &key);
    for( i=0; i<n;  i++)
    {
        if (key==a[i])
        {
            break;

        }
    }

if(i==n)
{
    printf("\n Search Failure:");
}
else{
    printf("\n Search successful and location =%d", i+1);
    return 0;
}
}