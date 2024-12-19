#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int l=0;
	while(l<n-1){
		if(a[l]==a[n-1]){
			printf("%d %d\n",a[l],a[l]);
		}
		l++;
		n--;
	}
}
