/*
	힙은 최솟값이나 최댓값읠 빠르게 찾아내기 위해 완전 이진 트리를 기반으로 한 트리 
	시간 복잡도는 O(N * logN) 
	힙 정령은 퀵 정렬, 병합 정렬보다 더 우위이지만 
	단순히 속도측면에선 퀵 정렬이 더 빠름 
*/

#include <stdio.h>

int number = 9;
int heap[9] = {7, 6, 5, 8, 3, 5, 9, 1, 6};

int main(void){
	// 힙을 구성
	for(int i = 1; i < number; i++){
		int c = i;
		do{
			int root = (c - 1) / 2;
			if(heap[root] < heap[c]){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while(c != 0);
	}
	// 크기를 줄여가며 반복적으로 힙을 구성
	for(int i = number - 1; i >= 0; i--){
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0;
		int c = 1;
		do{
			c = 2 * root + 1;
			// 자식 중에 더 큰 값을 찾기
			if(c < i - 1 && heap[c] < heap[c + 1]){
				c++;
			} 
			// 루트보다 자식이 크다면 교환
			if(c < i && heap[root] < heap[c]){
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			} 
			root = c;
		}while (c < i);
	} 
	// 결과 출력
	for(int i = 0; i < number; i++){
		printf("%d ", heap[i]);
	} 
}
