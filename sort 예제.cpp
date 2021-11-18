/*
	sort() �Լ� ��� 
	Ư�� ������ �������� �����͸� ��� ���� 
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
		// ���� ������ '������ ���� ����'
		bool operator <(Student &student){
			return this->score < student.score;
		} 
};

int main(void){
	Student students[] = {
		Student("������", 90),
		Student("��ö��", 93),
		Student("�迵��", 85),
		Student("�̳���", 75),
		Student("���Ѻ�", 87)
	};
	sort(students, students + 5);
	
	for(int i = 0; i < 5; i++){
		cout << students[i].name << ' ';
	}
} 
