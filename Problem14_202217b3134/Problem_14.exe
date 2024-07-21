#include <stdio.h>

#define MAX_NODES 15

// Global variables for the tree structure
char tree[MAX_NODES + 1] = {'\0', 'D', 'A', 'F', 'E', 'B', 'R', 'T', 'G', 'Q', '\0', '\0', 'V', '\0', 'J', 'L'};

// Function to get the index of the left child of a node
int get_left_child(int index) {
    int left_child_index = 2 * index;
    if (left_child_index <= MAX_NODES && tree[left_child_index] != '\0') {
        return left_child_index;
    }
    return -1;  // No left child or out of bounds
}

// Function to get the index of the right child of a node
int get_right_child(int index) {
    int right_child_index = 2 * index + 1;
    if (right_child_index <= MAX_NODES && tree[right_child_index] != '\0') {
        return right_child_index;
    }
    return -1;  // No right child or out of bounds
}

// Pre-order traversal function
void preorder(int index) {
    if (index > 0 && index <= MAX_NODES && tree[index] != '\0') {
        printf("%c ", tree[index]);  // Visit root
        preorder(get_left_child(index));   // Traverse left subtree
        preorder(get_right_child(index));  // Traverse right subtree
    }
}

// Post-order traversal function
void postorder(int index) {
    if (index > 0 && index <= MAX_NODES && tree[index] != '\0') {
        postorder(get_left_child(index));   // Traverse left subtree
        postorder(get_right_child(index));  // Traverse right subtree
        printf("%c ", tree[index]);  // Visit root
    }
}

// In-order traversal function
void inorder(int index) {
    if (index > 0 && index <= MAX_NODES && tree[index] != '\0') {
        inorder(get_left_child(index));    // Traverse left subtree
        printf("%c ", tree[index]);  // Visit root
        inorder(get_right_child(index));   // Traverse right subtree
    }
}

// Main function to test the traversal methods
int main() {
    printf("Preorder Traversal:\n");
    preorder(1);  // Start with the root at index 1
    printf("\n");

    printf("Postorder Traversal:\n");
    postorder(1);  // Start with the root at index 1
    printf("\n");

    printf("Inorder Traversal:\n");
    inorder(1);  // Start with the root at index 1
    printf("\n");

    return 0;
}
