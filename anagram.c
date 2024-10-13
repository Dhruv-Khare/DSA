#include <stdio.h>
int main()
{
  char str1[] = "alphabet";
  char str2[] = "alpbahte";
  int dat[256] = {0};
  for (int i = 0; str1[i] != '\0'; i++)
  {
    dat[str1[i]]++;
  }
  for (int i = 0; str2[i] != '\0'; i++)
  {
    dat[str2[i]]--;
  }
  for (int i = 0; i < 256; i++)
  {
    if (dat[i] != 0)
    {
      printf("Not Anagram");
    }
  }
  for (int i = 0; i < 256; i++)
  {
    if (dat[i] == 0)
    {
      printf("Anagram");
    }
  }
  return 0;
}