#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << sentence << endl;

    return 0;
}