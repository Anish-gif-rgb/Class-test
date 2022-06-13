#include <stdio.h>
int main(){
	int N;
	int rem,r;
	r=0;
	int temp;
	printf("enter N :");
	scanf("%d",&N);
	N=temp;
	while(N!=0){
		rem=N%10;
		r=r*10+rem;
		N=N/10;
	}
	printf("N is %d\n",temp);
	printf("Reverse of N is %d\n",r);
	if(temp==r){
		printf("N is Palindrome \n");
	}
	else{
		printf("Not a palindrome");
	}
	return 0;
}
