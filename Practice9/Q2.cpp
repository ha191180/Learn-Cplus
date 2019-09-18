#include<iostream>
using namespace std;

int length(char* str);

int main();

int length(char* str){
    int counter = 0;
    for (int i = 0; i < 10000; ++i) {
        if (str[i] != '\0'){
            ++counter;
        }
        else i = 10000;
    }
    return counter;
}

int main() {
    char input[10000];
    cin >> input;
    cout << length(input) << endl;
}
