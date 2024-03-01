#include <iostream>
using namespace std;
int main(){
    int n ;
    cout << "enter the number of rows : " << endl;
    cin >> n ;
    //for the number of roows 
    for (int i = 1; i <= n; i++)
    {
        //for the spaces 
        for (int spaces = 1; spaces <= i - 1; spaces++)
        {
            cout << " ";
        }
        //for the stars 
        for (int j =1; j <= n - i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl ;
    }
    
    return 0;
}