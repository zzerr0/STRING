/*

Red OR Green
Basic Accuracy: 70.06% Submissions: 7658 Points: 1

Given a string of length N, made up of only uppercase characters 'R' and 'G', where 'R' stands for Red and 'G' stands for Green.Find out the minimum number of characters you need to change to make the whole string of the same colour.

Example 1:

Input:
N=5
S="RGRGR"
Output:
2
Explanation:
We need to change only the 2nd and 
4th(1-index based) characters to 'R', 
so that the whole string becomes 
the same colour.

Example 2:

Input:
N=7
S="GGGGGGR"
Output:
1
Explanation:
We need to change only the last 
character to 'G' to make the string 
same-coloured.

 

Your Task:
You don't need to read input or print anything. Your task is to complete the function RedOrGreen() which takes the Integer N and the string S as input parameters and returns the minimum number of characters that have to be swapped to make the string same-coloured.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1<=N<=105
S consists only of characters 'R' and 'G'.
*/

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int N,string s) {
           //code here
           int r = 0, l = 0;
           for(int i = 0; i < s.length(); i++){
               if(s[i] == 'R'){
                   r++;
               }
               else{
                   l++;
               }
           }
           if(r > l){
               return l;
           }
           return r;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}  // } Driver Code Ends
