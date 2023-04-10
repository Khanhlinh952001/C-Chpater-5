#pragma once
void p(const char*, int);
int showMenu(void);

void p(const char* msg, int n) {
	printf(">>>>>>>>>>>>>>>>\n");
	printf("%s 출력 : %d \n", msg, n);
	printf("a>>>>>>>>>>>>>>>>\n\n");
}
int showMenu(int n) {
	int input;
	printf("숫자 %d: \n", n); scanf_s("%d", &input);
	return input;
}