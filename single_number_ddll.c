typedef struct bullshit_struct{
	int val;
	int count;
} BS;

// XXX no need to deal with malloc and free crap
// check snum in single_number.c

int bs_findby_value(BS *b,int size,int val){
	for(BS *temp;temp-b<size;temp++)
		if(temp->val==val)return temp-b;
	return -1;
}

/* increment the count by one where val == val*/
void bs_inc(BS *b,int *grown_size,int val){

	// grown_size is the number of 
	// elements with non-default value
	int i=0;
	for(;i<(*grown_size);i++)
		if( (b[i].val)==val ){
			b[i].count+=1;
			return;
		}
	
	if(i!=0) i--;
	
	// element not found - put it
	b[i].val=val;
	b[i].count=1;
	(*grown_size)+=1;
}

void bs_print(BS *b,int size){
	for(int i=0;i<size;i++)
		printf("%d (x%d)\n",b[i].val,b[i].count);
}
