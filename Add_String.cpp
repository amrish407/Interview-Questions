// PROBLEM STATEMENT

/*

You are given two non-negative integers, ‘NUM1’ and ‘NUM2’, in the form of strings. Return the sum of both 
strings.

Note :
You do not need to print anything, it has already been taken care of. Just implement the given function.
Example:
Let ‘NUM1’ be: “5”
Let ‘NUM2’ be: “21”
The sum of both numbers will be: “26”.

*/

#include<iostream>
#include<string>
using namespace std;

string stringSum(string &num1, string &num2) {
    // Write your code here.
    int carry = 0;
    string result = "";

    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while(i>=0 || j>=0 || carry >0){
        int digit1 = (i>=0) ? num1[i] - '0' : 0;
        int digit2 = (j>=0) ? num2[j] - '0' : 0;
            int sum = digit1 + digit2 + carry;
            carry = sum/10;
            sum = sum%10;
            result = to_string(sum) + result;
            i--;
            j--;
    }

    return result;
}

int main(){
    string num1, num2, result;
    cout << "Enter: ";
    cin >> num1 >> num2;

    result = stringSum(num1, num2);
    cout << result;
}