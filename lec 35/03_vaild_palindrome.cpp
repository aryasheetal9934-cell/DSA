#include <iostream>
#include<cstring>
using namespace std;

bool ispalindrome(char str[],int n){
    int st=0,end=n-1;
    while(st<end){
        if(str[st++]!=str[end--]){
            cout<<"not vaild palindrome\n";
            return false;
        }
    }
      cout<<"vaild palindrome\n";
      return true;
}
int main() {
    char word[]="raceca0or";
    ispalindrome(word,strlen(word));
    return 0;
}