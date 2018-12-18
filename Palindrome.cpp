/*
 * Determine if a number is a palindrome or not
 */


#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isPalindrome(int number)
{
    if(number){
        cout << "Is palindrome";
    }
    return true;
}

int reverse(int number){
   int position;
   bool isTotal;
   string numStr, appendStr, reverseStr;
   stringstream mystream;

   mystream << number;
   mystream >> numStr;

   for (position = numStr.length() - 1; position >= 0; position--){
        appendStr = numStr.at(position);
        reverseStr.append(appendStr);
   }
    isTotal = (reverseStr == numStr) ? true:false;
    isPalindrome(isTotal);
    return 0;
}

int main()
{
    string usrInp;
    int number;

    cout << "Enter an integer: ";
    getline(cin, usrInp);
    stringstream(usrInp) >> number;
    reverse(number);

    return 0;
}
