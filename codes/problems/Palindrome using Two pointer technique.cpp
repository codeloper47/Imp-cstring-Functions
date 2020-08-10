#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

//palindrome using two pointer technique

int main() {
	string s;
	cin>>s;
	int i=0;
	int l=s.length()-1;
	while(i++<l--){
	    if(s[i]!=s[l]){
	        cout<<"Not a palindrome";
	        return 0;
	    }
	}
	cout<<"It's a palindrome";
	return 0;
}