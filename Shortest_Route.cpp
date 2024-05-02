//Problem is available on Coding Ninja Platform

/*
PROBLEM STATEMENT
You want to visit your friend’s house who lives at some location in an infinite grid. You are initially at the 
origin of the infinite grid and can move only in four directions (i.e East, West, North, South).

For Example, If you are at cell (X, Y) then you can move to East i.e at cell (X+1, Y), or 
West i.e at cell (X-1, Y), or North i.e at cell (X, Y+1), or South i.e at cell (X, Y-1).

Your friend gives you a string ‘STR’ of length ‘N’ that represents the route to his house from the origin. 
The string ‘STR’ has only four different characters, i.e ‘E’, ‘W’, ‘N’, ‘S’. which represent direction East, 
West, North, South, respectively.

You find out that the route given by your friend is very long, and a shorter route is also possible. 
Your task is to find the smallest route to reach your friend’s house. See the example for better clarity.

Note:

1.  There can be more than one shortest route, you should return the one which is lexicographically smallest 
    among them.
    Example:
    Consider that your friend’s house is in the cell (2, 1) in the grid. And the route given by your friend is 
    represented by the string ‘STR’= “NNSEWEE”.
    One of the smallest route to reach cell (2, 1) from origin i.e cell (0, 0) is given by string  “EEN”  
    i.e you start from the cell (0, 0), then move East, i.e at cell (1, 0), then again move East, 
    i.e at cell (2, 0), and then finally move North i.e at cell (2, 1).

Note, 
there are some other smallest routes such as “NEE”,  “ENE” etc, but “EEN” is the lexicographically smallest 
among them, so you should return it.
*/



//Code for Coding Ninja Platform
/*
#include <bits/stdc++.h> 
string findShortestRoute(string &str) 
{
	// Write your code here.
	int x=0, y=0;           //Starting Position at the origin

	for(char ch : str){
		if(ch=='E')
			x++;            //Move East
		else if (ch=='W')
			x--;            //Move West
		else if (ch=='N')
			y++;            //Move North
		else if (ch=='S')
			y--;            //Move South
	}


    // Construct the shortest lexicographically route
	string route = "";
	if(x>0)
		route = route + string(x, 'E');
	if(y>0)
		route = route + string(y, 'N');
	if(x<0)
		route = route + string(-x,'W');
	if(y<0)
		route = route + string(-y,'S');

    // Sort the route lexicographically
	sort(route.begin(), route.end());

	return route;
}
*/


//Code for our understanding 
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string smallestRoute(string str) {
	// Write your code here.
	int x=0, y=0;           //Starting Position at the origin

	for(char ch : str){
		if(ch=='E')
			x++;            //Move East
		else if (ch=='W')
			x--;            //Move West
		else if (ch=='N')
			y++;            //Move North
		else if (ch=='S')
			y--;            //Move South
	}


    // Construct the shortest lexicographically route
	string route = "";
	if(x>0)
		route = route + string(x, 'E');
	if(y>0)
		route = route + string(y, 'N');
	if(x<0)
		route = route + string(-x,'W');
	if(y<0)
		route = route + string(-y,'S');

    // Sort the route lexicographically
	sort(route.begin(), route.end());

	return route;
}

int main() {
    string str = "NNSEWEE";
    cout << "Shortest lexicographically route: " << smallestRoute(str) << endl;
    return 0;
}

