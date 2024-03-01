#include <iostream>
using namespace std;
int main(){
    int n ;
    cout << "enter the number of rows : " << endl ;
    cin >> n ;
    //for the number of rows 
    for(int i = 1 ; i <= n ; i++){
        // for each row 
        for (int j = 1; j <= n - i + 1 ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}