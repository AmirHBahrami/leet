#ifdef STACK_VERBOSE
	#include <stdio.h>
#endif

static char stack[64];
static char *sp=stack;

int push(char c){
	if(sp-stack>=64){
		#ifdef STACK_VERBOSE
			fprintf(stderr,"stack overflow, bitch!\n");
		#endif
		return 0;
	}
	*sp=c;
	++sp;
	#ifdef STACK_VERBOSE
		printf("push '%c'\n",c);
	#endif
	return 1;
}

char pop(){
	char res;
	if(sp==stack){
		#ifdef STACK_VERBOSE
			fprintf(stderr,"stack underflow, bitch!\n");
		#endif
		return '\0';
	}
	*sp='\0'; // empty stack
	--sp;
	res=*sp;
	#ifdef STACK_VERBOSE
		printf("pop '%c'\n",res);
	#endif
	return res;
}
