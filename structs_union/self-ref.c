#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

void printNode(node_t *root);

int main(void)
{ 
	node_t *head = NULL;  
 	head = (node_t *) malloc( sizeof(struct node) ); 
 	if(head == NULL)
 		return 1;
 		
	head->val = 5; 
 	head->next = NULL;
 	printNode(head);
 	
}

void printNode(node_t *root)
{ 	
	printf("val: %d ", root->val);
	printf("next address %d",root->next);
}

