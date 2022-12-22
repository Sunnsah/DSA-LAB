// Write a program to implement a linear queue with its operation

#include <stdio.h>
#include<stdlib.h>
#define CAPACITY 50
//here we define the capacity of the array using #define 50

 
void insert();
void delete();
void display();
int queue_array[CAPACITY];
int rear = - 1;
//reara and font have same value in the linear and circular queue that is -1
int front = - 1;
void main()
{
    int choice;
    while (1)
    {
        printf("1.Enter 1 to insert element to queue \n");
        printf("2.Enter 2 to delete element from queue \n");
        printf("3.Enter 3 to display all elements of queue \n");
        printf("4.Enter 4 to quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf(" Wrong choice \n");
        } 
    } 
} 
 
void insert()
{
    int element;
    if (rear == CAPACITY - 1)
    //insert in c we need to declear the condition if(rear=capacity-1) -1=50-1  
    printf("Queue is full\n");
    else
    {
        if (front == - 1)
        
        front = 0;
        printf("Enter element which is to be inserted ");
        scanf("%d", &element);
        rear = rear + 1;
        queue_array[rear] = element;
    }
} /* End of insert() */
 
void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue is empty we cannot delete an element  \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        //queue is delete from the begining of the queue bcoz its follow the first in first out principle
        
        front = front + 1;
    }
} /* End of delete() */
 
void display()
{
    int i;
    if (front==-1 || front > rear)
        printf("Queue is empty \n");
    else
    {
        printf("Elements of Queue are: \n");
        for (i = front; i <= rear; i++)
        //in the for loop condition here we use i = front means the value of i and front is -1 and -1 less than equall to rear and i increment
        
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}
