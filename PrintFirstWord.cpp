/*

Print first letter of every word in the string
Basic Accuracy: 58.95% Submissions: 14481 Points: 1

Given a string S, the task is to create a string with the first letter of every word in the string.
 

Example 1:

Input: 
S = "geeks for geeks"
Output: gfg

Example 2:

Input: 
S = "bad is good"
Output: big

Your Task:
You don't need to read input or print anything. Your task is to complete the function firstAlphabet() which takes string S as input parameter and returns a string that contains the first letter of every word in S.


Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(|S|)


Constraints:
1 <= |S| <= 105
S contains lower case English alphabets
Words have a single space between them.

*/

// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string firstAlphabet(string str)
	{
	    // Your code goes here
	    int count = 0;
	    cout<<str[count];
	    for(int i = 0; i < str.length(); i++){
	        if( str[i] == ' '){
	            count = i + 1;
	            cout<<str[count];
	        }
	        
	    }
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	}

    return 0;
} 
  // } Driver Code Ends
