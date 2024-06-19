#include <stdio.h>  
int binarySearch(int a[], int l, int h, int key)    
{    
    int mid;
    if(l>h)   
    {
        printf("Search failure:");
        return -1;
    } 
    mid=(l+h)/2;

    
    if(key<a[mid])
    {
        binarySearch(a,l,mid-1,key);

    }
    else if(key>a[mid])
    {
        binarySearch(a, mid+1,h,key);

    }
    else{
        printf("|n Search Successful");
        return mid+1;
    }
}
int main()
 {  
  int a[100];
  int n,i,l,h,key,loc; 
 printf("Enter the value of n:");
 scanf("%d", & n );
printf("Enter the array elements:");
for( i=0; i<n; i++)
{
    scanf("%d",&a[i]);

}
printf("Enter the search key:");
scanf("%d",&key);
l=0;
h=n-1;
loc=binarySearch(a,l,h,key);
printf("\n Key %d is at loctaion %d", key ,loc);
return 0 ;

  
}  