#include<stdio.h>
#include<stdlib.h>

struct node {
   int info;
   struct node *next;
};

struct node* getNode(void) {
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node)); // Allocate memory for the full struct
    return p;
}

struct node* start = NULL; // Initialize start to NULL

void insBeg(int x) {
    struct node* p = getNode();
    p->info = x;
    p->next = start;
    start = p;
}

void insAft(struct node* Q, int x) {
    if (Q == NULL) {
        printf("Error: Q is NULL\n");
        return;
    }
    struct node* p = getNode();
    p->info = x;
    p->next = Q->next; // Link the new node to Q's next
    Q->next = p;       // Update Q's next to point to the new node
}

void traverse(void) {
    struct node* p = start;
    while (p != NULL) {
        printf("%d\t", p->info);
        p = p->next;
    }
    printf("\n");
}

int main() {
    insBeg(10);
    insBeg(20);
    insBeg(30);
    insBeg(40);
    insBeg(50);

    insAft(start->next, 15); // Insert 15 after the first node
    traverse();

    return 0;
}
