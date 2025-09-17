
#include <stdio.h>

void print_array_double(double* arr[], int sz);

void * swap_double(double* x, double* y) {

	// 1. 입력 값 정상인지 체크 : NULL이 아니어야 함
	if (x == NULL || y == NULL) {
		return NULL;
	}

	// 2. swap two values
	double tmp = *x;
	*x = *y;
	*y = tmp;

	return x;
}

int test_print_array() {

	double da[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	
	int size = sizeof(da) / sizeof(da[0]);

	print_array_double(&da[0], size);

	return 0;
}

 //기능 : 1차원 실수 배열을 입력받아 콘솔에 출력한다
 //함수명 : print_array_double
 //입력 : double 타입 1차원 배열 주소
 //출력 : 터미널에 배열의 내용을 예쁘게 출력
 //반환 : 없음

void print_array_double(double * arr[], int sz) {

	for (int i = 0; i < sz; i++) {
		printf("%lf ", arr[i]);
	}
	printf("\n");


}

int main() {
	
	double a = 3.14;
	double b = 5.12;

	double * presult = (double *) swap_double(&a, &b);
	if (presult == NULL) {
		printf("뭔가 잘못되었어!!\n");
	}
	presult = (double*)swap_double((double*)NULL, &b);
	if (presult == NULL) {
		printf("뭔가 잘못되었어!!\n");
	}
	else {
		printf("a = %f, b = %f\n", a, b);
	}
	
	swap_double((double*)NULL, &b);

	test_print_array();

	return 0;
}