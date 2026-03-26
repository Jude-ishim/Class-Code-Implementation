#include <stdio.h>
#include <stdlib.h>

// 1. Define the structure for a linked list node
struct Node {
    int data;           // The value stored in the node
    struct Node* next;  // Pointer to the next node in the list
};

// 2. Function to create a new node
struct Node* createNode(int value) {
    // Allocate memory for the new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    // Check if memory was allocated successfully
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    
    newNode->data = value; // Assign the value
    newNode->next = NULL;  // Initialize the next pointer to NULL
    
    return newNode;
}

// 3. Function to print the entire linked list
void printList(struct Node* head) {
    struct Node* current = head;
    
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next; // Move to the next node
    }
    printf("NULL\n");
}

int main() {
    // Initialize an empty list (head is NULL)
    struct Node* head = NULL;
    
    // Create three separate nodes
    struct Node* firstNode = createNode(10);
    struct Node* secondNode = createNode(20);
    struct Node* thirdNode = createNode(30);
    
    // Link the nodes together
    head = firstNode;               // Head points to the first node
    firstNode->next = secondNode;   // First node points to the second
    secondNode->next = thirdNode;   // Second node points to the third
  
    
    // Print the final list
    printList(head);
    
    // Clean up memory 
    free(firstNode);
    free(secondNode);
    free(thirdNode);
    
    return 0;
}