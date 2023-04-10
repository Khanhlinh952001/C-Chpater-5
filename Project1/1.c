#include<stdio.h>


int main(void) {
	int num1;
	int num2;
	printf("¼ıÀÚ 1 : "); scanf_s("%d", &num1);
	printf("¼ıÀÚ 2 : "); scanf_s("%d", &num2);
	printf("µ¡¼À Ãâ·Â : %d", num1 + num2);
	printf("»¬ Ãâ·Â : %d", num1 - num2);
	printf("±Á¼À Ãâ·Â : %d", num1 * num2);
	printf("³ª´°¼À Ãâ·Â : %d", num1 / num2);
	return  0;
}