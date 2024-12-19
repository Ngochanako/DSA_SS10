#include<stdio.h>
int mark[10000000]={0};
int main(){
	int n,x;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		mark[a[i]]++;
	}
	for(int i=0;i<n;i++){
		printf("So lan xua hien cua %d :%d",a[i],mark[a[i]]);
	}
}
