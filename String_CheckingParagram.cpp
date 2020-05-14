
#include <iostream> 
#include<istream>
#include<vector>
using namespace std; 
  
// Returns true if the string is pangram else false 
bool checkPangram(string& str) 
{ 
    // Create a hash table to mark the characters 
    // present in the string 
    vector<bool> mark(26, false); 
  
    // For indexing in mark[] 
    int index; 
  
    // Traverse all characters 
    for (int i = 0; i < str.length(); i++) { 
 /* If uppercase character, subtract 'A' 
    to find index
    to find the index position of alphabet 
    so that i can be put true
    index = M-A=77-65=12
    therefore index 12 will
    be markd true for alphabet M
 */
            //SIMILARLY
        if ('A' <= str[i] && str[i] <= 'Z') 
            index = str[i] - 'A'; 
  
        // If lowercase character, subtract 'a' 
        // to find index. 
        else if ('a' <= str[i] && str[i] <= 'z') 
            index = str[i] - 'a'; 
  
        // If this character is other than english 
        // lowercase and uppercase characters. 
        else
            continue; 
  
        mark[index] = true; 
    } 
  
    // Return false if any character is unmarked 
    for (int i = 0; i <= 25; i++) 
        if (mark[i] == false) 
            return (false); 
  
    // If all characters were present 
    return (true); 
}


int main() 
{
 string str = "The quick brown fox jumps over the"
               " lazy dog";
    if (checkPangram(str) == true) 
        cout<<"Yes"<<endl;
    else
       cout<<"No"<<endl;
  
    return (0); 
} 
