#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
void insertAtBegining(struct node** head, int newData) {

    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = newData;
    newNode->link = *head;

    *head = newNode;
}
void insertAtRandomPosition(struct node** head, int newdata, int position){

    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = newdata;

    //if the list is empty or the position is 0 the insert at begining

    if (position==0 || *head == NULL)
    {
        newnode->link = *head;
        *head = newnode;
    }
    
    struct node* currNode = *head; 
    int currPos = 0;
    while (currNode->link != NULL && currPos < position)
    {
        currNode = currNode->link;
        currPos++;
    }
    
    newnode->link = currNode->link;
    currNode->link = newnode;
}

void insertAtEnd(struct node** head, int newdata)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = newdata;

    struct node* currNode = *head;
    
    while (currNode->link != NULL)
    {
        currNode = currNode->link;
    }

    currNode->link = newnode;
    newnode->link = NULL;
    
}
void displayList(struct node* head)
{
    struct node* currNode = head;

    while (currNode != NULL)
    {
        printf("%d\n", currNode->data);
        currNode = currNode->link;
    }
    // printf("%d\n", currNode->data);
}
void deleteNode(struct node** head, int data){

    struct node* preNode = NULL;
    struct node* currNode = *head;
    if (currNode!=NULL && currNode->data==data)
    {
        *head = currNode->link;
        free(currNode);
        return;
    }

    while (currNode != NULL && currNode->data != data)
    {
        preNode = currNode;
        currNode = currNode->link;
    }

    preNode->link = currNode->link;
    free(currNode);
    
}
int main()
{
    struct node* head = NULL;

    int option;

    do
    {
        printf(" 1. Insert At Begining\n 2. Insert At End\n 3. Insert At Random Position\n 4. Delete node\n 5. Display The List\n 6. Exit\n");

        printf("Enter option: \n");
        scanf("%d", &option);


        switch (option)
        {
            case 1: {
                int data;
                printf("Enter the data to insert at begining: ");
                scanf("%d", &data);
                insertAtBegining(&head, data);
                break;
            }
            case 2:{
                int data;
                printf("Enter The data to insert at end: \n");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;
            }
            case 3:{
                int data,pos;
                printf("Enter The data to insert at specified position: \n");
                scanf("%d", &data);
                printf("Enter the position where to insert: \n");
                scanf("%d", &pos);
                insertAtRandomPosition(&head, data, pos);
                break;
            }
            case 4:{
                int data;
                printf("Enter the data you want to delete: \n");
                scanf("%d", &data);
                deleteNode(&head, data);
                break;
            }
            case 5:
                printf("Displaying The List: \n");
                displayList(head);
                break;
            case 6:
                printf("\nExit\n");
                break;
            default:
                printf("Choose a valid option!\n");
                break;
        }
    } while (option != 6);
    
    return 0;
}
