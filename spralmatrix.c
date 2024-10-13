#include<stdio.h>
void spiralMatrix(int arr[3][3],int m,int n)
{
  int rowBegin=0,colBegin=0;
  int rowEnd=m,colEnd=n;
  while(rowBegin<=rowEnd &&colBegin<=colEnd)
  {
    //traverse right
    for(int j=colBegin;j<=colEnd;j++)
    {
      printf("%d  ",arr[rowBegin][j]);
    }
    rowBegin++;
    //traverse down
    for(int j=rowBegin;j<=rowEnd;j++)
    {
      printf("%d  ",arr[j][colEnd]);
    }
    colEnd--;
    //traverse left
    if(rowBegin<=rowEnd)
    {
      for(int j=colEnd;j>=colBegin;j--)
      {
        printf("%d  ",arr[rowEnd][j]);
      }
      rowEnd--;
    }
    //traverse up
    if(colBegin<=colEnd)
    {
      for(int j=rowEnd;j>=rowBegin;j--)
      {
        printf("%d  ",arr[j][colBegin]);
      }
      colBegin++;
    }
  }
}
int main()
{
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
  spiralMatrix(arr,2,2);
  return 0;
}