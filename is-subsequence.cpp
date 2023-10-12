/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
A subsequence of a string is a new string that is formed from the original string by deleting some
(can be none) of the characters without disturbing the relative positions of the remaining characters.
(i.e., "ace" is a subsequence of "abcde" while "aec" is not).

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true

Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false

*/
#include <iostream>
#include <string>

using namespace std;

bool isSubsequence(string s, string t)
{
    int n = s.size(), m = t.size();
    int i = 0;
    for (int j = 0; j < m; j++)
        if (t[j] == s[i])
            i++;
    if (i == n)
        return 1;
    return 0;
}

int main()
{
    //string s = "abc" ; 
    //string t = "ahbgdc" ;

    string s = "axc";
    string t = "ahbgdc" ;


    cout << "Is subsequence: " << isSubsequence( s , t ) ;
}