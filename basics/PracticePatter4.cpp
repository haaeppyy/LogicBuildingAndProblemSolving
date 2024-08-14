#include<iostream>
using namespace std;

// {
//     int n,t=0;
//     cout << " enter number of rows";
//     cin>> n;
//     for( int row=0 ; row < n; row ++)
//     {   
//         t=row+1;
//         for(int intitalstar=0; intitalstar<2*(n-1)-row; intitalstar++)
//         {
//             cout << "*";
//         }
//         for(int num=0 ; num < (2*row)+1 ; num++)
//         {
//             if( num%2==0)
//             {
//                 cout <<t;
//             }
//             else
//             {
//                 cout << "*";
//             }
//         }
        
//         for(int finalstar=0;finalstar<2*(n-1)-row ;finalstar++ )
//             {
//                 cout<< "*";
//             }
//             cout << "\n";
        
//     }



//  return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of elements in each row: ";
    cin >> cols;

    for (int i = 0; i < rows; i++) {
        int start_num_index = 8 - i;
        int num = i + 1;
        int count_num = num;

        for (int col = 0; col < cols; col++) {
            if (col == start_num_index && count_num > 0) {
                cout << num;
                count_num--;
                start_num_index += 2;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
