#include <stdio.h>
#include "ansi_cols.h"

#include "stack.c"

int find_idx(char *hay,char c){
	for (int i=0;i<3;i++)
		if(hay[i]==c) return i;
	return -1;
}

void init(char *s){	
	while(*s){
		if(*s=='(' || *s==')' )	push(*s);
		++s;
	}
}

void print_shit(){
	char temp;
	while(temp=pop())
		printf("%c\n",temp);
}

void verify(){

	int opened=0;
	char last='\0',prev='\0';
	while(last=pop()){
		if(last=='('){
			if(prev!='\0' && prev==')'){
				fprintf(stderr,"situation: ')(' !\n");
				break;
			}
			opened++;
		}
		else if (last==')')
			opened--;
		if(opened!=0)
			prev=last; // update the dude
	}
	
	/* holy fucking hell */
	if(opened<0)
		fprintf(stderr,"%d closed, but not opened!\n",-opened);
	else if(opened>0)
		fprintf(stderr,"%d opened, but not closed!\n",opened);
	else
		printf("valid.\n");
}

int main(int arg,char **argv){
	
	/* init fuckall */
	init("hello, World(this is some bullshit ) but  fuck )) (you), RIGID!\n");
	verify();
	// open[0]='('; close[0]=')';
	// open[1]='{'; close[1]='}';
	// open[2]='['; close[2]=']';
	
	// verify_1();
	// verify();
	
	return 0;
}
