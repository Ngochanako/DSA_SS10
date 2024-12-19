#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct SV{
	char name[100];
	int point;
}SV;

int main(){
   	int n,x;
   	scanf("%d",&n);
   	SV arr[n];
   	for(int i=0;i<n;i++){
   		scanf("%d",&arr[i].point);
   		getchar();
   		gets(arr[i].name);
	}
	char s[100];
	gets(s);
	int check=1;
	for(int i=0;i<n;i++){
		if(strcmp(arr[i].name,s)){
			printf("%d",arr[i].point);
			check=0;
			break;
		}
	}
	if(check){
		printf("Khong tim thay");
	}
}
