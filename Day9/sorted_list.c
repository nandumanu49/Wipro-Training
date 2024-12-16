#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int rno;
    char name[20];
    double cgpa;
    struct node *next;
} Node;

Node *first = NULL, *new = NULL, *ptr = NULL, *prev = NULL;

void add();
void edit();
void del();
void view();

int main() {
    int ch = 0;

    while (ch != 5) {
        printf("\n1. Add node to sorted list\n2. Edit a student\n3. Delete a student\n4. View List\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                add();
                break;
            case 2:
                edit();
                break;
            case 3:
                del();
                break;
            case 4:
                view();
                break;
            case 5:
                break;
            default:
                printf("\nInvalid choice\n");
        }
    }
    return 0;
}

void add() {
    new = (Node *)malloc(sizeof(Node));
    if (new == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter student roll number: ");
    scanf("%d", &new->rno);
    printf("Enter student name: ");
    scanf("%s", new->name);
    printf("Enter student CGPA: ");
    scanf("%lf", &new->cgpa);
    
    new->next = NULL;

    if (first == NULL) {
        first = new;
    } else if (new->rno < first->rno) {
        new->next = first;
        first = new;
    } else {
        ptr = first;
        prev = NULL;
        while (ptr != NULL && new->rno >= ptr->rno) {
            prev = ptr;
            ptr = ptr->next;
        }

        if (ptr == NULL) {
            prev->next = new;
        } else {
            prev->next = new;
            new->next = ptr;
        }
    }
}

void edit() {
    int rno;
    printf("\nEnter the roll number of the student to edit: ");
    scanf("%d", &rno);

    ptr = first;
    while (ptr != NULL && ptr->rno != rno) {
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("\nStudent with roll number %d not found.\n", rno);
        return;
    }

    printf("\nEditing student with roll number %d\n", ptr->rno);
    printf("Enter new name: ");
    scanf("%s", ptr->name);
    printf("Enter new CGPA: ");
    scanf("%lf", &ptr->cgpa);
}

void del() {
    int rno;
    printf("\nEnter the roll number of the student to delete: ");
    scanf("%d", &rno);

    ptr = first;
    prev = NULL;

    while (ptr != NULL && ptr->rno != rno) {
        prev = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("\nStudent with roll number %d not found.\n", rno);
        return;
    }

    if (prev == NULL) {
        first = ptr->next; // Deleting the first node
    } else {
        prev->next = ptr->next; // Deleting a middle or last node
    }

    free(ptr);
    printf("\nStudent with roll number %d has been deleted.\n", rno);
}

void view() {
    if (first == NULL) {
        printf("\nList is empty\n");
        return;
    }

    printf("\n list of conents:\n");
    for (ptr = first; ptr != NULL; ptr = ptr->next) {
        printf("Roll No: %5d, Name: %15s, CGPA: %5.2f\n", ptr->rno, ptr->name, ptr->cgpa);
    }
}
