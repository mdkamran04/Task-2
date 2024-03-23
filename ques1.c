#include<stdio.h>
int main(){
	int i,j,k,n,a,b,l;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=n-i;k++){
			printf(" ");
		}
		a=65;
		b=64+i-1;
		for(j=1;j<=i;j++){
			printf("%c",a);
			a++;
		}
			for(l=1;l<=i-1;l++){
				printf("%c",b);
			b--;
			}
		
		printf("\n");
	}
	
	
	
	return 0;
}
