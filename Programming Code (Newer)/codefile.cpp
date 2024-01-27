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

------------------------------------------------------------------------------
------------------------------------------------------------------------------

  //GCD LCM using vector and other 

  #include <bits/stdc++.h>
using namespace std;
//gcd and LCM using array vector etc..
//for many values


int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
      cin>>a;
      v.push_back(a);
    }
    int x=__gcd(v[0],v[1]);
    for(int i=2;i<n;i++)
    {
        x=__gcd(x,v[i]);
    }
    cout<<x<<endl;
}
--------------------------------------------------
---------------------------------------------------
  //LCM using vector and other
  
  #include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int x = v[0];
    for (int i = 1; i < n; i++) {
        x = lcm(x, v[i]);
    }
    
    cout << "LCM: " << x << endl;
    
    return 0;
}

------------------------------------------------------
-------------------------------------------------------
//The GCD of pair 
  #include <bits/stdc++.h>
using namespace std;
//maximum gcd among pairs


int main()
{
  long long int n,a,i,b,mx=1e6+7;
  cin>>n;
  vector<int>v(n),cnt(mx),ans(mx);
// 6
// 2 4 6 8 10 12
// Here, 6 is the number of elements, and the elements are 2 4 6 8 10 12.
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
//   cnt[2] = 1
// cnt[4] = 1
// cnt[6] = 1
// cnt[8] = 1
// cnt[10] = 1
// cnt[12] = 1
// Then, it iterates from 2 to mx (here mx = 1e6 + 7), which is 1,000,007.

// For each number i from 2 to mx, it iterates over multiples of i up to mx. For example, when i = 2, it iterates over j = 2, 4, 6, 8, ....

// For each j, it adds the count of elements at index j to ans[i].

// If ans[i] is greater than 1, it updates x to i. This x will store the maximum GCD among pairs of elements.

// Let's see the count of multiples of each number:

// For i = 2:

// ans[2] will be cnt[2] = 1.
// No multiple of 2 has a count greater than 1.
// For i = 3:

// ans[3] will be cnt[3] = 0.
// No multiple of 3 has a count greater than 1.
// For i = 4:

// ans[4] will be cnt[4] = 1.
// No multiple of 4 has a count greater than 1.
// For i = 5:

// ans[5] will be cnt[5] = 0.
// No multiple of 5 has a count greater than 1.
// For i = 6:

// ans[6] will be cnt[6] = 1.
// No multiple of 6 has a count greater than 1.
// For i = 7:

// ans[7] will be cnt[7] = 0.
// No multiple of 7 has a count greater than 1.
// For i = 8:

// ans[8] will be cnt[8] = 1.
// No multiple of 8 has a count greater than 1.
// For i = 9:

// ans[9] will be cnt[9] = 0.
// No multiple of 9 has a count greater than 1.
// For i = 10:

// ans[10] will be cnt[10] = 1.
// No multiple of 10 has a count greater than 1.
// For i = 11:

// ans[11] will be cnt[11] = 0.
// No multiple of 11 has a count greater than 1.
// For i = 12:

// ans[12] will be cnt[12] = 1.
// No multiple of 12 has a count greater than 1.
  for(int i=0;i<n;i++) cnt[v[i]]++; //if the cector is (20,20,20,30,40..) then v[20]=3,v[30]=1,v[40]=1

  int x=1;
  for(int i=2;i<=mx;i++)
  {
    ans[i]=0;
    for(int j=i;j<=mx;j+=i)
    {
      ans[i]+=cnt[j];
      if(ans[i]>i)
      {
        x=i;
      }
    }
  }
  //finally it prints the max gcd
  cout<<x<<endl;

}
-----------------------------------------------------------------
----------------------------------------------------------------
//NUMBER OF DIVISORS FOR ANY GIVEN NUMBER
  
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    
    // Loop up to sqrt(n)
    for(int i = 1; i*i <= n; i++) {
        if(n % i == 0) {
            // If i divides n, increment count
            if(n / i == i) {
                cnt++;
            } else {
                // Increment count for both i and n/i
                cnt += 2;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

------------------------------------------------------
  -----------------------------------------------------
//PRIME FACTORIZATION
  #include<bits/stdc++.h>
using namespace std;

// PRIME FACTORIZATION 

int main() {
    long long int n;
    cin >> n;
  //USING MAP
    map<long long, long long> mp;
    //CHECKING ALL VALUES THAT ARE DIVISIBLE BY 2
    while (n % 2 == 0) {
        mp[2]++;
        n /= 2;
    }

  //DIVISIBLE BY 3 AND THEIR MULTIPLES 
  //JUST LIKE PRIME VALUES
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            mp[i]++;
            n /= i;
        }
    }
    // if (n > 1) { mp[n]++; }: This condition checks if the remaining n after the loop is greater than 1, 
    //   which means it is a prime number itself. In that case, it increments the count of n in the map mp.
    if (n > 1) {
        mp[n]++;
    }
//CHECKING ALL THE VALUES USING AUTO
    for (auto it : mp) {
        cout << it.first << "^" << it.second << endl;
    }

    return 0;
}

-----------------------------------------------------------------------
-----------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

//NUMBER OF DIVISOR(NOD) FROM PRIME FACTORIZATION
//NOD FORMULA: FIND THE PRIME FACTORIZATION AND THEN
//ADD 1 WITH THE POWER OF PRIME FACTORIZATION
int main() {
    long long int n,cnt=0;
    cin >> n;
    map<long long, long long> mp;
    
    while (n % 2 == 0) {
        mp[2]++;
        n /= 2;
    }
    
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            mp[i]++;
            n /= i;
        }
    }

    if (n > 1) {
        mp[n]++;
    }

    for (auto it : mp) {
      cnt*=it.second+1;
        cout << it.first << "^" << it.second+1 << endl;
    }

    return 0;
}
 
--------------------------------------------------------
  ------------------------------------------------------
  //NUMBER OF ODD DIVISORS
  #include<bits/stdc++.h>
using namespace std;

//NUMBER OF ODD DIVISOR(NOD) FROM PRIME FACTORIZATION

int main() {
    long long int n;
    cin >> n;
    int cnt=1;
    map<long long, long long> mp;
    
    while (n % 2 == 0) {
        mp[2]++;
        n /= 2;
    }
    
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            mp[i]++;
            n /= i;
        }
    }

    if (n > 1) {
        mp[n]++;
    }
    
    for (auto it : mp) {
        if(it.first%2!=0)
        {
            //adding add to get the number of divisors
            cnt*=it.second+1;
        cout << it.first << "^" << it.second+1 << endl;
        }
    }
  cout<<cnt<<endl;
    return 0;
}
 
