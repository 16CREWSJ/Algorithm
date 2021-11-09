/*
	어떤 숫자들을 오름차순으로 정렬할 때, 
	가장 작은 값을 선택해서 제일 앞으로 보내는 알고리즘
	시간 복잡도는 O(N^2) 
*/

#include<stdio.h>

int main(void){
	int arr[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	int i, j, min, index, temp;
	
	for(i=0; i<sizeof(arr)/sizeof(int); i++){
		min = 9999;
		
		for(j = i; j<sizeof(arr)/sizeof(int); j++){
			if(arr[j] < min){
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	
	for(i=0; i<sizeof(arr)/sizeof(int); i++)
		printf("%d ", arr[i]);
		
	return 0;
}
