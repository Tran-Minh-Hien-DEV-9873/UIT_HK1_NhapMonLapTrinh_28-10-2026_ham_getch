#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	
	printf("Nhap a vao day: ");
	scanf("%d", &a);
	
	printf("Nhap b vao day: ");
	scanf("%d", &b);
	
	printf("a = %d \n", a);
	printf("b = %d \n", b);
	
	getch();
	return 0;
}

