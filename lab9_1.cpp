#include <iostream>
#include <string>
using namespace std;

int main()
{
  char rank;
  int i = 0;
  string text[5] = {"You have received Super Ultra Rare Unit!!!\n", "You have received 5 gems.\n", "You have received 1 gems.\n", "You have received 2000 coins.\n", "You have received very KAK items.\n"};
  cout << "Input your rank: ";
  cin >> rank;
  if (rank == 'S')
  {
    while(i < 5)
    {
      cout << text[i];
      i++;
    }
  }
  else if (rank == 'A')
  {
    while(i < 4)
    {
      cout << text[i+1];
      i++;
    }
  }
  else if (rank == 'B')
  {
    while(i < 3)
    {
      cout << text[i+2];
      i++;
    }
  }
  else if (rank == 'C')
  {
    while(i < 2)
    {
      cout << text[i+3];
      i++;
    }
  }
  else if (rank == 'D')
  {
    while(i < 1)
    {
      cout << text[i+4];
      i++;
    }
  }
  return 0;
}
