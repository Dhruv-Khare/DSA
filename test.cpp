#include<iostream>
using namespace std;
void square(int arr[], int i)
{
  if (i < 10) {
    arr[i] = arr[i] * 2;
    square(arr, i + 1);
  }
}
int main()
  {
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   square(arr,0);
   
  }