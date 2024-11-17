#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //using character array
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str,100);
    cout<<"String you input is: "<<str;

    //at the end of the string we get '\0' - called as string delimiter - null charater - string terminator
}
