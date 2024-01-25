//IsPowerOFTwo using bitwise
#include <bits/stdc++.h>
using namespace std;
bool ispoweroftwo(int x)
{
  //x will checkif x==0 
  //and !(x&(x-1)) will check 
  //if x is a power of 2 or not
  return (x && !(x & (x-1)));
}
int main()
{
  int c=15;
   bitset<8>b(001100);
   if(ispoweroftwo(c))
   {
    cout<<"True"<<endl;
   }
   else{
    cout<<"False"<<endl;
   }
  

 }

------------------------------------------------------------------------
------------------------------------------------------------------------
//bitwise all possible subset
#include <bits/stdc++.h>
using namespace std;

//given an array string we are searching 
//for all possiblesubsets
void possiblesubset(char arr[],int x)
{
   //outer loop that iterates upto 2^x
   //1<<N == 2^x
   //cause the number of subset is 2^x
  //(1 << i): This part involves left-shifting the binary representation of the number 1 by i positions.
  //In other words, it sets the i-th bit to 1 and leaves all other bits as 0.
  //For example, if i is 2, (1 << 2) results in binary 100
   for(int i=0;i<(1<<x);++i)
   {
    //inner loop that iterates over each bit of the current value of i
     for(int j=0;j<x;j++)
     {
        //checking if the j-th bit of i is set 
        //that means it is 1
        if(i & (1<<j))
        {
           //if set then print the elements
           cout<<arr[j]<<' ';
        }
     }
     cout<<endl;
   }
}
int main()
{
  int n;
  cin>>n;
  char arr[100+5];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  possiblesubset(arr,n);
  

 }
-------------------------------------------------------
------------------------------------------------------
#Sieve using bitset

#include <bits/stdc++.h>
using namespace std;

bitset<1000> b;
vector<int> primes;

// prime sieve using bitset
void sieve(long long upper_bound)
{
    b.set(); // setting all values to 1
    b[0] = b[1] = 0;//initial primes
    primes.push_back(2);//2 is prime we know

    for (int i = 3; i <= upper_bound + 1; i += 2)
    {
        if (b[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= upper_bound + 1; j += i)
            {
                b[j] = 0;
            }
        }
    }
}

int main()
{
    sieve(1000);
    for (int i = 0; i < primes.size(); i++)
    {
        cout << primes[i] << " ";
    }

    return 0;
}

--------------------------------------------------------------------------------------
  -------------------------------------------------------------------------------------

  //GCD AND LCM

  #include <bits/stdc++.h>
using namespace std;
//gcd and LCM
int  gcd(int a,int b)
{
    int rem=0;
    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int lcm(int a,int b)
{
   return (a*b)/gcd(a,b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    // cout<<__gcd(a,b);
    cout<<gcd(a,b)<<endl;
    cout<<lcm(a,b)<<endl;
}
