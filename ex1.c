#include<stdio.h>

int calcFactor(int factorial_number,int prime_number);

int main(){
	int factorial, factor;
	printf("Enter a factorial number: ");
	scanf("%d",&factorial);
	printf("Enter the prime factor: ");
	scanf("%d",&factor);
	printf("%d! = %d^%d * %s\n",factorial,factor,calcFactor(factorial,factor),"A");

	return 0;
}


int calcFactor(int factorial_number,int prime_number) {
int n = 0;
	for ( ;factorial_number > prime_number ; ) {
	n += factorial_number/prime_number;
	factorial_number = factorial_number/prime_number;
}
	return n;
}
