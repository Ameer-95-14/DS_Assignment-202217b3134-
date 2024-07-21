#include<stdio.h>
#include<stdlib.h>

#define n 5

void main()
{
    int queue[n], ch=1, front=0, rear=0, i;

    printf("Queue using Array\n");
    printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");

    while(ch)
    {
        printf("\nEnter the Choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: // Insertion
                if(rear == n)
                    printf("\nQueue is Full\n");
                else
                {
                    printf("\nEnter no: ");
                    scanf("%d", &queue[rear++]);
                }
                break;
            case 2: // Deletion
                if(front == rear)
                    printf("\nQueue is empty\n");
                else
                {
                    printf("\nDeleted Element is %d\n", queue[front++]);
                }
                break;
            case 3: // Display
                printf("\nQueue Elements are:\n");
                if(front == rear)
                    printf("Queue is Empty\n");
                else
                {
                    for(i = front; i < rear; i++)
                    {
                        printf("%d\n", queue[i]);
                    }
                }
                break;
            case 4: // Exit
                exit(0);
            default:
                printf("Wrong Choice: Please see the options\n");
        }
    }
}
