#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isVowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    int maxVowels(string s, int k) {
        int n = s.size();
        int l = 0, r = 0;
        int count = 0, ans = 0;

        while(r < n){
            // current character ko add karna
            if(isVowel(s[r])) 
                count++;

            // window size maintain karna
            if(r - l + 1 > k){
                if(isVowel(s[l])) 
                    count--;
                l++;
            }

            // jab window size k ke equal ho
            if(r - l + 1 == k){
                ans = max(ans, count);
            }

            r++;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    string s;
    int k;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter k: ";
    cin >> k;

    int result = obj.maxVowels(s, k);
    cout << "Maximum vowels in any substring of length k: " << result << endl;

    return 0;
}