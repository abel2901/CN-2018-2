#include <stdio.h>
#include <stdlib.h>

double recur(int x);

int main(void){

	int x, i;
	scanf("%d", &x);
	double sequence[x];

	for(i=0;i<x;i++){
		sequence[i] = recur(i+1);
	}

	printf("Sequencia: ");
	for(i=0;i<x;i++){
		if(i==0){
			printf("{%.2lf, ", sequence[i]);
		}else if(i == x-1){
			printf("%.2lf}\n", sequence[i]);
		}else{
			printf("%.2lf, ", sequence[i]);
		}
	}

	return 0;
}

double recur(int x){
	if(x == 1){
		return 2;
	}else{
		return (double)((0.5)*(recur(x-1) + 6));
	}
}
