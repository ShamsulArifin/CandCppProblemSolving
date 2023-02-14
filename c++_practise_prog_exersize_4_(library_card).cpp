#include <iostream>
#include <cstring>
using namespace std;

class card {
  char title[80];
  char author[40];
  int number;
public:
  void store(char *t, char *name, int num);
  void show();
};

void card::store(char *t, char *name, int num)
{
 strcpy(title, t);
 strcpy(author, name);
}

void card::show()
{
 cout << "Title: " << title << "\n";
 cout << "Author: " << author << "\n";
 cout << "Number on Hand: " << number << "\n";
}

int main()
{
 card book1, book2, book3;

 book1.store("Dune", "Frank Herbert", 2);
 book2.store("The Foundation Trilogy", "Issac Asimov", 2);
 book3.store("The Rainbow", "D. H. Lawrence", 1);

 book1.show();
 book2.show();
 book3.show();

 return 0;
}
