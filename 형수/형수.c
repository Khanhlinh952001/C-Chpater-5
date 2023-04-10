#include<stdio.h>
#include "function.h"

int main(void) {
	int num1;
	int num2;

	num1 = showMenu(1);
	num1 = showMenu(2);
	
	p("µ¡¼À ", num1 + num2);
	p("»¬ ", num1 - num2);
	p("±Á¼À ", num1 * num2);
	p("³ª´°¼À ",num1 % num2);
	return  0;
}

