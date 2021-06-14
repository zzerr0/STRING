/*

Change the string
Basic Accuracy: 74.87% Submissions: 3020 Points: 1

Given a string S, the task is to change the complete string to Uppercase or Lowercase depending upon the case for the first character.

Example 1:

Input:
S = "abCD"
Output: abcd
Explanation: The first letter (a) is 
lowercase. Hence, the complete string
is made lowercase.

â€‹Example 2:

Input: 
S = "Abcd"
Output: ABCD
Explanation: The first letter (A) is
uppercase. Hence, the complete string
is made uppercase.


Your Task:
You don't need to read input or print anything. Your task is to complete the function modify() which takes the string S as input and returns the resultant string with stated modifications.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1) for C++ and O(|S|) for output in Java/Python.


Constraints:
1<=|S|<=104
*/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    
    string modify (string str)
    {
        // your code here
        int check = str[0];
        if(check >= 97 && check <= 122){
            transform(str.begin(), str.end(), str.begin(), ::tolower);
            return str;
        }
        if(check >= 65 && check <= 90){
            transform(str.begin(), str.end(), str.begin(), ::toupper);
            return str;
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.modify (s) << endl;
	}
}  // } Driver Code Ends
