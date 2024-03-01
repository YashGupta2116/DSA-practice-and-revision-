#include <iostream>
using namespace std;
int main(){
    int n ;
    cout << "enter the total rows : " << endl ;
    cin >> n ;
    int m = n /2 ;
    // for the m + 1 rows (upper half of the pattern ) 
    for (int i = 1; i <= m + 1; i++)
    {
        if (i % 2 == 0 )
        {
            //for spaces and stars in even row
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 == 0)
                {
                    cout << "*";
                }else{
                    cout << " ";
                }
            } 
        }else{
            //for spaces and star in odd row
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 == 0)
                {
                    cout << " ";
                }else{
                    cout << "*";
                }
            }
        }
        cout << endl ;
    }
    for (int i = 1; i <= m ; i++)
    {
        if (i % 2 == 0 )
        {
            for (int j = 1; j <= m - i + 1 ; j++)
            {
                if (j % 2 == 0 )
                {
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
        }else{
            for (int j = 1; j <= m - i + 1; j++)
            {
                if (j % 2 == 0 )
                {
                    cout << " ";
                }else{
                    cout << "*";
                }
            }
        }
        cout << endl ;
    }
    return 0;
}