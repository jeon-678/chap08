#include <stdio.h>

int test_function_pointer();



// 실수 덧셈 결과 반환
// 입력 : 두 실수
// 출력 : 더한 값
double add(double a, double b) {
	return a + b;
}

// 기능 : 
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