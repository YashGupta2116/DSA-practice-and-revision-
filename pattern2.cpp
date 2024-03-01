#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number of rows : "<< endl ;
    cin >> n ;
    for (int i = 1; i <= n; i++)
    {
        //for the nuumber of spaces in each row 
        for (int space = 1; space <= i - 1 ; space++)
        {
            cout << " ";
        }
        //for the no. of stars in each row 
        for (int j = 1; j <= n - i + 1 ; j++)
        {
            cout << "*";
        }
        cout << endl ;
    }
    return 0;
}