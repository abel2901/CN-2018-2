#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double factorial(long long n){
	if(n == 1 || n == 0){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}

void print(double* sequence, int n){
printf("Sequencia de 0 a %d:\n", n);
	int i;
	for(i=0;i<=n;i++){
		printf("A%d = %.4lf\n", i, sequence[i]);
	}
}

int main(void){
	
	int n;
	long long i;
	scanf("%d", &n);
	double sequence[n+1];

	for(i=0;i<=n;i++){
		//sequence[i] = (double)(3*i)/(1 + 6*n);
		//sequence[i] = 2 + (double)(pow(-1, i))/i;
		//sequence[i] = 1 + pow(-0.5, i);
		//sequence[i] = 1 + pow((double)10/9, i);
		//extras levantadas em sala de aula
		//sequence[i] = (double)(pow(2, i)*pow(3, i))/(factorial(i));
		sequence[i] = (double)(pow(4, i+1) + pow(3, i))/(pow(4, i));
	}

	print(sequence, n);

	return 0;

}