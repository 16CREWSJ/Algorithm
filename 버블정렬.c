/*
	� ���ڵ��� ������������ ������ ��,
	���� �ִ� ���� ���ؼ� �� ���� ���� ������ ������ �˰���
	�ð� ���⵵�� O(N^2) 
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
