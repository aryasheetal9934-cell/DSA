// #include <iostream>
// #include<string>
// using namespace std;

// int main() {
//     string s;
//     cin>>s;
//     int start=0,end=s.length()-1;
//     while(start<end){
//         swap(s[start],s[end]);
//         start++;
//         end--;
//     }
//     cout<<s;

//     return 0;
// }
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    cout<<s;
    
    return 0;
}