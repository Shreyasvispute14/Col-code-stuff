#include<stdio.h>
#include<stdlib.h>

int main() {
	int fno,sno,*ptr1 = &fno,*ptr2 = &sno;
	
	printf("\n\nPointer : Find the maximum number between two numbers :\n");
	printf("------------------------------------------------------------\n");
	
	printf("Input the first number :");
	scanf("%d",ptr1);
	
	printf("Input the second nuber :");
	scanf("%d",ptr2);

	if (*ptr1> *ptr2){
		printf("\n\n %d is the maximum number. \n\n",*ptr1);
	}else{
		printf("\n\n %d is the maximum number. \n\n",*ptr2);
	}
		return 0;
}

