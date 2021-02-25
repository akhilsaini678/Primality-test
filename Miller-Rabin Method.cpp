#include<bits/stdc++.h>
using namespace std;

int power(int n,int k,int mod)
{
  if(k==0)
    return 1;
  int temp = power(n, k/2, mod);
  if(k%2==0)
    return temp*temp;
  else
    return n*temp*temp;
}

bool isPrime(int n)
{
  if(n==1||n==4)
    return false;
  if(n<=3)
    return true;
}
int main()
{
  int n;
  cin>>n;
  if(isPrime(n))
    cout<<"It is a prime number."<<endl;
  else
    cout<<"It is not a prime number."<<endl;
  return 0;
}

  
