#include<iostream>
using namespace std;
int main(){
    long long int a, b;
   long long int k;
    cin >> a;
    cin >> b;
    cin >> k;
 
    if(a%k==0 && b%k==0){
        cout << "Both" << endl;
    }
    else if(a%k==0 && b%k!=0)
    {
        cout << "Memo" << endl;
    }
    else if(a%k!=0 && b%k==0)
    {
        cout << "Momo" << endl;
    }
    else if(a%k!=0 && b%k!=0)
    {
        cout << "No One" << endl;
    }
}