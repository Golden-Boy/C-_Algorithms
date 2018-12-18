/*
 * Counts the number of uppercase letters given in a user input string
 */

#include <iostream>
#include <string>
using namespace std;

int main(){

    string userInp;
    int total;

    cout << "Input a string: ";
    getline(cin, userInp);

    for (char c: userInp){
            if(c >= 'A' && c <= 'Z') {
                    total += 1;
            }
    }
    cout << "The number of uppercase letters is " << total;

return 0;
}
