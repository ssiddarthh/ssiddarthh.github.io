#include <stdio.h>

int swap(int *,int,int);

int main(){
	
	int size,operations=0;
	scanf("%d",&size);
	
	int a[size];
	for(int i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	// Comparing from the first index
	for(int i=1;i<size;i++){
		if(a[i]!=a[i-1]){
			for(int j=i+1;j<size;j++){
				if(a[j]==a[i-1]){
					operations+=swap(a,i,j);
					i=i+2;
				}
			}
		}
	}
	printf("%d\n",operations);
	
}

int swap(int *a,int i,int j){
	int temp=0,count=0;
	for(int k=j;k>i;k--){
		temp=a[k-1];
		a[k-1]=a[k];
		a[k]=temp;
		count++;
	}
	return count;
}
