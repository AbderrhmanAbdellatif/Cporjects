#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

void printNode(node_t *root);
void push(node_t **head, int val);
int isEmpty(node_t *head);
void printList(node_t *currentPtr);

int main(void)
{ 
	node_t *head = NULL; 
 	push(&head, 5);
 	push(&head, 6);
 	push(&head, 8);
 	push(&head, 10);
 	printList(head);
}

void printNode(node_t *root)
{ 	
	printf("val: %d ", root->val);
}

void push(node_t **head, int val) {
	node_t *newPtr = (node_t *) malloc( sizeof(struct node) );
	if (newPtr != NULL) {
		newPtr->val = val; // place value in node
    	newPtr->next = NULL; // node does not link to another node
		
		if(*head == NULL){
			printf("head - null\n");
			*head = newPtr;
		}
		else{
			printf("head - not null\n");
			node_t *current = *head;
    		while (current->next != NULL) {
        		current = current->next;
    		}	
			current->next = newPtr;	
		}
	}  
	else {
      printf("%d not inserted. No memory available.\n", val);
	} 
}

// return 1 if the list is empty, 0 otherwise
int isEmpty(node_t *head)
{ 
   return head == NULL;
} 

// print the list
void printList(node_t *currentPtr)
{ 
   // if list is empty
   if (isEmpty(currentPtr)) {
      puts("List is empty.\n");
   } 
   else { 
      puts("The list is:");

      // while not the end of the list
      while (currentPtr != NULL) { 
         printf("%d --> ", currentPtr->val);
         currentPtr = currentPtr->next;   
      } 

      puts("NULL\n");
   } 
} 

