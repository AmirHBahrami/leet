#ifndef __STDIO_H
	#include <stdio.h>
#endif

#ifndef __STDLIB_H
	#include <stdlib.h>
#endif

#ifndef __LINKED_LIST_C 
	#include "./linked_list.c"
#endif

/**
	LONG STORY SHORT: put list nodes in a stack, then reversely
	assign their "next" element

	you can discard the stack afterwards (if u give a shit), but
	i chose not to give an f you see kay

	remember it's still a O(2n), altho in case of 1 million it'll
	be a problem, but who the fucking fuck of a duck-ass bitch-face
	puts 1 million dildos in a fucking linked list???

	the answer: a retard!
*/

static LL* stack[64]; // more than 64, fuck you!
int stack_i=0;

void ll_rev(LL **ll){
	LL *curr=*ll, *prev=NULL,*next=NULL;

	while(curr){
		#ifdef DEBUG
			printf("%d:%d\n",stack_i,curr->val);
		#endif
		stack[stack_i]=curr; // put in stack
		++stack_i;
		curr=curr->next;
	}

	--stack_i;
	*ll=stack[stack_i];
	while((stack_i)>=0){
		#ifdef DEBUG
			printf("%d:%d\n",stack_i,stack[stack_i]->val);
		#endif
		stack[stack_i]->next=stack[stack_i-1];
		--stack_i;
	}

	stack[0]->next=NULL;
}

int main(){
	LL *ll=ll_init(0);
	for(int i=10;i<100;i+=10)
		ll_push(ll,i);
	ll_print(ll);
	ll_rev(&ll);
	puts("-------------");
	ll_print(ll);
	ll_free(&ll);
	return 0;
}
