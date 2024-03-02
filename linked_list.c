#ifndef __LINKED_LIST_C
	#define __LINKED_LIST_C 1
#endif

#ifndef __STDIO_H
	#include <stdio.h>
#endif

#ifndef __STDLIB_H
	#include <stdlib.h>
#endif

typedef struct ll_struct{
	
	int val;
	struct ll_struct *next;
} LL;

LL *ll_init(int val){
	LL *ll=(LL *) malloc(sizeof(LL));
	ll->val=val;
	return ll;
}

void ll_print(LL *ll){
	if(!ll){ 
		printf(" {EMPTY}\n");
		return;
	}
	int i=0;
	for(LL *temp=ll;temp;temp=temp->next){
		printf(" {%d} ->",temp->val);
		++i;
	}
	printf("\b\b  \n");
}

void ll_push(LL *ll,int val){
	LL *temp=ll;

	// skip all initialized fuckers
	while(temp->next) temp=temp->next;
	temp->next=ll_init(val);
}

int ll_get_idx(LL *ll){

	int i=0;
	for(LL *temp=ll;temp;temp=temp->next){
		if(ll->val==temp->val) return i;
		++i;
	}

	return -1; // not found!
}

int ll_remove(LL *l){

	 // FUCKING TODO ffs
	 return -1; // bc fuck you! (temporarily)
}

void ll_free(LL **ll){
	LL *prev=NULL;
	LL *temp=*ll;
	while(temp){
		prev=temp;
		temp=temp->next;
		free(prev);
		// ll_print(temp);
	}
	*ll=NULL;
}

#ifdef LL_UNIT_TEST
int main(){
	LL *ll=ll_init(0);
	for(int i=10;i<100;i+=10)
		ll_push(ll,i);
	// ll_print(ll);
	ll_free(&ll);
	ll_print(ll);
	return 0;
}
#endif
