#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  int n;
  int score=0;
  cin>>t;
  int k=0;
  int baki=0;
 
  int arr1[n];
  int arr2[n];
while(t--)
{
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr1[i];
    if(n==1)
    {
      score=1;
      //cout<<score<<endl;
    }
 
  }
  int size = sizeof(arr1) / sizeof(arr1[0]);
  for(int i=n-1;i>=0;i--)
  {
    arr2[k]=arr1[i];
   
    //cout<<arr2[k];
    k=k+1;
  }
  

//  return 0;
// }
for(int i=0;i<n;i++)
{
  if(i<=n-2){

  
   if(arr1[i]!=arr1[i+1])
   {
    score=score+1;
 
   }
 
  }
}
for(int i=0;i<n;i++)
{
if(equal(arr1,arr1+size,arr2))
  {
 
        if(arr1[i]==0)
        {
          arr2[i]=1;
          cout<<arr2[i]<<" ";
        }
        else if(arr1[i]==1)
        {
          arr2[i]=0;
          cout<<arr2[i]<<" ";
        }
      
  }
  else{
        cout<<arr2[i]<<" ";
  }

}
cout<<endl;
}
}


// if (score>0)
// {
//   while(k<n and score!=0)
//   {
//     arr2[k]=0;
//     arr2[k+1]=1;
//     k=k+2;
//     if(k>=2){
//       if(arr2[k-1]==0)
//       {
//         arr2[k]=1;
//       }
//       else if(arr2[k-1]==1){
//         arr2[k]=0;
//       }
//     }
//     score=score-1;
//   }
 
// }

// for(int i=0;i<n;i++)
// {
//   if(score>0)
//   {
//     arr2[i]==0;
//     arr2[i+1]==1;
//   }
// }

// }
// }
