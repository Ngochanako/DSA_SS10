#include<stdio.h>

int main(){
	int a[5]={1,2,3,4,5};
	int n=5;
	printf("Tim so chan\n");
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			printf("%d ",a[i]);
		}
	}
}
