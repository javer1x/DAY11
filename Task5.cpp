#include <iostream>
#include <string>
using namespace std;
int main() {
    string txt="Hello,World!";
    cout<<"The first character is :"<<txt[0]<<endl;
    cout<<"The last character is :"<<txt[txt.length()-1]<<endl;
    return 0;
}