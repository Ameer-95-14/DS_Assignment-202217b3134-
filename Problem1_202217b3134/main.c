#include<stdio.h>
#include<stdlib.h> // Include stdlib.h for exit()

#define MAX 10

// Global variables
int b[MAX], n, i, pos, e;

// Function prototypes
void create();
void insert();
void deletion();
void search();
void display();

int main() {
    int ch;
    char g='y';
    
    do {
        printf("\nMain Menu");
        printf("\n1. Create\n2. Delete\n3. Search\n4. Insert\n5. Display\n6. Exit\n");
        printf("\nEnter your Choice: ");
        scanf("%d", &ch);
        
        switch(ch) {
            case 1:
                create();
                break;
            case 2:
                deletion();
                break;
            case 3:
                search();
                break;
            case 4:
                insert();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0); // Exit the program
            default:
                printf("\nEnter the correct choice!\n");
        }
        
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &g);
    } while(g == 'y' || g == 'Y');
    
    return 0;
}

void create() {
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    
    if(n > MAX) {
        printf("\nCannot create list. Number of elements exceeds MAX limit.\n");
        return;
    }
    
    printf("\nEnter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &b[i]);
    }
}

void deletion() {
    if(n == 0) {
        printf("\nList is empty. Nothing to delete.\n");
        return;
    }
    
    printf("\nEnter the position to delete (0 to %d): ", n-1);
    scanf("%d", &pos);
    
    if(pos < 0 || pos >= n) {
        printf("\nInvalid position.\n");
        return;
    }
    
    for(i = pos; i < n - 1; i++) {
        b[i] = b[i + 1];
    }
    n--;
    
    printf("\nElement deleted successfully.\n");
}

void search() {
    if(n == 0) {
        printf("\nList is empty. Cannot search.\n");
        return;
    }
    
    printf("\nEnter the element to search: ");
    scanf("%d", &e);
    
    for(i = 0; i < n; i++) {
        if(b[i] == e) {
            printf("\nElement %d found at position %d.\n", e, i);
            return;
        }
    }
    
    printf("\nElement %d not found in the list.\n", e);
}

void insert() {
    if(n == MAX) {
        printf("\nList is full. Cannot insert.\n");
        return;
    }
    
    printf("\nEnter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    
    if(pos < 0 || pos > n) {
        printf("\nInvalid position.\n");
        return;
    }
    
    printf("\nEnter the element to insert: ");
    scanf("%d", &b[n]);
    
    for(i = n; i > pos; i--) {
        b[i] = b[i - 1];
    }
    b[pos] = b[n];
    n++;
    
    printf("\nElement inserted successfully.\n");
}

void display() {
    if(n == 0) {
        printf("\nList is empty.\n");
        return;
    }
    
    printf("\nElements in the list:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
}
