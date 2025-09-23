/*
11. 직사각형의 넓이와 둘레를 구하는 get_rect_info 함수를 작성하시오.
직사각형의 가로, 세로의 길이를 입력받은 다음 get_rect_info 함수를 이용해서 직사각형의 넓이와 둘레를 구해서 출력하는 프로그램을 작성하시오

실행결과
가로? [10]
세로? [20]
넓이: 200, 둘레: 60
*/
#include <stdio.h>

int* pr,* pl;
void get_rect_info(int m, int h);

int main(){

    int m, h;

    printf("가로? ");
    scanf("%d", &m);
    printf("세로? ");
    scanf("%d", &h);

    get_rect_info(m, h);

    printf("넓이: %d, 둘레: %d", *pr, *pl);

    return 0;
}

void get_rect_info(int m, int h){
    int l, r;
    l = (m * 2) + (h * 2);
    r = m * h;

    pr = &r;
    pl = &l;
}
