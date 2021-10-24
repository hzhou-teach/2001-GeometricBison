//Easy 10/10 Less than 30min

#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream fin("word.in");
  ofstream fout("word.out");

  int n, c;
  int counter = 0;
  string s;

  fin >> n >> c;

  for(int i = 0; i < n; i++)
    {
    fin >> s;

    if (s.length() + counter <= c)
        {

            if (counter == 0)
            {
                fout << s;

            }

            else
            {
                fout << " " << s;

            }
            counter += s.length();
        }

    else if (s.length() + counter > c)
        {
            fout << "\n" << s;
            counter = s.length();
        }
    }

}
