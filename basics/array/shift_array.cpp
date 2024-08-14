#include<iostream>
using namespace std;
void shifty(int arr[], int arrSize , int shift)
{
  int newshift=shift % arrSize;
  int temp[10],index=0;
  for(int i=arrSize-shift; i< arrSize ;i++)
  {
    temp[index++]=arr[i];
  }
  for(int i=arrSize-1; i>=0 ;i--)
  {
    arr[i]=arr[i-newshift];
  }
  for(int i=0 ; i< newshift ;i++)
  {
    arr[i]=temp[i];
  }
  return;
}

int main()
{
  int ar[100],size,shift;
  cout << " enter number of size";
  cin >> size;
  cout << " now enter array" << endl;
  int i=0; 
  while(i<size){
    cin>> ar[i++];
  }
  cout << " enter number of shift"<< endl;
  cin >> shift;
  shifty(ar, size , shift);
  i=0;
  while(i<size)
  {
    cout << ar[i++] << " "; 
  }
  return 0;

}