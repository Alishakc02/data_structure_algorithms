#include<stdio.h>
#define SIZE 10
int stack[10];
int top=-1;
void PUSH() 
{
    int num;
    printf("Enter the number you want to push:");
    scanf("%d",&num);
    if(top==SIZE-1)
    {
        printf("Stack overflow:");
    }
    else
    {
        top=top+1;
        stack[top]=num;
    }

}
void POP()
{
int dt;
if(top==-1)
{
    printf("Stack Overflow:");
}
else{
    dt=stack[top];
    top=top-1;
    printf("\n Popped item=%d",dt);
}

}
void DISPLAY()
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else{
        printf("|n Content of stack is:");
        for(i=0;i>=0;i++)
      {
        printf("%d\n",stack[i]);
      }
    }
}
int main()
{
    int choice;
    printf("1.PUSH\n 2. POP\n 3. DISPLAY\n 4. EXIT");
    while(1)
    {
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
           PUSH();
            break;
            case 2: 
           POP();
            break;
            case 3: 
            DISPLAY();
            break;
            
        }
    }
    return 0;
}