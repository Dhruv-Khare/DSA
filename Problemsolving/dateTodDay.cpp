#include <iostream>
using namespace std;
int main()
{
  int d, m, y;
  int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};
  cout << "enter the date:";
  cin >> d;
  cout << "enter the month:";
  cin >> m;
  cout << "enter the year:";
  cin >> y;
  int days = 0;
  int ty = y - 1;
  int l = ty / 4 - ty / 100 + ty / 400;
  days = (y - 1) * 365 + l;
  for (int i = 1; i < m; i++)
  {
    days += months[i];
  }
  if (m > 2)
  {
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
      days += 1;
    }
  }
  days += d;
  int x = days % 7;
  switch (x)
  {
  case 0:
    cout << "sunday";
    break;
  case 1:
    cout << "monday";
    break;
  case 2:
    cout << "tuesday";
    break;
  case 3:
    cout << "wednesday";
    break;
  case 4:
    cout << "thursday";
    break;
  case 5:
    cout << "friday";
    break;
  case 6:
    cout << "SaturDay";
    break;

  default:
    break;
  }
}
