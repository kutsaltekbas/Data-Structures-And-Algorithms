#include <stdio.h>
#include <stdlib.h>

struct n {
	int x;
	n* next;
};

typedef n node;

void printValues(node* r) {
	
	while (r != NULL) {
		printf_s("%d\n", r->x);
		r = r->next;
	}
}

void addValues(node* r, int y) {
	while (r->next != NULL) {
		r = r->next;
	};
	r->next = (node*)malloc(sizeof(node));
	r->next->x = y;
	r->next->next = NULL;
}

int main(){
	node* root;
	root = (node*)malloc(sizeof(node));
	root->next = NULL;
	root->x = 500;
	for (int i = 0; i < 5; i++) {
		addValues(root, i * 100);
	}

	
	printValues(root);
	
	
	return 0;
}