#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
  class node
*/
typedef struct node{
    int val;
    struct node * next;
} node_t;
int isEmpty(node_t *head);
void createLinkedList(int dizi[],int size,node_t **header);
void printList(struct node *head);
node_t *mergeList(struct node  *head1,struct node *head2);
void splitList(node_t  *mergedList ,node_t  **splito,node_t  **splite);
void main(int argc, char *argv[]) {

  node_t *head1 = 0;
  node_t *head2 = 0;
  node_t *mergedList = 0;
  node_t *splitOdd = 0;
  node_t *splitEven = 0;

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
void createLinkedList(int dizi[],int size,node_t **header){
      int i;
    for(i=0;i<size;i++){//dizi icin
        struct node  *temp=(node_t*)malloc(sizeof(node_t)*1);
             // class j =new class()
            temp->val=dizi[i];   //j.value=arr[i]
              temp->next=0;
              if(*header==0){
                *header=temp;
              }else{
                temp->next=*header;
                *header=temp;
              }

      }
};
void printList(node_t *head){
  node_t *temp=head;
  while(temp!=0){//i!=0
    printf("%d ==> ",temp->val) ; //sout(i)
    temp=temp->next; // i++
  }
  puts("NULL\n");
};
node_t *mergeList(node_t *head1,node_t *head2){
   node_t *birlist=head1;
   node_t *ikilist=head2;
   node_t *themergeList=0;
   while(birlist!=0){//i!=0
    themergeList=(node_t*)malloc(sizeof(node_t)*1);
    themergeList->val=birlist->val; //ilk list atiyorum 
    themergeList->next=0;//nextini aliyorum
    if(head1==0){
       head1=themergeList;
      }else{
       themergeList->next=head1;
       head1=themergeList;
      }
    birlist=birlist->next; // i++
  }
   while(ikilist!=0){//i!=0
    themergeList=(node_t*)malloc(sizeof(node_t)*1);
    themergeList->val=ikilist->val; //ilk list atiyorum 
    themergeList->next=0;
    if(head2==0){
       head2=themergeList;
      }else{
       themergeList->next=head2;
       head2=themergeList;
      }
    ikilist=ikilist->next; // i++
  }
  return themergeList;
};
void splitList(node_t  *mergedList ,node_t  **splito,node_t  **splite){

// if list is empty
   if (isEmpty(mergedList)) {
      puts("List is empty.\n");
   } 
   else { 
        while (mergedList != NULL) { 
         if (mergedList->val%2==0){
          node_t  *temp=(node_t*)malloc(sizeof(node_t)*1);
             // class j =new class()
              temp->val=mergedList->val;   //j.value=arr[i]
              temp->next=0;
              if(*splito==0){
                *splito=temp;
              }else{
                temp->next=*splito;
                *splito=temp;
              }

          }else{
             node_t  *temp=(node_t*)malloc(sizeof(node_t)*1);
             // class j =new class()
              temp->val=mergedList->val;   //j.value=arr[i]
              temp->next=0;
              if(*splite==0){
                *splite=temp;
              }else{
                temp->next=*splite;
                *splite=temp;
              }
         }
         mergedList = mergedList->next;   
      } 
      puts("NULL\n");
   } 
  }
int isEmpty(node_t *head)
{ 
   return head == NULL;
} 

