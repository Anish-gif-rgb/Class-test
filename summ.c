#include <stdio.h>
int main(){
	int a,b,i;
	int n;
	a=0;
	b=0;
	printf("enter the number of elements n : ");
	scanf("%d \n",&n);
	for(i=1;i<n;i++){
		if(i%2==0){
		a=a+i;	
		}
		else{
		b=b+i;	
		}
	}
	printf("sum of first natural even number is %d", a);
	printf("sum of first natural odd number is %d", b);
	
	return 0;
}
