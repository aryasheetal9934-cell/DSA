#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(string s : strs) {
            string key = s;
            sort(key.begin(), key.end()); // sorting string
            
            mp[key].push_back(s); // grouping
        }

        vector<vector<string>> result;

        for(auto it : mp) {
            result.push_back(it.second);
        }

        return result;
    }
};

// Driver code (VS Code me run karne ke liye)
int main() {
    Solution obj;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> ans = obj.groupAnagrams(strs);

    for(auto group : ans) {
        for(string word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}