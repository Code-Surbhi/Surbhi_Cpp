#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: "<<endl;
    getline(cin,str);
    cout<<"Your string is : "<<str<<endl;
    cout<<str.find_first_of('l')<<endl;
    cout<<str.find_first_of('l',3)<<endl;
    cout<<str.find_first_of('l',4)<<endl;
}