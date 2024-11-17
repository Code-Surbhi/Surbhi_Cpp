#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //using character array
    char str[20];
    cout<<"Enter a string: ";
    cin.getline(str,20);
    cout<<"String you input is: "<<str<<endl;
    char str2[20];
    cout<<"Enter secind string: ";
    cin.getline(str2,20);
    if(strstr(str,str2)!=NULL){
        cout<<strstr(str,str2);
    }
    else{
        cout<<"No match found";
    }
}