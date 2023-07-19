#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long l1,r1,l2,r2;
 cin>>l1>>r1>>l2>>r2;
 int i,j,flag;
 if(l1<=r1 && l2<=r2)
 {
  for(i=l1;i<=r1;i++)
  {
      for(j=l2;j<=r2;j++)
       {
        
        
       if((i==j)&&(i==l1||i==r1||i==l2||i==r2))
        {  
            cout<<i;
            if(i!=0 &&(i!=l1 || i!=l2||i!=r1||i!=r2))
            {
                cout<<" ";
            }
           
        }
        else if(l2>r1||l1>r2)
        {
            cout<<"-1"<<endl;
            return 0;
        }
        }
  }
}

}
 


  
 