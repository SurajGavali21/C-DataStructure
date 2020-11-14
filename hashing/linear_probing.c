


/* linear probing method*/
#include<stdio.h>

int main(){
	
	int arr[10] = {76,40,48,5,20,30,64,46,31,54}; // given array
	int hashed_arr[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}; // initialization of the array to -1
	int i,t,n,j;
	
	/* taking each element from given array*/
	for(i=0;i<10;i++){
		
		for (j = 0;j<10;){
		
			t = (arr[i] +j)%10; // key function
			
			if(hashed_arr[t] == -1){
		
				hashed_arr[t] = arr[i];	
				break;
			}
			else{
				j++;
			}
		}
	}
	
	/*printing of hashed array*/
	for(i=0;i<10;i++){
	
		printf("%d \n",hashed_arr[i]);
	}
	return 0;
}

