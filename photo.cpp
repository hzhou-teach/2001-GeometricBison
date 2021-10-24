#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream fin("photo.in");
  ofstream fout("photo.out");

  int n;
  fin >> n;
  int arr_b[n-1];


    for(int i=0; i<n-1; i++)
    {
        int b;
        fin >> b;
        arr_b[i] = b;
    }

    for(int i=1; i<=n; i++)
    {
        int flag = 1;
        int arr_a[n];
        arr_a[0] = i;


        for(int j=0; j<n-1; j++)
        {
            arr_a[j+1] = arr_b[j] - arr_a[j];
            if (arr_a[j+1] <= 0)
            {
                break;
            }
        }

        //DUPLICATE CHECK
        for(int j=0; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(arr_a[j] == arr_a[k])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 1)
        {
            for(int k=0; k<n; k++)
            {
                fout << arr_a[k];
                if(k < n-1)
                {
                    fout << " ";
                }
            }
            break;
        }
    }


return 0;


}
