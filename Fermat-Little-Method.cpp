#include<bits/stdc++.h>
using namespace std;

int power(int n,int k,int mod)
{
  if(k==0)
    return 1;
  int temp=power(n,k/2,mod);
  if(k%2==0)
    return (temp*temp)%mod;
  else
    return (n*temp*temp)%mod;
}

bool isPrime(int n)
{
  int k=20;
  if(n==1||n==4)
    return false;
  if(n<=3)
    return true;
  while(k--)
  {
    int y = 2 + rand()%(n-4); 
    if(power(y,n-1,n)!=1)
      return false;
  }
  return true;
}


int main()
{
  int n;
  cin>>n;
  if(isPrime(n))
    cout<<"It is a Prime Number."<<endl;
  else
    cout<<"It is not a Prime Number."<<endl;
}
