/*
	sort() �Լ��� C++ algorithm ����� ���ԵǾ� ����
	sort() �Լ��� �⺻������ ������������ ���� 
*/

#include <iostream>
#include <algorithm>

using namespace std;

// �⺻ ���� 
/*int main(void){
	int array[] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
	sort(array, array + 10);
	
	for(int i = 0; i < sizeof(array)/sizeof(int); i++){
		cout << array[i] << ' ';
	}
	
	return 0;
}*/

// ������ ������ ���� ���� 
bool compare(int a, int b){
	return a < b; // a > b�� �����ϸ� ������������ ���� 
}
int main(void){
	int array[] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
	sort(array, array + 10, compare);
	
	for(int i = 0; i < sizeof(array)/sizeof(int); i++){
		cout << array[i] << ' ';
	}
	
	return 0;
}
