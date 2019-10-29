#include <iostream>
#include <stack>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		char tmp[20];
		stack<char> word;
		int end;
		for(int j = 0; j < 20; j++){
			cin >> tmp[i];
			if(tmp[i] != 0){
				word.push(tmp[i]);
			}else{
				end = j-1;
				j = 20;
			}
		}
		if(word.top() == 's'){
			word.push('e');
			word.push('s');
			for(int i = end; i > 0; i--)
			cout << word.top() << endl;
		}
		if(word.top() == 'sh'){
			word.push('e');
			word.push('s');
		}
		if(word.top() == 's'){
			word.push('e');
			word.push('s');
		}
		if(word.top() == 's'){
			word.push('e');
			word.push('s');
		}
		if(word.top() == 's'){
			word.push('e');
			word.push('s');
		}
		if(word.top() == 's'){
			word.push('e');
			word.push('s');
		}
	}
}
