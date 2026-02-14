#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>m;
    n=(m+1)/2;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=(m+1)-2*i;j++){
            cout<<"  ";
        }
        //stars
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }



          //spaces
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }

         //stars
       if(i==1)
             cout<<"";
       else
           {
            for(int j=2;j<=i-1;j++){
            cout<<"  ";
        }
             for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
           }
        cout<<endl;
    }



    for(int i=n-1;i>=1;i--){
        //spaces
        for(int j=1;j<=(m+1)-2*i;j++){
            cout<<"  ";
        }
        //stars
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }



          //spaces
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }

         //stars
       if(i==1)
             cout<<"";
       else
           {
            for(int j=2;j<=i-1;j++){
            cout<<"  ";
        }
             for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
           }
        cout<<endl;
    }
    
    return 0;
}