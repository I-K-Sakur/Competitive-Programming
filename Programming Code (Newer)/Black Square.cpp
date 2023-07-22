//https://codeforces.com/contest/431/problem/A

#include <iostream>
#include <vector>
#include <string> // Include the <string> header for stoi
using namespace std;

int main() {
    int n, a,cal=0;
   n=4;

    vector<int> vex;
while(n--)
{
    cin>>a;
    vex.push_back(a);
 }
 string s;
 cin>>s;

for(int i=0;i<s.size();i++)
{
  //cout<<s[i];
  char a=s[i];
 // cout<<a<<" ";
  int v=(int)a-48;
  //cout<<v<<endl;
  cal=cal+vex[v-1];
}
cout<<cal;
}
