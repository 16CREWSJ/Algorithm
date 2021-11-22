/*
	계수 정렬은 범위 조건이 있는 숫자들을 정렬할 때
	크기를 기준으로 갯수를 세는 알고리즘
	시간 복잡도 O(N) 
	크기가 한정된 데이터에 한해서 정렬을 수행함 
*/
// 아래 예제는 범위가 5이하인 숫자를 오름차순으로 정렬  
#include <stdio.h>

int main(void){
	int temp;
	int count[5];
	int array[30] = {1, 3, 2, 4, 3 ,2 ,5, 3, 1, 2, 
					3, 4, 4, 3, 5, 1 ,2, 3, 5, 2,
					3, 1, 4, 3, 5, 1, 2, 1, 1, 1};
					
	for(int i = 0; i < 5; i++){
		count[i] = 0;
	} 
	
	for(int i = 0; i < 30; i++){
		count[array[i] - 1]++;
	}
	
	for(int i = 0; i < 5; i++){
		if(count[i] != 0){
			for(int j = 0; j < count[i]; j++){
				printf("%d ", i + 1);
			}
		}
	}
	
	return 0;
}

 
