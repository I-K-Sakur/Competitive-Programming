//https://codeforces.com/contest/47/problem/B
#include <bits/stdc++.h>
using namespace std;
int cmp(const pair<char,int>& a,const pair<char,int>& b)
{
  return a.second>b.second;
  
}
int main()
{
  char s;
  char A,B,C;
  int a=0,b=0,c=0;
  
  vector<char>vex;
  vector<pair<char,int>>mamin(3);
  while(cin>>s)
  {
    
    vex.push_back(s);
  }
  for(int i=0;i<vex.size();i++)
  {
     if(vex[i]=='<')
     {
       if(vex[i-1]=='A')
       {
        a++;
       }
       else if(vex[i-1]=='B')
       {
         b++;
       }
       else if(vex[i-1]=='C')
       {
        c++;
        
       }
     }
     else if(vex[i]=='>')
     {
      if(vex[i+1]=='A')
       {
        a++;
       }
       else if(vex[i+1]=='B')
       {
         b++;
       }
       else if(vex[i+1]=='C')
       {
        c++;
        //cout<<c;
       }
     }
  }
//  cout<<a<<b<<c;
mamin[0]=make_pair('A',a);
mamin[1]=make_pair('B',b);
mamin[2]=make_pair('C',c);
sort(mamin.begin(),mamin.end(),cmp);
if (mamin[0].second == mamin[1].second && mamin[1].second == mamin[2].second && mamin[0].second == 1) {
    cout << "Impossible" << endl;
}

else{
for(int i=0;i<mamin.size();i++)
{
  cout<<mamin[i].first;
}
}
}

