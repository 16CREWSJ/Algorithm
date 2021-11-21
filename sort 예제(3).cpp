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
	// pair는 한 쌍의 데이터를 다루기 위해 사용할 수 있는 라이브러리 
	vector<pair<int, string> > v;
	v.push_back(pair<int, string>(90, "오승조"));
	v.push_back(pair<int, string>(93, "김철수"));
	v.push_back(pair<int, string>(85, "김영희"));
	v.push_back(pair<int, string>(75, "이나영"));
	v.push_back(pair<int, string>(87, "최한별"));
	
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		cout << v[i].second << ' ';
	}
	
	return 0;
}
