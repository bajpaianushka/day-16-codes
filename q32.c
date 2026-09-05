#include <stdio.h>

int main() {
	int n = 121;
	scanf("%d", &n);

	int original = n;
	int rev = 0;

	while(n > 0){
		int digit = n % 10;
		rev = rev * 10 + digit;
		n = n/10;
	}

	if(original == rev){
		printf("Palindrome");
	} else {
		printf("Not palindrome");
	}

	return 0;
}
