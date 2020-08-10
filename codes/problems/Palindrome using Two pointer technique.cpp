#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

//palindrome using two pointer technique

int main() {
    string s;
    getline(cin,s);
    int i=0;
    int l = s.length()-1;
    while(i<l){
        if(s[i++]!=s[l--]){
            cout<<"not a palindrome";
            return 0;
        }
    }
    cout<<"its a palindrome";
    
	return 0;
}