/*
	����
	N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	
	�Է�
	ù° �ٿ� ���� ���� N(1 �� N �� 1,000,000)�� �־�����. 
	��° �ٺ��� N���� �ٿ��� ���� �־�����. 
	�� ���� ������ 1,000,000���� �۰ų� ���� �����̴�. 
	���� �ߺ����� �ʴ´�.
	
	���
	ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.
*/
#include<stdio.h>
#include<algorithm>

int number, data[1000000];

int main(void){
	scanf("%d", &number);
	for(int i = 0; i < number; i++){
		scanf("%d", &data[i]);
	}
	
	std::sort(data, data + number);
	for(int i = 0; i < number; i++){
		printf("%d\n", data[i]);
	}
	return 0;
}
