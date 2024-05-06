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
--------------------------------------------------------
  ----------------------------------------------------
  //GIVEN VALUES AND TARGET SUM 
  //FIND HOW MANY WAYS YOU CAN MAKE TARGET SUM USING THOSE VALUES
  #include<bits/stdc++.h>
using namespace std;
///TARGET SUM.
//GIVEN SOME NUMBERS AND WE NEED TO FIND 
//A GIVEN TARGET SUM HOW MANY WAY WE CAN 
//MAKE THAT TARGET SUM USING THOSE NUMBERS
int main() {
    int n, tar, x;
    cin >> n >> tar; // Corrected variable name from a to n

    vector<int> v;
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    // Iterating through all possible subsets using bitmasking
    for(int i = 0; i < (1 << v.size()); i++) {
        int sum = 0;
        for(int j = 0; j < v.size(); j++) {
            if(i & (1 << j)) {
                sum += v[j];
                //do calculate with bitwise suppose the number i=3 the bit is 0011
                //and if jth value is j=1 0001 and j=2 ,0010 then multiplying them would be 
                //1 in both 0011*0001 ,0011*0010 will give 1 as value 
                //so we will get summ of two values like 4+5=9
            }
        }
        // Outputting subset elements and their sum
        for(int k = 0; k < v.size(); k++) {
            if(i & (1 << k)) {
                cout << v[k] << " ";
            }
        }
        cout << "sum " << sum << endl; // Outputting sum
    }

    return 0;
}
-------------------------------------------------------------------
  --------------------------------------------------------------------
  //The code is to calculate the sum of integers from 1 up to a very large number (10^15)
  //that are divisible by any combination of numbers in a given vector.
  #include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,a,b,tar,x;
  cin>>n>>tar;
  vector<int>vex;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    vex.push_back(a);
  }
    int siz=vex.size();
    int subsize=pow(2,siz);
    int ans=0;
    for(int i=0;i<subsize;i++)
    {
        bitset<3>b=i;
        int product=1,cnt=0,div=0;
       for(int j=0;j<siz;j++)
       {
         int f= i & (1<<j);
         if(f)
         {
            cnt++;
            product*=vex[j];
         }
       }
       if(cnt==0) continue;
       div=tar/product;
       if(cnt%2==1) ans+=div;
       else ans-=div;
       cout<<b<<" "<<product<<" "<<div<<" "<<ans<<endl;
    }
    cout<<"Main Answer "<<ans<<endl;
}
  

---------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------
/* 
  SubString of a string.
  Given two string s,s1. Need to find out if the s1 is substring of s.

  
A substring is a contiguous sequence of characters within a string. In simpler terms, if you have a string, 
a substring is any sequence of characters that you can create by selecting a part of the original string without skipping any characters.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, s1;
    cin >> s >> s1;

    bool found = false;
    for (int i = 0; i <= s.length() - s1.length(); i++) {
        bool match = true;
        for (int j = 0; j < s1.length(); j++) {
            if (s[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
---------------------------------------------------------------
---------------------------------------------------------------
  /* 
   GIVEN TWO STRING S AND S1 AND WE NEED TO FIND IF S1 IS SUBSEQUENCE OF S.
A subsequence is a sequence that can be derived from another sequence by deleting some or
no elements without changing the order of the remaining elements.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, s1;
    cin >> s >> s1;
    long long pos=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s1[pos]) pos++;
    }
    if(pos==s1.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------
  /* ALL POSSIBLE PERMUTATION OF A STRING */
  #include <bits/stdc++.h>
using namespace std;
/*ALL DISTINCT VALUE USING STRING VALUE PERMUTATION*/
string s;
void f(int i)
{
    if(i==s.size()-1)
    {
        cout<<s<<endl;
        return ;
    }
    else
    {
        for(int j=i;j<s.length();j++)
        {
            //Swap two characters of a string and create a new permutation of the string
            swap(s[i],s[j]);
            //incremet the value of i by 1 recursively
            f(i+1);
            //it takes back the real position of the string character
            swap(s[i],s[j]);
        }
    }

}

int main() {
   
    cin>>s;
    f(0);
}

-------------------------------------------------------------------
-------------------------------------------------------------------
/* ALL PERMUTATION OF A STRING USING BUILD IN FUNCTION */

  #include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));
}
----------------------------------------------------------------------------
-----------------------------------------------------------------------------
/* FACTORIAL USING RECURSION */
  #include <bits/stdc++.h>
using namespace std;
 
 int fact(int n)
 {
    if(n==0) return 1;
    else{
        return n*fact(n-1);
    }
 }

int main()
{
    int n;
    cin>>n;
   cout<< fact(n)<<endl;

   
}
---------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------
  /* INPUT,OUTPUT USING RECURSION */

  #include <bits/stdc++.h>
using namespace std;
 vector<int>vex;
 int a;
void input(int n)
{
  if(n<0) return;
  input(n-1);
  cin>>a;
  vex.push_back(a);
//   cout<<vex[n];
}

void output(int n)
{
    if(n<0)return;
    output(n-1);
    cout<<vex[n];
}

int main()
{
    int n;
    cin>>n;
    input(n);
    output(n);
   
}
---------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------
  /* SUM OF VECTOR USING RECURSION */
  #include <bits/stdc++.h>
using namespace std;
 vector<int>vex;
 int a;
void input(int n)
{
  if(n<0) return;
  input(n-1);
  cin>>a;

  vex.push_back(a);
 
}

int sum(int n)
{
  if(n<0) return 0;
  return sum(n-1)+vex[n];
}


int main()
{
    int n;
    cin>>n;
    input(n);
   // output(n);
    cout<<sum(n-1)<<endl;
   
}
----------------------------------------------------------------
----------------------------------------------------------------
  /*Palindrome Using Recursion*/
#include <bits/stdc++.h>

using namespace std;
string s;
bool palin(int i,int n)
{
   if(i>=n) return true;
   if(s[i]!=s[n]) return false;
   if(s[i]==s[n]) return palin(i+1,n-1);
}

int main()
{
  cin>>s;
  int i=0;
  int n=s.size();
  if(palin(i,n-1))
  {
    cout<<"It's Palindrome"<<endl;
  }
  else {
    cout<<"NOT a Palindrome"<<endl;
  }
}
----------------------------------------------------------------------
----------------------------------------------------------------------
/* Reverse A string */
  #include <bits/stdc++.h>

using namespace std;
string s;

string rev(int n)
{
   if(n<0) return " ";
  return s[n]+rev(n-1);
}

int main()
{
  cin>>s;
  cout<<rev(s.size()-1);
}
---------------------------------------------------------------------------
--------------------------------------------------------------------------
/* Power or Pow function with less Complexity */
#include <bits/stdc++.h>

using namespace std;

// Recursive function to calculate the power of a number
// Parameters:
//   n: Base of the power
//   k: Exponent of the power
// Returns:
//   The result of n raised to the power of k
int pow(int n, int k) {
    // Base case: if exponent is 0, return 1
    if (k == 0) 
        return 1;
    
    // Recursive calculation of half power
    long long half = pow(n, k / 2);
    
    // If the exponent is odd, multiply half power by itself and the base
    if (k % 2 == 1) 
        return half * half * n;
    
    // If the exponent is even, multiply half power by itself
    return half * half;
}

int main() {
    int n, k;
    // Input base and exponent
    cin >> n >> k;
    // Output the result of n raised to the power of k
    cout << pow(n, k) << endl;
    return 0;
}



//SUM OF ALL DIGIT OF A NUMBER
#include <bits/stdc++.h>
using namespace std;

int digitsum(int digit)
{
    if(digit==0) return 0;
    return digit%10+digitsum(digit/10);
}

int main()
{
    int n;
    cin>>n;
   cout<<digitsum(n);
}

//TOTAL NUMBER OF DIGIT IN A NUMBER
#include <bits/stdc++.h>
using namespace std;

int digitcount(int digit)
{
    if(digit==0) return 0;
    return 1+digitcount(digit/10);
}

int main()
{
    int n;
    cin>>n;
   cout<<digitcount(n);
}
