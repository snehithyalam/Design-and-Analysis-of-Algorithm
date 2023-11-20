#include<stdio.h>
int linear(int[],int);
int main(){
	int keyelement,i;
	int arr[10];
	printf("Enter 10 elements: ");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements to search:");
	scanf("%d",&keyelement);
	if(linear(arr,keyelement))
	   printf("the element is found:");
	else
	   printf("the element is not found");
}
int linear(int arr[],int keyelement){
	for(int i=0;i<7;i++){
		if(arr[i]==keyelement){
			return 1;
		}
	}
	return 0;
}
