#include <bits/stdc++.h>
using namespace std;

//Euclidian Algorithm for finding GCD
/*int Euclidian(int a, int b)
{
  if(b==0) return a;
  else return Euclidian(b,a%b);
}*/

//Printing prime factors most efficiently  O(root n)
/*void prime_factors(int n)
{
  if(n<=1) return ;
  while (n%2==0){cout<<2<<" "; n=n/2;}
  while (n%3==0){cout<<3<<" "; n=n/3;}
  for(int i=5;i*i<=n;i=i+6)
  {
    while(n%i==0){cout<<i<<" ";n=n/i;}
    while(n%(i+2)==0){cout<<i+2<<" ";n=n/(i+2);}
  }
  if(n>1) cout<<n<<endl;
}*/


//sieve of Eratosthencs
/*void SOE(int n)
{
  vector<bool> isPrime(n+1,true);
  for(int i=2;i<=n;i++)
  {
    if(isPrime[i]==true)
    {
      cout<<i<<" ";
      for(int j=i*i;j<=n;j=j+i) isPrime[j]=false;
    }
  }
}*/

//Power Calculation in log n time
/*int power(int x,int n)
{
  if(n==0) return 1;
  int temp=power(x,n/2);
  temp=temp*temp;
  if(n%2==0) return temp;
  else return temp*x;
}*/

// Generating all subsets
void printing_all_subsets(string s)
{
  int n=s.length();
  int size=pow(2,n);
  for(int i=0;i<size;i++)
  {
    for(int j=0;j<n;j++)
    {
      if((i & (1<<j)) !=0) cout<<s[j];
    }
    cout<<endl;
  }
}

int main()
{
  printing_all_subsets("Sai");
}