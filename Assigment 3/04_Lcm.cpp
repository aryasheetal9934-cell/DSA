#include <iostream>
using namespace std;

    int gcd(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    int lcm(int a,int b){
        return(a*b/gcd(a,b));
    }
    int main(){
        int n1,n2;
        cin>>n1>>n2;

        cout<<lcm(n1,n2);

    
    return 0;
}