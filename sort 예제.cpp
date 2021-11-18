/*
	sort() 함수 사용 
	특정 변수를 기준으로 데이터를 묶어서 정렬 
*/
#include <iostream>
#include <algorithm>

using namespace std;

class Student{
	public:
		string name;
		int score;
		Student(string name, int score){
			this->name = name;
			this->score = score;
		}
		// 정렬 기준은 '점수가 작은 순서'
		bool operator <(Student &student){
			return this->score < student.score;
		} 
};

int main(void){
	Student students[] = {
		Student("오승조", 90),
		Student("김철수", 93),
		Student("김영희", 85),
		Student("이나영", 75),
		Student("최한별", 87)
	};
	sort(students, students + 5);
	
	for(int i = 0; i < 5; i++){
		cout << students[i].name << ' ';
	}
} 
