#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct student{
   string name;
   int roll;
   vector<int> marks;
};
struct student s;
int main()
{
   cin>>s.name;
   cin>>s.roll;
   int i=0;
   while(i<5)
   {
      cin>>s.marks[i];
   }
   sort(s.marks.begin(),s.marks.end());
   int j=0;
   int c=0;
   while(j<5)
   {
    if(s.marks[j]>=95)
    {
      c++;
    }
   }
   if(c>4)
   {
    cout<<"yes"<<'\n';
   }
   else
   cout<<"no"<<'\n';

  
}