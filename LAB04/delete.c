#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *HEAD = NULL;

void pop();
void end_delete();
void delete_at_pos(int);
void display();
void insert();

int main()
{
    int choice;
    do
    {
        printf("\n1. delete from beginning\n2. delete from end\n3. delete at index\n4. display\n5. insert\n0. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            pop();
            break;
        case 2:
            end_delete();
            break;
        case 3:
        {
            int pos;
            printf("Enter the index to delete: ");
            scanf("%d", &pos);
            delete_at_pos(pos);
        }
        break;
        case 4:
            display();
            break;
        case 5:
            insert();
            break;
        case 0:
            printf("Exiting program.\n");
            break;
        default:
            printf("Enter the correct choice.\n");
            break;
        }
    } while (choice != 0);

    return 0;
}

void pop()
{
    struct node *ptr = HEAD;
    if (ptr == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    HEAD = HEAD->next;
    printf("Element deleted: %d\n", ptr->data);
    free(ptr);
}

void end_delete()
{
    struct node *ptr = HEAD;
    struct node *prev = NULL;

    if (ptr == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    while (ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    if (prev != NULL)
    {
        prev->next = NULL;
    }
    else
    {
        HEAD = NULL;
    }

    printf("Element deleted: %d\n", ptr->data);
    free(ptr);
}

void delete_at_pos(int ind)
{
    struct node *ptr = HEAD;
    struct node *prev = NULL;

    int i = 1;
    while (ptr != NULL && i < ind)
    {
        prev = ptr;
        ptr = ptr->next;
        i++;
    }

    if (ptr == NULL)
    {
        printf("Index out of bounds.\n");
        return;
    }

    if (prev != NULL)
    {
        prev->next = ptr->next;
    }
    else
    {
        HEAD = ptr->next;
    }

    printf("Element deleted: %d\n", ptr->data);
    free(ptr);
}

void display()
{
    struct node *current = HEAD;
    if (current == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        printf("List elements: ");
        while (current != NULL)
        {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}

void insert()
{
    int ins;
    printf("Enter element to insert: ");
    scanf("%d", &ins);

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = ins;
    ptr->next = HEAD;

    HEAD = ptr;
}
