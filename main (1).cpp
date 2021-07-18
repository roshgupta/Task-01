#include<iostream>
using namespace std;
bool isPrime (int n)
{
  bool notPrime = false;
  for (int i = 2; i < n; i++)
    {
      if (n % i == 0)
	{
	  notPrime = true;
	  break;
	}
    }
  return !(notPrime);
}

int main ()
{
  int numb;
  bool printed= false;
  cout << "Enter a number";
  cin >> numb;
  for (int i = 2; i <= (numb / 2); i++)
    {
      bool first, second;
      first = isPrime (i);
      second = isPrime (numb - i);
      if (first && second){
	     cout << numb << " = " << i << " + " << (numb - i) << endl;
	     printed = true;
	
	    
	    }
      if (!(printed))
	{
	  cout << "No such pair exists" << endl;
	}
}
