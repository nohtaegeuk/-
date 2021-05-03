#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	
	vector < pair < int, string > > v;
	//pair는 쌍을 의미. int와 string이 쌍을 이룬다는 의미.
	v.push_back(pair<int, string>(90, "박한울")); 
	v.push_back(pair<int, string>(85, "이태일")); 
	v.push_back(pair<int, string>(82, "나동빈")); 
	v.push_back(pair<int, string>(98, "강종구"));
	v.push_back(pair<int, string>(79, "이상욱"));  

	sort(v.begin(), v.end());

	for(int i=0 ; i < v.size(); i++){
		
		cout << v[i].second << ' '; // second은 pair안에 두번쨰 인자를 의미.
		 
		
	}
	
	return 0; 
}



