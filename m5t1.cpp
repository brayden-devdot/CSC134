#include <iostream>
using namespace std;
/*
CSC 134
M5T2
Brayden
04/13/2026
*/

//declare our functions
string formatanswer(int answer);
void printanswer(string msg);

int main() {
    int answer = 5;
    string message;
    message = formatanswer(answer);
    printanswer(message);
    return 0;

}

// define function

string formatanswer (int answer) {
    // nice looking string
    string answermessage;
    answermessage = "the answer is ";
    answermessage += to_string(answer);

    return answermessage;

}
void printanswer (string msg) {
    // message display
    cout <<msg<< endl;
}