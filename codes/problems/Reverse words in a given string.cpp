#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots.

void rev_word(string s){
    int l = s.length()-1;
    int count=0;
    string sub;
    while(l-->=0){
        count++;
        if(s[l]=='.'){
            sub =s.substr(l+1,count);
            cout<<sub<<".";
            sub="";
            count=0;
            l--;
        }
    }
    cout<<s.substr(0,count);
    cout<<endl;
}

int main() {
	int t;
	cin>>t;
	string s;
	cin.get();
	while(t--){
	    getline(cin,s);
	    rev_word(s);
	}
	return 0;
}