/*
6. 정수형 배열에 대하여 배열의 원소 중 최대값과 최소값을 찾는 get_min_max 함수를 정의하시오.
크기가 10인 int 배열에 대해서 원하는 값으로 초기값을 채운 다음 get_min_max 함수로 최대값과 최소값을 찾아서 출력하시오.

배열: 23 45 62 12 99 83 23 50 72 37
최대값: 99
최소값: 12
*/

#include <stdio.h>

void get_min_max(int *arr);

int main(){

    int arr[10] = {23, 45, 62, 12, 99, 83, 23, 50, 72, 37};

    printf("배열: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    get_min_max(arr);

    return 0;
}

void get_min_max(int *arr){
    int max = arr, min = arr;

    for(int i = 1; i < 10; i++){
        if(max < *(arr + i)){
            max = *(arr + i);
        }
        if(min > *(arr + i)){
            min = *(arr + i);
        }
    }
}
