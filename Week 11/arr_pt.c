// arr_pt.c
#include <stdio.h>

#define SIZE 10
int main(void) {
	char data[SIZE] = {
		1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	};
	int result = 0, // 합산에 사용할 result 변수
		i;
	char* p = data; // data 배열의 시작 위치

	// 10번 반복하면서 포인터 P를 사용하여
	// 배열의 각 요소를 result변수에 합산함
	for (i = 0; i < SIZE; i++) { // data[9]
		printf("현재 result: %d\n", result);
		// 포인터 p가 가리키는 대산의 값을 합산함
		result = result + *p;
		// data배열의 다음 항목으로 주소를 이동
		p++;
	}
	// 합산 결과 출력
	printf("마지막 result 합: %d",result);

	return 0;
}