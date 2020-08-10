#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

//swapping first and last character of a string

int main() {
    string s;
    getline(cin,s);
    int l = s.length()-1;
    swap(s[0],s[l]);
    cout<<s;
	return 0;
}