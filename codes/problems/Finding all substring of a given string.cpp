#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void substring(string s,vector<string>&v){
    if(s.length()==0){
        v.push_back("");
        return;
    }
    string smallstring = s.substr(0,1);
    v.push_back(smallstring);
    for(int i=1;i<s.length();i++){
        smallstring+=s[i];
        v.push_back(smallstring);
    }
    substring(s.substr(1),v);
}

using namespace std;
int main() {
    string s;
    cin>>s;
    vector<string>v;
    substring (s,v);
    
    for(auto x:v){
        cout<<x<<endl;
    }
	return 0;
}
