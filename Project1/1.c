#include<stdio.h>


int main(void) {
	int num1;
	int num2;
	printf("���� 1 : "); scanf_s("%d", &num1);
	printf("���� 2 : "); scanf_s("%d", &num2);
	printf("���� ��� : %d", num1 + num2);
	printf("�� ��� : %d", num1 - num2);
	printf("���� ��� : %d", num1 * num2);
	printf("������ ��� : %d", num1 / num2);
	return  0;
}