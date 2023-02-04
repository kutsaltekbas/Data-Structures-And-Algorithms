#include <stdio.h>
#include <stdlib.h>

struct n {
	int x;
	n* next;
};

typedef n node;

int main(){
	n* root;
	n* iter;
	root = (node*)malloc(sizeof(n));
	root->x = 10;
	root -> next = (node*)malloc(sizeof(n));
	root->next ->x = 20;
	root->next ->next= (node*)malloc(sizeof(n));
	root->next->next->x = 30;
	iter = root;


	printf_s("%d\n", root->x);
	printf_s("%d\n", root->next->x);
	printf_s("%d\n", root->next->next->x);
	printf_s("%d\n", iter->x);
	
	
	return 0;
}