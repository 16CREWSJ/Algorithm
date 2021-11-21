#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a, 
			 pair<string, pair<int, int> > b){
			 	if(a.second.first == b.second.first){
			 		return a.second.second > b.second.second;
				 }else{
				 	return a.second.first > b.second.first;
				 }
			 }

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
