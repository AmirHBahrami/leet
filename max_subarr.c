#include <stdio.h>
#define PUTLN putchar('\n')

int get_sum(int *arr,int s,int e){
	int sum=0;
	for(int i=s;i<e;i++)sum+=arr[i];
	return sum;
}

void subarr_max(int *arr,int len){
	int max=0, sum=0;
	int is=-1,ie=-1;
	for(int j=0;j<len;j++){
		for(int i=j+1;i<len;i++){
			sum=get_sum(arr,j,i);
			if(sum>max){
				max=sum;
				is=j;
				ie=i;
			}
		}
	}
	
	printf("max sum:%d\n",max);
	for(int i=is;i<ie;i++){
		printf("%d ",arr[i]);
	}
	PUTLN;
}

int main(int argc,char **argv){

	// TODO make this program accessible from console :D
	int arr[9]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
	subarr_max(arr,9);
	return 0;
}
