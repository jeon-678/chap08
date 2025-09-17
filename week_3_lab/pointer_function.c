#include <stdio.h>

int test_function_pointer();



// �Ǽ� ���� ��� ��ȯ
// �Է� : �� �Ǽ�
// ��� : ���� ��
double add(double a, double b) {
	return a + b;
}

// ��� : 
double sub(double a, double b) {
	return a - b;
}

double mul(double a, double b) {
	return a * b;
}

int test_function_pointer() {

	double (*pfunc)(double a, double b) = NULL;
	double result = 0.0;

	pfunc = add;

	add(3.0, 4.0);
	result = (*pfunc) (3, 4); // 7.0


	pfunc = mul;
	printf("%lf", (*pfunc)(3, 4));



}

int main() {

	test_function_pointer();

	return 0;
}