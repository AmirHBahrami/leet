#include <stdio.h>
#define ARR_LEN 5

void robber(int *hs,int len){
	int profit=0;
	for( int i=0;i<len;i++){
		printf("hs[%d]=$%d\n",i,hs[i]);
		if(hs[i]>hs[i+1] || (i+1)>=len && hs[i]>hs[i-1]){
			printf("\ttaken!\n");
			profit+=hs[i];
			i+=2;
		}
	}
	printf("$%d taken in total!\n",profit);
}

int main(int argc,char **argv){
	int houses[ARR_LEN]={10,20,2,5,50};
	int houses_1[ARR_LEN]={5,3,4,11,2};
	robber(houses,5);
	puts("------------");
	robber(houses_1,5);
	return 0;
}
