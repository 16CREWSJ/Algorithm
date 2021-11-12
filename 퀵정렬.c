/*
	퀵 정렬은 어떤 숫자들을 오름차순으로 정렬할 때,
	특정한 값을 기준으로 큰 숫자와 작은 숫자를 나누는 알고리즘
	평균 시간 복잡도는 O(N*logN)
	최악 시간 복잡도는 O(N^2) - 거의 정렬이 되어 있는 경우
	항상 퀵 정렬이 빠른 것은 아님 
*/

#include <stdio.h>

int data[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int* data, int start, int end){
	if(start >= end){ //원소가 1개인 경우  
		return ;
	}
	
	int key = start; //키는 첫 번째 원소 
	int i = start + 1; //왼쪽 출발 지점 
	int j = end; //오른쪽 출발 지점 
	int temp;
	
	while(i <= j){ //엇갈릴 때까지 반복 
		while(i <= end && data[i] <= data[key]){ //키 값보다 큰 값을 만날 때까지 오른쪽으로 이동 
			i++;
		}
		while(j > start && data[j] > data[key]){ //키 값보다 작은 값을 만날 때까지 왼쪽으로 이동 
			j--;
		}
		if(i > j){ //현재 엇갈린 상태면 키 값과 교체 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		} else{ //엇갈리지 않았다면 큰 값과 작은 값을 서로 바꿔줌 
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		} 
	}
	
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

void show(){
	int i;
	for(i=0; i < sizeof(data)/sizeof(int); i++){
		printf("%d " , data[i]);
	}	
}	

int main(void){
	quickSort(data, 0, sizeof(data)/sizeof(int) - 1);
	show();
	
	return 0;
}
