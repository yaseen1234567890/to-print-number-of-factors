#include <iostream>
using namespace std;
int main()
{
 int num = 12;
 int i;
 int count = 0;

 for(i=1; i<=num; i++)
 {
  if(num % i == 0)
   count++;
 }
 
 if(count > 2)
  cout << num <<" is a composite number";
 else
  cout << num <<" is not a composite number";
 
 return 0;
}

