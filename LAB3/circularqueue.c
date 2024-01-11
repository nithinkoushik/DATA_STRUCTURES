#include <stdio.h>
#define MAX 10

void enqueue(int ele);
int dequeue();
void display();

int QUEUE[MAX];
int FRONT = -1;
int REAR = -1;

void main()
{
    int choice;

    while (1)
    {
        printf("1. TO ENQUEUE\n2. TO DEQUEUE\n3. TO DISPLAY\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("Enter the element to insert: ");
            int e;
            scanf("%d", &e);
            enqueue(e);
            break;

        case 2:{
            int del;
            del = dequeue();
            if (del != -1)
                printf("Deleted element: %d\n", del);
            break;}

        case 3:
            display();
            break;

        default:
            printf("Enter correct choice\n");
        }
    }
}

void enqueue(int ele)
{
    if (FRONT == REAR + 1 || (FRONT == 0 && REAR == (MAX - 1)))
        printf("QUEUE OVERFLOW\n");
    else
    {
        if (FRONT == -1)
            FRONT = 0;
        REAR = (REAR + 1) % MAX;
        QUEUE[REAR] = ele;
        printf("INSERTED\n");
    }
}

int dequeue()
{
    int deleted;
    if (FRONT == -1)
    {
        printf("QUEUE IS EMPTY\n");
        return -1;
    }
    else
    {
        deleted = QUEUE[FRONT];
        if (FRONT == REAR)
        {
            FRONT = -1;
            REAR = -1;
        }
        else
        {
            FRONT = (FRONT + 1) % MAX;
        }
    }
    return deleted;
}

void display()
{
    int i;
    if (FRONT == -1)
    {
        printf("QUEUE IS EMPTY\n");
        return;
    }

    printf("The queue elements are: ");
    for (i = FRONT; i != REAR; i = (i + 1) % MAX)
        printf("%d ", QUEUE[i]);
    printf("%d\n", QUEUE[i]); // Print the last element
    printf("REAR = %d\n", REAR);
}
