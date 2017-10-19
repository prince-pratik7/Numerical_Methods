// C++ program to count number of substrings with
// exactly k distinct characters in a given string
#include<bits/stdc++.h>
using namespace std;
 
// Function to count number of substrings
// with exactly k unique characters
int countkDist(string str, int k)
{
    int n = str.length();
 
    // Initialize result
    int res = 0;
 
    // To store count of characters from 'a' to 'z'
    int cnt[26];
 
    // Consider all substrings beginning with
    // str[i]
    for (int i = 0; i < n; i++)
    {
        int dist_count = 0;
 
        // Initializing array with 0
        memset(cnt, 0, sizeof(cnt));
 
        // Consider all substrings between str[i..j]
        for (int j=i; j<n; j++)
        {
            // If this is a new character for this
            // substring, increment dist_count.
            if (cnt[str[j] - 'a'] == 0)
                dist_count++;
 
            // Increment count of current character
            cnt[str[j] - 'a']++;
 
            // If distinct character count becomes k,
            // then increment result.
            if (dist_count == k)
                res++;
        }
    }
 
    return res;
}
 
// Driver Program
int main()
{
    string str = "abcbaa";
    int k = 3;
    cout << "Total substrings with exactly "
         << k <<" distinct characters :"
         << countkDist(str, k) << endl;
    return 0;
}
