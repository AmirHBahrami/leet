#ifndef __STDIO_H
	#include <stdio.h>
#endif

#include "./single_number_ddll.c"

/* XXX NEVER PLAY BY THE RULES! XXX */

int snum(int *arr,int arrsize){
	
	BS bs[32]; // so - no need to free
	
	// initialize
	int grown_size=0;
	for(int i=0;i<arrsize;i++)
		bs_inc(bs,&grown_size,arr[i]);
	
	// find the first one who's singular
	int temp;
	for(int i=0;i<grown_size;i++)
		if((bs[i].count%2)!=0)
			return bs[i].val;
	return -1;
}

int main(int argc,char **argv){
	int vals[15]={
		0,0,
		1,1,
		2,2,
		3,3,
		7,
		5,5,
		6,6,
		7,7
	};
	putchar('[');
	for(int i=0;i<15;i++)
		printf("%d , ",vals[i]);
	printf("\b\b \b\b]\n-->%d\n",snum(vals,15));
	return 0;
}
