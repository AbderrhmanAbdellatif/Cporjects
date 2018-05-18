#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int val;
    struct node * next;
} node_t;

//prototypes
void printNode(node_t *root);
void push(node_t **head, int val);
int isEmpty(node_t *head);
void printList(node_t *currentPtr);


void  main(void)
{ 
	node_t *head1 = NULL; 
	node_t *head2 = NULL;
	node_t *mergedList = NULL;
	node_t *splitOdd = NULL;
	node_t *splitEven = NULL;
	
	int list1[] = {2,5,7,8,11,13,16,20};
	int list2[] = {3,4,7,9,13,17,19,22,23};
	int size1 = 8;
	int size2 = 9;
	
	
	createLinkedList(list1, size1, &head1);
	createLinkedList(list2, size2, &head2);

	printList(head1);
 	printList(head2);
	mergedList = mergeList(head1, head2);
	printList(mergedList);
 	splitList(mergedList,&splitOdd,&splitEven);
 	
 	printList(splitOdd);
 	printList(splitEven);

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
			*head = newPtr;
		}
		else{
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

