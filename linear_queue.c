#include<stdio.h>
#define SIZE 100
void enqueue();
void dequeue();
void show();
int arr[SIZE];
int Rear=-1;
int Front=-1;
int main()
{
    int ch;
    while(1)
    {
        printf("1. Enqueue Operation\n");
        printf("2. Dequeue Operation\n");
        printf("3. Display the queue\n");
        printf(" 4. Exit\n");
        printf("Enter the choice of operation:");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: 
            enqueue();
            break;
            case 2: 
            dequeue();
            break;
            case 3: 
            show();
            break;
            
            default: 
            printf("Incorrect choice\n");


        }

    }
}
void enqueue()
{
    int insert_item;
    if(Rear==SIZE-1)
    {
        printf("Overflow\n");

    }
    else
    {
        if(Front==-1)
       Front=0;
       printf("Element to be inserted in the queue:");
       scanf("%d",&insert_item);
       Rear=Rear+1;
       arr[Rear]=insert_item;

    }
}
void dequeue()
{
    if(Front==-1 || Front>Rear)
    {
        printf("Underflow\n");
        return;
    }
    else 
    {
        printf("Element deleted from the queue:%d\n",arr[Front]);
        Front=Front+1;


    }
}
void show()
{
    if(Front==-1)
    Front=0;
       printf("Empty Queue\n");
    
   
    else{
        printf("Queue:\n");
        for(int i=Front; i<=Rear; i++)
        printf("%d",arr[i]);
        printf("\n");
    }
}