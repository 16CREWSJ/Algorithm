/*
	어떤 숫자들을 오름차순으로 정렬할 때,
	옆에 있는 값과 비교해서 더 작은 값을 앞으로 보내는 알고리즘
	시간 복잡도는 O(N^2) 
*/

#include<stdio.h>

int main(void){
	int arr[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	int i, j, temp;
	
	for(i=0; i<sizeof(arr)/sizeof(int); i++){
		for(j=0; j<(sizeof(arr)/sizeof(int) - 1) - i; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(i=0; i<sizeof(arr)/sizeof(int); i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
} 
