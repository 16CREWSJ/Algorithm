/*
	문제
	N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
	
	입력
	첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 
	둘째 줄부터 N개의 줄에는 수 주어진다. 
	이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
	
	출력
	첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다. 
*/

#include<stdio.h>

int array[1001];

int main(void){
	int number, i, j, min, indedx, temp;
	scanf("%d", &number);
	for(i=0; i<number; i++){
		scanf("%d", &array[i]);
	}
	for(i=0; i<number; i++){
		min = 1001;
		for(j=i; j<number; j++){
			if(array[j] < min){
				min = array[j];
				index = j;
			}
		}
		temp = array[j];
		array[j] = array[index];
		array[index] = temp;
	}
	
	for(i=0; i<number; i++){
		printf("%d\n", array[i]);
	}
	
	return 0;
} 
