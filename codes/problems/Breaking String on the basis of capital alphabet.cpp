#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main() {
    string s;
    cin>>s;
    vector<string>v;
    string sub;
    for(int i=0;i<s.length();i++){
        sub+=s[i];
        if(s[i+1]>='A' and s[i+1]<='Z'){
            v.push_back(sub);
            sub="";
        }
    }
    
    v.push_back(sub);
    
    for(auto x:v){
        cout<<x<<endl;
    }
	return 0;
}
