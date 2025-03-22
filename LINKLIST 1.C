#include <stdio.h>
#include <stdlib.h>
 
typedef struct node
{
    int data;
    struct node* next;
} node;
 
typedef void (*callback)(node* data);
 
/*
    create a new node
    initialize the data and next field
     return the newly created node
*/

node* create(int data,node* next)
{
    node* new_node = (node*)malloc(sizeof(node));
    if(new_node == NULL)
    {
        printf("Error creating a new node.\n");
        exit(0);
    }
    new_node->data = data;
    new_node->next = next;
 
    return new_node;
}
 
/*
    add a new node at the beginning of the list
*/

node* prepend(node* head,int data)
{
    node* new_node = create(data,head);
    head = new_node;
    return head;
}
 
/*
    add a new node at the end of the list
*/


node* append(node* head, int data)
{
    node *cursor = head;
    node* new_node =  create(data,NULL);
    if(head == NULL)
	return NULL;
    /* go to the last node */

    while(cursor->next != NULL)
	cursor = cursor->next;

    /* create a new node */

    cursor->next = new_node;
 
    return head;
}
 
/*
    insert a new node after the prev node
*/

node* insert_after(node *head, int data, node* prev)
{
    node *cursor = head;

    if(head == NULL || prev == NULL)
	return NULL;
    /* find the prev node, starting from the first node*/

    while(cursor != prev)
        cursor = cursor->next;
 
    if(cursor != NULL)
    {
        node* new_node = create(data,cursor->next);
        cursor->next = new_node;
        return head;
    }
    else
    {
	return NULL;
    }
}

/*
    insert a new node before the nxt node
*/

node* insert_before(node *head, int data, node* nxt)
{
    node *cursor = head;
    if(nxt == NULL || head == NULL)
	return NULL;

    if(head == nxt)
    {
	head = prepend(head,data);
	return head;
    }

    /* find the prev node, starting from the first node*/

    while(cursor != NULL)
    {
        if(cursor->next == nxt)
            break;
        cursor = cursor->next;
    }
 
    if(cursor != NULL)
    {
        node* new_node = create(data,cursor->next);
        cursor->next = new_node;
        return head;
    }
    else
    {
        return NULL;
    }
}
 
/*
    traverse the linked list
*/

void traverse(node* head,callback f)
{
    node* cursor = head;
    while(cursor != NULL)
    {
        f(cursor);
        cursor = cursor->next;
    }
}

/*
    remove node from the front of list
*/

node* remove_front(node* head)
{
    node *front = head;
    if(head == NULL)
	return NULL;

    head = head->next;
    front->next = NULL;
    /* is this the last node in the list */
    if(front == head)
        head = NULL;
    free(front);
    return head;
}
 
/*
    remove node from the back of the list
*/

node* remove_back(node* head)
{
    node *cursor = head;
    node *back = NULL;

    if(head == NULL)
	return NULL;

    while(cursor->next != NULL)
    {
        back = cursor;
        cursor = cursor->next;
    }
 
    if(back != NULL)
        back->next = NULL;
 
    /* if this is the last node in the list*/
    if(cursor == head)
        head = NULL;
 
    free(cursor);
 
    return head;
}
 
/*
    remove a node from the list
*/

node* remove_any(node* head,node* nd)
{
    node* cursor = head;
    if(nd == NULL)
	return NULL;
    /* if the node is the first node */
    if(nd == head)
	return remove_front(head);

    /* if the node is the last node */
    if(nd->next == NULL)
	return remove_back(head);

    /* if the node is in the middle */

    while(cursor != NULL)
    {
        if(cursor->next == nd)
            break;
        cursor = cursor->next;
    }
 
    if(cursor != NULL)
    {
        node* tmp = cursor->next;
        cursor->next = tmp->next;
        tmp->next = NULL;
        free(tmp);
    }
    return head;
 
}

/*
    display a node
*/

void display(node* n)
{
    if(n != NULL)
        printf("%d ", n->data);
}
 
/*
    Search for a specific node with input data
 
    return the first matched node that stores the input data,
    otherwise return NULL
*/

node* search(node* head,int data)
{
 
    node *cursor = head;
    while(cursor!=NULL)
    {
        if(cursor->data == data)
            return cursor;
        cursor = cursor->next;
    }
    return NULL;
}
 
/*
    remove all element of the list
*/

void dispose(node *head)
{
    node *cursor, *tmp;
 
    if(head != NULL)
    {
        cursor = head->next;
        head->next = NULL;
        while(cursor != NULL)
        {
            tmp = cursor->next;
            free(cursor);
            cursor = tmp;
        }
    }
}

/*
    return the number of elements in the list
*/

int count(node *head)
{
    node *cursor = head;
    int c = 0;
    while(cursor != NULL)
    {
        c++;
        cursor = cursor->next;
    }
    return c;
}

/*
    reverse the linked list
*/

node* reverse(node* head)
{
    node* prev    = NULL;
    node* current = head;
    node* next;
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

/*
    display the menu
*/

void menu()
{
    printf("--- C Linked List Demonstration --- \n\n");
    printf("0.menu\n");
    printf("1.prepend an element\n");
    printf("2.append an element\n");
    printf("3.search for an element\n");
    printf("4.insert after an element\n");
    printf("5.insert before an element\n");
    printf("6.remove front node\n");
    printf("7.remove back node\n");
    printf("8.remove any node\n");
    printf("9.Display the list\n");
    printf("10.Reverse the linked list\n");
    printf("-1.quit\n");

}

int main()
{
    int command = 0;
    int data;

    node* head = NULL;
    node* tmp = NULL;
    callback disp = display;

    menu();
    while(1)
    {
	printf("\nEnter a command(0-10,-1 to quit):");
	scanf("%d",&command);

	if(command == -1)
	    break;
	switch(command)
	{
	case 0:
	    menu();
	    break;
	case 1:
	    printf("Please enter a number to prepend:");
	    scanf("%d",&data);
	    head = prepend(head,data);
	    traverse(head,disp);
	    break;
	case 2:
	    printf("Please enter a number to append:");
	    scanf("%d",&data);
	    head = append(head,data);
	    traverse(head,disp);
	    break;
	case 3:
	    printf("Please enter a number to search:");
	    scanf("%d",&data);
	    tmp = search(head,data);
	    if(tmp != NULL)
	    {
		printf("Element with value %d found.",data);
	    }
	    else
	    {
		printf("Element with value %d not found.",data);
	    }
	    break;
	case 4:
	    printf("Enter the element value where you want to insert after:");
	    scanf("%d",&data);
	    tmp = search(head,data);
	    if(tmp != NULL)
	    {
		printf("Enter the element value to insert after:");
		scanf("%d",&data);
		head = insert_after(head,data,tmp);
		if(head != NULL)
		    traverse(head,disp);
	    }
	    else
	    {
		printf("Element with value %d not found.",data);
	    }
	    break;
	case 5:
	    printf("Enter the element value where you want to insert before:");
	    scanf("%d",&data);
	    tmp = search(head,data);
	    if(tmp != NULL)
	    {
		printf("Enter the element value to insert before:");
		scanf("%d",&data);
		head = insert_before(head,data,tmp);

		if(head != NULL)
		    traverse(head,disp);
	    }
	    else
	    {
		printf("Element with value %d not found.",data);
	    }
	    break;
	case 6:
	    head = remove_front(head);
	    if(head != NULL)
		traverse(head,disp);
	    break;
	case 7:
	    head = remove_back(head);
	    if(head != NULL)
		traverse(head,disp);
	    break;
	case 8:
	    printf("Enter the element value to remove:");
	    scanf("%d",&data);
	    tmp = search(head,data);
	    if(tmp != NULL)
	    {
		remove_any(head,tmp);
		if(head != NULL)
		    traverse(head,disp);
	    }
	    else
	    {
		printf("Element with value %d not found.",data);
	    }
	    break;
	case 9:
	    if(head != NULL)
		traverse(head,disp);
	    break;

	case 10:
	    head = reverse(head);
	    if(head != NULL)
		traverse(head,disp);
	    break;
	}

    }
    dispose(head);
    
    return 0;
}
