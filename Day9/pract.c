#include <stdio.h>
#include <stdlib.h>

typedef struct queue {
    int num;
    struct queue *next;
} qs;

qs *front, *rear, *new, *ptr;

int enque();
int deque();
int view();

int main() {
    int ch = 0;
    system("clear");
    front = rear = NULL;
    while (ch != 4) {
        printf("\n1. Add to queue\n2. Delete from queue\n3. View the contents of queue\n4. Exit\n");
        printf("\nEnter choice- ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                enque();
                break;
            case 2:
                deque();
                break;
            case 3:
                view();
                break;
            case 4:
                break;
            default:
                printf("\nInvalid choice\n");
        }
    }
    return 0;
}

int enque() 
{
    new = (qs *)malloc(sizeof(qs));
    if (new == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Indicate failure
    }
    printf("Enter number- ");
    scanf("%d", &new->num);
    if (front == NULL) {
        front = rear = new;
        new->next = NULL;
    } else {
        rear->next = new;
        rear = new;
        rear->next = NULL;
    }
    return 0; // Indicate success
}

int deque() {
    if (front == NULL) {
        printf("\nEmpty Queue\n");
        return 1; // Indicate failure
    }
    ptr = front;
    front = front->next;
    if (front == NULL) {
        rear = NULL; // Update rear if queue is now empty
    }
    free(ptr);
    ptr = NULL;
    return 0; // Indicate success
}

int view() {
    if (front == NULL) {
        printf("\nEmpty Queue\n");
        return 1; // Indicate failure
    }
    for (ptr = front; ptr != NULL; ptr = ptr->next) {
        printf("--%3d--", ptr->num);
    }
    printf("\n");
    return 0; // Indicate success
}
