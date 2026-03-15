#include <iostream>
using namespace std;

int main() {
    int nums[][4]={{1,4,9},{11,4,3},{2,3,3}};
    int sum=0;
   
        for(int j=0;j<4;j++){
          sum=sum+nums[1][j];

        }
           
          cout<<sum;
    
    return 0;
}