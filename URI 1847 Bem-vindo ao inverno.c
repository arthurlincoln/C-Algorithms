#include <stdio.h>
#include <stdlib.h> //para o valor absoluto (abs)

int main() {
	int A, B, C;
	
	scanf("%d %d %d", &A, &B, &C);

	if (B < A && C >= B){ 
		printf(":)\n");
	} 
    else if (B > A && C <= B){ 
		printf(":(\n");
	} 
    else if (B > A && C > B && C - B < B - A){ 
		printf(":(\n");
	} 
    else if (B > A && C > B && C - B >= B - A){ 
		printf(":)\n");
	} 
    else if (B < A && C < B && abs(C - B) < abs(B - A)){ 
		printf(":)\n");
	} 
    else if (B < A && C < B && abs(C - B) <= (B - A)){ 
		printf(":(\n");
	} 
    else if (B == A && C - B > B - A){ 
		printf(":)\n");
	} 
    else{
		printf(":(\n");
	}
	
	return 0;
}