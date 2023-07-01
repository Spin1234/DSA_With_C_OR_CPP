# DSA_With_C

## 1. Linked List:
### struct Node** head meaning :

In the linked list implementation in C that I provided, `struct Node** head` is a pointer to a pointer to a `struct Node`. It is used as a double pointer to keep track of the head or the start of the linked list.

Why use a double pointer? 

When you pass the `head` pointer to a function in C, you're passing a copy of the pointer. Any modifications made to that copy inside the function will not affect the original `head` pointer outside the function. To overcome this limitation and modify the original `head` pointer itself, you need to pass a pointer to the `head` pointer. That's where the double pointer comes into play.

By using a double pointer, you can modify the original pointer (`head`) from within a function. When changes are made to the `head` pointer using a double pointer, they are reflected outside the function.

Here's an example to illustrate how the double pointer works:

```c
void insertAtBeginning(struct Node** head, int newData) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // Assign the data to the new node
    newNode->data = newData;

    // Set the next pointer of the new node to the current head
    newNode->next = *head;

    // Update the head to point to the new node
    *head = newNode;
}

int main() {
    struct Node* head = NULL;
    insertAtBeginning(&head, 3);
    return 0;
}
```

In the `insertAtBeginning` function, we receive `struct Node** head` as a parameter. By dereferencing `head` using `*head`, we get the original `head` pointer inside the function. We can modify it to point to the new node using `*head = newNode;`. This change to the original `head` pointer will be reflected outside the function in the `main` function.

So, the double pointer allows us to modify the original pointer (`head`) rather than just a copy of it, enabling us to update the linked list correctly.

### void displayList(struct Node* head) 
why double pointer is not used here??

In the `displayList` function, a double pointer is not used for the `head` parameter because the function only needs to read the value of `head` to traverse the linked list. There is no need to modify the `head` pointer itself within the function.

A double pointer is typically used when you want to modify the pointer itself, such as when inserting a node at the beginning or reassigning the head pointer after deleting a node. However, in the `displayList` function, the `head` pointer is passed by value, which means any changes made to `head` within the function will not affect the original pointer in the caller.

Therefore, a single pointer (`struct Node*`) is sufficient to traverse the linked list and display its contents in the `displayList` function.

### Delete node

Here's a function to delete a node from the linked list:

```c
void deleteNode(struct Node** head, int key) {
    struct Node* prevNode = NULL;
    struct Node* currNode = *head;

    if (currNode != NULL && currNode->data == key) {
        *head = currNode->link;
        free(currNode);
        return;
    }

    while (currNode != NULL && currNode->data != key) {
        prevNode = currNode;
        currNode = currNode->link;
    }

    if (currNode == NULL) {
        printf("Node not found in the list.\n");
        return;
    }

    prevNode->link = currNode->link;
    free(currNode);
}
```

In this code, the `deleteNode` function is added to delete a node with a given value from the linked list. The function traverses the linked list and finds the node with the specified key. It then adjusts the pointers of the previous node and the next node to skip over the node to be deleted. Finally, it frees the memory allocated for the deleted node.
