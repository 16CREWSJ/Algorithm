/*
	어떤 숫자들을 오름차순으로 정렬할 때,
	각 숫자를 적절한 위치에 삽입하는 알고리즘
	시간 복잡도는 O(N^2)
	거의 정렬된 상태에선 가장 빠른 정렬 알고리즘 
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
