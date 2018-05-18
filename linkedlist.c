#include <string.h>
#include <stdlib.h>
#include  <stdio.h>
#define N 5
#define M 10
typedef struct LLK {
	LLK *next;
	char x;
}Nodeq;
typedef struct LL {
	LL *next;
	char c;
}Node;
typedef struct LLS {
	LLS *next;
	char x;
}Nodes;
Node *hader = NULL;//linkedlist icin 
Nodes *root = NULL;//stacktaki linkedliste icin
Nodeq *kok = NULL;//queue icin linklist
char queue[M];
char stack[N];
int top = 0;
typedef struct kuyrukyapisi {
	int bas;//ilk elemanı tutan işaretçi
	int son;//son elemanı tutan işaretçi
	int var;//eleman sayısı
	int d[10];
} kuyruk;
int veri;
kuyruk *KUYRUK;
int p;
void baslangic(kuyruk *k) {
	k->var = 0;
	k->bas = 0;
	k->son = 0;
}
int say(kuyruk *k) {
	p = k->var;
	printf("eleman sayisi:%d", p);
}
int listele(kuyruk *s) {
	s->bas = 0;//bas hersefreinde 0 olmalı ki her defasında ilk elemndan başlayarak yazdırsın
	if (s->bas == s->son)
		puts("liste bos!!!!!");
	else {
		while ((s->bas) != (s->son)) {
			s->bas = ((s->bas) + 1) % n;
			printf("elamanlar-----%d\n--- ", s->d[(s->bas)]);
		}
	}
}
int cikart(kuyruk *k) {
	if (k->var <= 0) {
		puts("kuyruk boş");
		return 0;
	}
	else {
		k->bas = ((k->bas) + 1) % n;
		(k->var)--;
		puts("eleman silindi");
	}
}
int ekle(int eklenecek, kuyruk *k) {
	if ((k->var)>(n - 1)) {
		puts("bellek dolu!!!");
		return 0;
	}
	else {
		(k->son) = ((k->son) + 1) % n;
		(k->d[k->son]) = eklenecek;
		(k->var)++;
		return eklenecek;
	}
}
void queuePrint() {
	Nodeq *tmep = kok;
	while (tmep != NULL) {
		printf("%c-> ", tmep->x);
		tmep = tmep->next;
	}
	printf(" null");
}
char dequeue(){
	if (kok==NULL){
		puts("queue is emptey");
		return -1;
	}else{
		Nodeq *q = kok;
		kok = kok->next;
		return q->x;
		free(q);
	}
}
void EnqueueL(char e) {
	Nodeq temp = (Nodeq)malloc(sizeof(Nodeq));
	temp->x = e;
	temp->next = NULL;
	if (kok==NULL){
		kok = temp;
	}else{
		Nodeq *q = kok;
		while (q->next!=NULL){
			q = q->next;
		}
		q->next = temp;
	}
};
void pushL(char veri) {
	Nodes New = (Nodes)malloc(sizeof(Nodes)*1);
	New->x = veri;
	New->next = NULL;
	if (root==NULL){
		root = New;
	}else{
		New->next = root;
		root = New;
	}
}
char popL() {

	if (root==NULL){
		printf("the stack is empty");
		return -1;
	}else {
		Nodes *p = root;
		root = root->next;
			return p->x;
			free(p);
	}
}
void stackLPrint() {
	Nodes *tmep = root;
	while (tmep!=NULL){
		printf("%c-> ",tmep->x);
		tmep = tmep->next;
	}
	printf(" null");
}
char pop() {
	if (top<=-1){
		return -1;
	}else {
		top--;
		return stack[top];
	}
};
void push(char i) {
	if (top>=N){
		printf("stack overflow");
	}else{
		stack[top]=i;
		top++;
	}
}
void insterToMiddle(char find,char s) {
	Node *temp = hader;
	Node New = (Node)malloc(sizeof(Node));
	New->c = s;
	New->next = NULL;
	while (temp!= NULL) {
		if (temp->c==find){
			break;
		}
		temp = temp->next;
	}
	New->next = temp->next;
	temp->next = temp->next->next;
	temp->next = New;

}
void insterFirst(char data) {
	Node Temp =(Node)malloc(sizeof(Node)*1);
	Temp->c = data;
	Temp->next = NULL;
	if (hader==NULL){
		hader = Temp;
	}else{
		Temp->next = hader;
		hader = Temp;
	}

}
void insterLast(char data) {
	Node *gezen = hader;
	Node Temp = (Node)malloc(sizeof(Node) * 1);
	Temp->c = data;
	Temp->next = NULL;
	while (gezen->next!=NULL){
		gezen = gezen->next;
	}
	gezen->next = Temp;
}
void println() {
	Node *temp = hader;
	while (temp!=NULL){
		printf("%c -> ",temp->c);
		temp = temp->next;
	}
}
int main()
{
	/*insterFirst('A');
	insterFirst('B');
	insterFirst('D');
	insterLast('z');
	insterToMiddle('B','R');*/
	//-----------------------------------------------------------------------------
		/*push('A');
		push('B');
		push('I');
		push('B');
		printf("%c\n",pop());
		printf("%c\n", pop());
		printf("%c\n", pop());
		printf("%c\n", pop());
		printf("%c\n", pop());
		printf("%c\n", pop());
	println();*/
	//----------------------------------------------------------------------------
	/*pushL('A');
	pushL('B');
	stackLPrint();
	printf("\n");
	printf("%c\n",popL());
	stackLPrint();
	printf("\n");
	printf("%c\n", popL());
	printf("%c\n", popL());*/
	//----------------------------------------------------------
	/*EnqueueL('A');
	EnqueueL('B');
	EnqueueL('C');
	printf("\n");
	queuePrint();
	dequeue();
	printf("\n");
	queuePrint();
	printf("\n");*/
	//----------------------------------------------------
	
	return 0;
}