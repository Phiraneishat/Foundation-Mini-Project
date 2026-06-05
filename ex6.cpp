#include <iostream>
using namespace std;
int main() {
    int mark;
    cout<<"enter mark:";
    cin>>mark;
    if(mark>=90)
       cout<<"grade a";
    else if(mark>=75)
       cout<<"grade b";
       else if(mark>=50)
       cout<<"grade c";
    else
        cout<<"fail";
        return 0;
}