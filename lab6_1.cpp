#include<iostream>
using namespace std;

int main(){
    int n;
    int m=0;
    int o=0;
        while(n!=0){
    cout << "Enter an integer: ";
    cin >> n;

        if(n%2==0 && n!=0){
            m++;
        }
        if(n%2!=0){
            o++;
        }
    }
    cout << "#Even numbers = " << m;
    cout << "#Odd numbers = " << o;
    return 0;
}
