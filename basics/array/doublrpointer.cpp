#include<iostream>
using namespace std;
void printExtreme(int arr[],int size)
{
    for ( int i=0,j=size-1;i<=j;i++,j--)
    {
        cout << arr[i] <<" ";
        if(j>i)
        {
            cout << arr[j] << " ";
        }
    }
    return;
}
int main()
{
    int array[30], size;
    cout <<" enter size : "<<endl;
    cin >> size ;
    for(int i=0;i<size ;i++)
    {
        cout << "enter array element "i ":"<< endl;
        cin >> array[i];
    }
    printExtreme(array,size);
    return 0;
}