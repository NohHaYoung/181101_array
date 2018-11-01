#include <stdio.h>
#include <stdlib.h>

#define NUM 5

int main(void) {
	
//1. 변수 선언 
	int A[NUM]; // 배열을 저장하는 변수
	int i; // 입력값 변수 
	
//2. 입력값 받기 
	printf("input %i numbers : ", NUM); 
	for(i=0;i<NUM;i++){
		scanf("%d ", &A[i]);
	}

//3. sorting
	

//4. 출력
 	printf("sorted numbers are : ");
	 for(i=0;i<NUM;i++){
 		printf("%d ", A[i]);
	}
	return 0;
}
