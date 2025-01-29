#include<bits/stdc++.h>
using namespace std;
int nearest_prime(int ts)
{
  int i=0,j=0;
  int flag=0;
  for(i=ts;i>=2;i++)
  {
    for( j=2;j<sqrt(i);j++)
    {
      if(i%j==0)
      {
        break;
      }

    }
    if(j>sqrt(i))
    return i;
  }
  if(flag==0)
  {
    return 0;
  }
  else{
    return 1;
  }

}
int divisionHash(int key,int ts)
{
  int np=nearest_prime(ts);
  int l=key%np;
  return l;

}
int main()
{
  cout<<divisionHash(12,100)<<endl;
  cout<<divisionHash(2738,100)<<endl;
  cout<<divisionHash(6979,100)<<endl;


}