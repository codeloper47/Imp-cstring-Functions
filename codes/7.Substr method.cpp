#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

//substr method

using namespace std;
int main() {
    string s = "codeloper learn to/code and develop";
    int index = s.find("/"); // it will return index of "/"
    cout<<index<<endl;
    
    string sub = s.substr(index+1,4);
    cout<<sub<<endl;
    
    cout<<s.substr(0,2)<<endl;
    
    //aall value after a particular index;
    cout<<s.substr(4)<<endl;
}
