#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"until which number you want to print"<<endl;
    cin>>n;
        int a=0;
     int b=1;                     //fibonacii
     for(int i=1;i<=n;i++){            
       int nextno=a+b;
       cout<<nextno<< " ";
        a=b;
     b=nextno;
    }

    return 0;
}