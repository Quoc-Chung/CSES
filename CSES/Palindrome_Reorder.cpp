#include<bits/stdc++.h>
using namespace  std;
int  main (){
	string  s;
	cin >>s;
	vector <int> count(26);
	// đếm số lượng phần tử trong chuỗi 
	for(int i=0;i<s.length();i++){
        count[s[i]-'A']++;
	}
	// điều kiện ở  đây là  không thể  tồn tại hai biến 
	int check=0;
	for(int i=0;i<26;i++){
		check+=count[i]%2;// nếu count[i] là số lẻ  thì check tăng lên 
	}
	if(check>1){
     cout<<"NO SOLUTION"<<endl;
	 return 0;
	}
	string result;
	// 0 là false còn !=0 la true 
	for(int i=0;i<26;i++){
    // nếu count[i] là  chẵn trả  về true 
		if(!(count[i]%2)){
			for(int j=0;j<count[i]/2;j++){
				result.push_back(i+'A');
			}
		}
	}
	// nếu count[i] là lẻ  thì trẻ  về true
	for(int i=0;i<26;i++){
		if(count[i]%2){
           for(int  j=0;j<count[i];j++){
			result.push_back(i+'A');
		   }
		}
	}
	// nếu count[i] là  chẵn thì trả  về  true 
    for(int  i=25;i>=0;i--){
		if(!(count[i]%2)){
			for(int  j=0;j<count[i]/2;j++){
				result.push_back(i+'A');
			}
		}
	}
	cout<<result<<endl;
	return 0;

}