#include<stdio.h>
int stack[100],choice,n,top,x,i;

// we intilise the stack as the array name having 100 size of array and four more integer declearation is done 
// choice , i, n,top,x
void push(void);
// in stack operation have mainly four step for inserting and deleting and updating and modify 
void pop(void);
// pop is also know for peek mean the top element of stack is pointed using pop operation
void display(void);
// display is show the element of stack but we need to call display 
int main()
{
    top=-1;
    // top have -1 value to starting from -1
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    // first small n is used for asking user to enter how many number using n datatypes but in this case we can not exceeds more than 100

    printf("\n\t STACK OPERATIONS USING ARRAY");

    printf("\n\t--------------------------------");

    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        // here this lines using swtich statment 
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice 1 2 3 and 4");
            }
                
        }
    }
    while(choice!=4);
    // if choice is not equall to to 4 then through errors
    return 0;
}
void push()
{
    if(top>=n-1)
    // void push have if top>=n-1 mean if the value of n is 5 then 4 is must be less than top mean -1 in the array we store element in the starting from 0
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        // x is asking value for push into the stack using choice 
        top++;
        // and one by one top is incease like 0 1 2 3 4 then and exit 
        stack[top]=x;

    }
}
void pop()
{
    if(top<=-1)
    // only the difference of push and pop is less than and greater and also despite of n we use here blank space  than in the if condition
    // in pop here is if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
        // pop means we pop the element from the stack using top value peek value need to remove from the stack 
        
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}
