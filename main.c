#include <stdio.h>
#include <stdlib.h>

#define NUM 5

int main(void) {
	
//1. ���� ���� 
	int A[NUM]; // �迭�� �����ϴ� ����
	int i; // �Է°� ���� 
	
//2. �Է°� �ޱ� 
	printf("input %i numbers : ", NUM); 
	for(i=0;i<NUM;i++){
		scanf("%d ", &A[i]);
	}

//3. sorting
	

//4. ���
 	printf("sorted numbers are : ");
	 for(i=0;i<NUM;i++){
 		printf("%d ", A[i]);
	}
	return 0;
}
