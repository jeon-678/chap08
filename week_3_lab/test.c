
#include <stdio.h>

void print_array_double(double* arr[], int sz);

void * swap_double(double* x, double* y) {

	// 1. �Է� �� �������� üũ : NULL�� �ƴϾ�� ��
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

 //��� : 1���� �Ǽ� �迭�� �Է¹޾� �ֿܼ� ����Ѵ�
 //�Լ��� : print_array_double
 //�Է� : double Ÿ�� 1���� �迭 �ּ�
 //��� : �͹̳ο� �迭�� ������ ���ڰ� ���
 //��ȯ : ����

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
		printf("���� �߸��Ǿ���!!\n");
	}
	presult = (double*)swap_double((double*)NULL, &b);
	if (presult == NULL) {
		printf("���� �߸��Ǿ���!!\n");
	}
	else {
		printf("a = %f, b = %f\n", a, b);
	}
	
	swap_double((double*)NULL, &b);

	test_print_array();

	return 0;
}