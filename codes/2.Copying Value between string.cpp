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
    string s2(s);
    cout<<s2<<endl;
    
    //Method-2
    string s3 = s;
    cout<<s3<<endl;
}
