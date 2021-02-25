#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
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
  return 0;
}
  
