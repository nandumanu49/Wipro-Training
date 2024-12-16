#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int num;
    struct list *next;
} lst;

lst *first, *new, *last, *ptr;

int add();
int view();

int main() {
    int ch = 0;
    first = NULL;
    system("clear");

    while (ch != 3) {
        printf("\n1. Add node to list\n2. View List\n3. Exit\n");
        printf("Enter choice= ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                add();
                break;
            case 2:
                view();
                break;
            case 3:
                break;
            default:
                printf("\nInvalid choice\n");
        }
    }
    return 0;
}

int add() {
    new = (lst *)malloc(sizeof(lst));
    if (new == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter data- ");
    scanf("%d", &new->num);
    new->next = NULL;

    if (first == NULL) {
        first = last = new;
    } else {
        last->next = new;
        last = new;
    }
    return 0;
}

int view() {
    if (first == NULL) {
        printf("\nList is empty\n");
        return 1;
    }

    printf("\nList contents: ");
    for (ptr = first; ptr != NULL; ptr = ptr->next) {
        printf("%d -> ", ptr->num);
    }
    printf("NULL\n");
    return 0;
}
