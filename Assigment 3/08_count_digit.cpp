#include <iostream>
using namespace std;
int countDigit(int n,int digit){
    int count=0;

    while(n>0){
        int lastDigit=n%10;

        if(lastDigit==digit){
            count++;
        }
        n=n/10;
    }
    return count;
}

int main() {
    int n;
    int digit;

    cin>>n>>digit;
    cout<<countDigit(n,digit);
    
    return 0;
}