#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int sub (int a, int b);
int multi (int a, int b);
int divi (int a, int b);
typedef int (*ops) (int a, int b);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int a = 0;
	int b = 0;
	ops operations[4] = {&add, &sub, &multi, &divi};
	int operation;
	//alows user to choose their own numbers, can be removed for fixed numbers.
	printf("Operand a: ");
	scanf("%d", &a);
	printf("Operand b: ");
	scanf("%d", &b);

	while(1){
		printf("\nOperand 'a': %d | Operand 'b': %d \n", a, b);
		printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit):");
		scanf("%d", &operation);
		
		//prompts new imput if given input is not on list.
		while(operation > 4){
			printf("invalid selection.\n");
			printf("Operand 'a': %d | Operand 'b': %d \n", a, b);
			printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit):");
			scanf("%d", &operation);
		}
		//exits.
		while(operation == 4){
			printf("exiting program.\n");
			exit(0);
		}
		printf("you chose %d \n", operation);
		operation = (*operations[operation])(a,b);
		printf("x = %d\n", operation);
	}
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf("Adding 'a' and 'b'\n"); return a + b;}
int sub (int a, int b) { printf("Subtracting 'a' and 'b'\n"); return a - b;}
int multi (int a, int b) { printf("Multiplying 'a' and 'b'\n"); return a * b;}
int divi (int a, int b) { printf("Dividing 'a' and 'b'\n"); return a / b;}