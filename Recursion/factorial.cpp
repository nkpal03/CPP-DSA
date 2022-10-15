#include<iostream>
using namespace std;

int factorial(int n)
{
  if (n>1)
  {
    return n*factorial(n-1);
  }
  else {
    return 1;
  }
}

int main ()
{
  int number,ans;
  cout<<"enter number";
  cin>>number;
  ans=factorial(number);
  cout<<"factorial of "<<number <<" is "<<ans;
  return 0;
}
  
