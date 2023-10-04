 //Bear and Finding Criminals
//https://codeforces.com/contest/680/problem/B
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,n,x,cri=0,le=0,ri=0,lesum=0,risum=0,at=0;
  cin>>n>>a;
  int it=a;
  vector<int>vex;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    vex.push_back(x);
  }
  int sum1=accumulate(vex.begin()+a,vex.end(),0);
   int sum2=accumulate(vex.begin(),vex.begin()+a-1,0);
  // cout<<sum1<<" "<<sum2<<endl;
   if(vex[a-1]==1)
     {
        cri++;
     }
     le=a-2;
     ri=a;
     while(le>=0 && ri<n)
     {
        
    //if(it>0) it--;
    if(vex[le]==1 && vex[ri]==1)
    {
        cri=cri+2;
       sum1=sum1-vex[ri];
        sum2=sum2-vex[le];
        //cout<<cri;
    }
    else{
     sum1=abs(sum1-vex[ri]);
        sum2=abs(sum2-vex[le]);
    }
    
    le--;
    ri++;
    //cout<<le<<" "<<ri<<endl;
   }
   if(le>=0) 
   {
    cri=cri+sum2; 
   
   }
   else if(ri<n)
   { 
    cri=cri+sum1;
  
     //cout<<cri<<endl; 
    }
cout<<cri<<endl;
  
}
