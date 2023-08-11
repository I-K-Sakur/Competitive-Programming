//https://codeforces.com/contest/520/problem/A

#include<bits/stdc++.h>
using namespace std;

struct cmp{
   bool operator()(char ls,char rs)const{
    return tolower(ls)<tolower(rs);
   }
};
int main()
{
int n;
cin>>n;
char a;
char arr[105];
set<char,cmp>s;
set<char>:: iterator it;
for(int i=0;i<n;i++)
{
 cin>>a;
   s.insert(a);

}

// for(char element:s)
// {
//    cout<<element;
// }
// cout<<s.size();
if(s.size()==26)
{
   cout<<"YES"<<endl;
}
else{
   cout<<"NO"<<endl;
}
}
