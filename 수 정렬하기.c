/*
	����
	N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	
	�Է�
	ù° �ٿ� ���� ���� N(1 �� N �� 1,000)�� �־�����. 
	��° �ٺ��� N���� �ٿ��� �� �־�����. 
	�� ���� ������ 1,000���� �۰ų� ���� �����̴�. ���� �ߺ����� �ʴ´�.
	
	���
	ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�. 
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
