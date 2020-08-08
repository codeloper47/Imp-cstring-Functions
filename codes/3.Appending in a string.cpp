#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

//copying value betweeen string

using namespace std;
int main() {
    string s;
    cin>>s;
    
    //Method-1
    s.append(" learn to code and develope");
    cout<<s<<endl;
    
    //Method-2
    s+= " u are a programmer";
    cout<<s;
}
