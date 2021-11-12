/*
	�� ������ � ���ڵ��� ������������ ������ ��,
	Ư���� ���� �������� ū ���ڿ� ���� ���ڸ� ������ �˰���
	��� �ð� ���⵵�� O(N*logN)
	�־� �ð� ���⵵�� O(N^2) - ���� ������ �Ǿ� �ִ� ���
	�׻� �� ������ ���� ���� �ƴ� 
*/

#include <stdio.h>

int data[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int* data, int start, int end){
	if(start >= end){ //���Ұ� 1���� ���  
		return ;
	}
	
	int key = start; //Ű�� ù ��° ���� 
	int i = start + 1; //���� ��� ���� 
	int j = end; //������ ��� ���� 
	int temp;
	
	while(i <= j){ //������ ������ �ݺ� 
		while(i <= end && data[i] <= data[key]){ //Ű ������ ū ���� ���� ������ ���������� �̵� 
			i++;
		}
		while(j > start && data[j] > data[key]){ //Ű ������ ���� ���� ���� ������ �������� �̵� 
			j--;
		}
		if(i > j){ //���� ������ ���¸� Ű ���� ��ü 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		} else{ //�������� �ʾҴٸ� ū ���� ���� ���� ���� �ٲ��� 
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
