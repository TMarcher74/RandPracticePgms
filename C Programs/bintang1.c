#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input;
	int a1, a2, a3, a4, a5, a6, a7, a8;

	scanf("%d", &input);

	int inputA = input * 2;
	int inputB = input;

	for(int i = 0; i < inputA; i++)
	{
		for(a1 = 0; i >= a1; a1++)
		{
			printf("*");
		}
		for(a2 = inputA - 1; a2 > i; a2--)
		{
			printf(" ");
		}
		for(a3 = inputA - 1; a3 > i; a3--)
		{
			printf(" ");
		}
		for(a4 = 0; i >= a4; a4++)
		{
			printf("*");
		}
		for(a5 = 1; i >= a5; a5++)
		{
			printf("*");
		}
		for(a6 = inputA - 1; a6 > i; a6--)
		{
			printf(" ");
		}
		for(a7 = inputA - 1; a7 > i; a7--)
		{
			printf(" ");
		}
		for(a8 = 0; i >= a8; a8++)
		{
			printf("*");
		}
		printf("\n");
	}
	int j, b1, b2;

	for(j = 0; j < inputB; j++){
		for(b1 = 0; b1 <= inputA; b1++)
		{
			printf(" ");
		}
		for(b2 = 0 + (3 - inputB); b2 < inputB * 3; b2++)
		{
			printf("*");
		}
		printf("\n");
	}

	int k, c1, c2, c3, c4;

	for(k = 0; k < inputB; k++){
        for (c1 = 0; c1 <= inputA; c1++){
            printf(" ");
        }
        for(c2 = 0; c2 < inputA; c2++){
            printf(" ");
        }
        for (c3 = 1 + (3 - inputB); k >= c3; c3++){
            printf(" ");
        }
        for(c4 = inputB; c4 > k; c4--){
            printf("*");
        }
        printf("\n");      
    }
    return 0;
}