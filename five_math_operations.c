#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int choice;
	int edge,area,pmeter;
	int numb,cube;
	int num1,num2,rem;
	int funcNum,funcResult;
	int rad,s_area,s_pmeter;
	printf("        ___MATHEMATICAL OPERATIONS___\n\n");
	printf("1- Calculation of area and perimeter of a square.\n");
	printf("2- Finding of a numbers cube.\n");
	printf("3- The remaining number of dividing the larger of the two numbers\nentered from the keyboard into the smaller one.\n");
	printf("4- Finding the value of the 'x^2+5x+12' function when we use the number input instead of character x.\n");
	printf("5- Finding the area and perimeter of a sphere. (pi = 3)\n\n");
	printf("Choose the operation you want to use: ");
	scanf("%d",&choice);
	while(choice!=0){
	
	switch(choice){
		case 1: 
		printf("\nEnter the value of the edge of a square: ");
		scanf("%d",&edge);
		area=edge*edge;
		pmeter=edge*4;
		printf("Area of the square is %d \nPerimeter of the square is %d",area,pmeter);
		break;
		case 2:
		printf("\nEnter the number that you want to find the one's cube: ");
		scanf("%d",&numb);
		cube=numb*numb*numb;
		printf("Cube of the number is %d",cube);
		break;
		case 3:
		printf("Enter two numbers: ");
		scanf("%d",&num1);
		scanf("%d",&num2);
		if(num1>=num2){
			rem=num1%num2;
			printf("Remainder of the division is %d",rem);
		}
		else{
			rem=num2%num1;
			printf("Remainder of the division is %d",rem);
		}	
		break;
		case 4:
		printf("Enter the number that you want to use instead of x: ");
		scanf("%d",&funcNum);
		funcResult=funcNum*funcNum+5*funcNum+12;
		printf("The result of the function is %d",funcResult);	
		break;
		case 5:
		printf("Enter the radius of the sphere: ");
		scanf("%d",&rad);
		s_area=3*rad*rad*rad*4/3;
		s_pmeter=2*3*rad;
		printf("Area of the sphere is %d\n",s_area);
		printf("Perimeter of the sphere is %d",s_pmeter);	
		break;
		default: printf("Unvalid number!!");
	}
	printf("\nEnter 0 to stop or choose a new operation if you want to continue: ");
	scanf("%d",&choice);
}
	return 0;
}
