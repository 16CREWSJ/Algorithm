/*
	sort() 함수는 C++ algorithm 헤더에 포함되어 있음
	sort() 함수는 기본적으로 오름차순으로 정렬 
*/

#include <iostream>
#include <algorithm>

using namespace std;

// 기본 사용법 
/*int main(void){
	int array[] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
	sort(array, array + 10);
	
	for(int i = 0; i < sizeof(array)/sizeof(int); i++){
		cout << array[i] << ' ';
	}
	
	return 0;
}*/

// 정렬할 기준을 직접 설정 
bool compare(int a, int b){
	return a < b; // a > b로 설정하면 내림차순으로 정렬 
}
int main(void){
	int array[] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
	sort(array, array + 10, compare);
	
	for(int i = 0; i < sizeof(array)/sizeof(int); i++){
		cout << array[i] << ' ';
	}
	
	return 0;
}
