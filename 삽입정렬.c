/*
	� ���ڵ��� ������������ ������ ��,
	�� ���ڸ� ������ ��ġ�� �����ϴ� �˰���
	�ð� ���⵵�� O(N^2)
	���� ���ĵ� ���¿��� ���� ���� ���� �˰��� 
*/
#include<stdio.h>

int main(void){
	int arr[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	int i, j, temp;
	
	for(i=0; i < sizeof(arr)/sizeof(int) - 1; i++){
		j = i;
		while(j >= 0 && arr[j] > arr[j+1]){
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			j--;
		}
	}
	
	for(i=0; i<10; i++)
		printf("%d ", arr[i]);
		
	return 0;
}
