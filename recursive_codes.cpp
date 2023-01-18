#include <bits/stdc++.h>
using namespace std;

//Rope cutting problem
/*int maxpieces(int n,int a, int b, int c)
{
  if(n==0) return 0;
  if(n<0) return -1;
  int res= max(maxpieces(n-a,a,b,c),max(maxpieces(n-b,a,b,c),maxpieces(n-c,a,b,c)));
  if(res==-1) return -1;
  return res+1;
}*/

///generating all subsets of a string
/*void subsets(string s,string curr,int i)
{
  if(i==s.length()) {
    cout<<curr<<endl;
    return;
  }
  subsets(s,curr,i+1);
  subsets(s,curr+s[i],i+1);
}
*/

//Tower of hanoi
void TOH(int n,char A,char B, char C)
{
  if(n==1) 
  {
    cout<<"move 1 from "<<A<<" to "<<C<<endl;
    return;
  }
  TOH(n-1,A,C,B);
  cout<<"move "<<n<<" from "<<A<<" to "<<C<<endl;
  TOH(n-1,B,A,C);
}

//Josephus Problem
int jose(int n,int k)
{
  if(n==1) return 0;
  return (jose(n-1,k)+k)%n;
}

// Subset sum problem
int count_subsets(int arr[],int sum, int n )
{
  if(n==0) return (sum==0) ? 1:0;
  return count_subsets(arr,sum-arr[n-1],n-1)+count_subsets(arr,sum,n-1);
}

//Printing all permutation of a string
void permute(string s,int i)
{
  if(i==s.length()-1) {cout<<s<<" ";return;}
  for(int j=i;j<s.length();j++)
  {
    swap(s[i],s[j]);
    permute(s,i+1);
    swap(s[j],s[i]);
  }
}
int main()
{
  permute("ABCD",0);
}