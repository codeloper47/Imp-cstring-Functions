#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

//find and erase method

using namespace std;
int main() {
    string s = "codeloper learn to code and develop";
    cout<<s<<endl;
    
    string x = "learn";
    int index = s.find(x);
    cout<<index<<endl;
    
    s.erase (index,x.length()+1);
    cout<<s<<endl;
}
