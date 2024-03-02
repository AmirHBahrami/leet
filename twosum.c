#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 10

void twosum(int *arr,int len, int needle){

	int temp=-1;
	for(int i=0;i<len;i++){
		for (int j=i;j<len;j++){
			temp=arr[i]+arr[j];
			if(temp==needle)
				printf("[%d]+[%d]:\t%d + %d = %d \n",i,j,arr[i],arr[j],needle);
			}
	}
	putchar('\n');
}

int main(int arc,char **argv){
	int shitlord[ARR_SIZE]={
		2,10,
		4,5,
		10,19,
		22,45,
		110,4120
	};
	twosum(shitlord,ARR_SIZE,9);
	twosum(shitlord,ARR_SIZE,12);
	twosum(shitlord,ARR_SIZE,67);
	return 0;
}
