#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	// pair�� �� ���� �����͸� �ٷ�� ���� ����� �� �ִ� ���̺귯�� 
	vector<pair<int, string> > v;
	v.push_back(pair<int, string>(90, "������"));
	v.push_back(pair<int, string>(93, "��ö��"));
	v.push_back(pair<int, string>(85, "�迵��"));
	v.push_back(pair<int, string>(75, "�̳���"));
	v.push_back(pair<int, string>(87, "���Ѻ�"));
	
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		cout << v[i].second << ' ';
	}
	return 0;
}
