#include <stdio.h>
 
int product(int, int);
 
int main()
{
    int x, y, pro;
 
    printf("Enter The Numbers To Find The Product: ");
    scanf("%d%d", &x, &y);
    pro = product(x, y);
    printf("Product Of The Given Numbers is %d\n",  pro);
    return 0;
}
 
int product(int x, int y)
{
    if (x < y)
    {
        return product(y, x);
    }
    else if (y != 0)
    {
        return (x + product(x, y - 1));
    }
    else
    {
        return 0;
    }
}

