#include <iostream>
using namespace std;
int main(){
    int n ;
    cout << "enter the number of rows : " << endl;
    cin >> n ;
    int m = n /2 ;
    //for first half 
    for (int i = 1; i <= m + 1 ; i++)
    {
        //for spaces
        for (int spaces = 1; spaces <= m - i + 1 ; spaces++)
        {
            cout << " ";
        }

        if (i % 2 == 0 )
        {
            //for even row 
            for (int j = 1; j <= i ; j++)
            {
                if (j % 2 == 0 )
                {
                    cout << " ";
                }else{
                    cout << "*";
                }
            }
        }else{
            //for odd rows 
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 == 0)
                {
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
        }
        cout << endl ;
    }
    //for the other half 

    
    // for (int i = 1; i <= m ; i++)
    // {
    //     //for spaces
    //     for (int spaces = 1; spaces <= i; spaces++)
    //     {
    //         cout << " ";
    //     }

    //     if (i % 2 == 0)
    //     {
    //         for (int j = 1; j <= m - i + 1 ; j++)
    //         {
    //             if (j % 2 == 0 )
    //             {
    //                 /* code */
    //             }
                
    //         }
            
    //     }
        
    // }
    

    return 0;
}