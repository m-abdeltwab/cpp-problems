#include <iostream>
using namespace std;


string reverse(const string &word){
    string str;

    for(int i = 0; i < word.size(); ++i){
        char letter = word[word.size() - i - 1];
        str+=letter;
    }
    return str;
}

int main() {
    string word = "mohamed";
    cout << reverse(word) <<endl;

    return 0;
}
