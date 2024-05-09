#include <bits/stdc++.h> 
#include<string>
using namespace std;

//PROBLEM STATEMENT
/*

You are given a string 'STR'. The string contains [a-z] [A-Z] [0-9] [special characters]. 
You have to find the reverse of the string.

For example:
 If the given string is: STR = "abcde". You have to print the string "edcba".
follow up:
Try to solve the problem in O(1) space complexity. 

*/


//Code for the Coding Ninja Platform

string reverseString(string str)
{
	// Write your code here.
	int left = 0;
	int right = str.length() - 1;

	while(left < right){
		swap(str[left] , str[right]);
		left++;
		right--;
	}
	return str;
}




//Code for our Understanding

/*

string reverseString(string str)
{
	// Write your code here.
	int left = 0;
	int right = str.length() - 1;

	while(left < right){
		swap(str[left] , str[right]);
		left++;
		right--;
	}
	return str;
}

int main() {
    string str = "abcde";
    cout << "Original string: " << str << std::endl;
    
    // Reverse the string
    reverseString(str);

    std::cout << "Reversed string: " << str << std::endl;

    return 0;
}

*/