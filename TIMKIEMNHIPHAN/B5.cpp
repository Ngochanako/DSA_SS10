#include<stdio.h>

int search(int a[],int n,int h){
	int l=0,mid;
	while(l<=h){
		mid=l+(h-l)/2;
		if(n==a[mid]){
			return mid;
		}else if(n<a[mid]){
			h=mid-1;
		}else{
			l=mid+1;
		}
	}
	return -1;
}
int main(){
	int n,x;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	if(search(a,x,n-1)!=-1){
		printf("%d",search(a,x,n-1));
	}else{
		printf("Khong tim thay");
	}
}
