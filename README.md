# DSA_With_C

## 1. Linked List:
### struct Node** head meaning:
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
