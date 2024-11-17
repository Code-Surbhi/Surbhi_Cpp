#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[20] = {"237.78"};
    cout<<str<<endl;
    cout<<strtof(str,NULL)<<endl;
    char str2[30] = {"237.80"};
    cout<<str2<<endl;
    cout<<strtol(str,NULL,10)<<endl;
}