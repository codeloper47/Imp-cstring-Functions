#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

//length clear and empty method

using namespace std;
int main() {
    string s;
    cin>>s;
    cout<<s.length() <<" - "<< s.size()<<endl;
    
    s.clear();  //will clear string
    
    //to check wether string is empty or not
    
    if(s.empty()){
        cout<<"This is an empty string"<<endl;
    }else{
        cout<<"Not an Empty String"<<endl;
    }
    
}
