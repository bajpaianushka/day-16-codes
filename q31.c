#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	if(n==0){
		printf("0");
		return 0;
	}

	int power = 1;
	while(power <=n){
		power = power*2;
	}
	power = power / 2;

	while(power > 0){
		if(n >= power){
			printf("1");
			n = n - power; 
		} else {
			printf("0");
		}
		power = power/2;
	}

	return 0; 
}
