#include<iostream>
using namespace std;
void shifty(int arr[], int arrSize , int shift)
{
  int newshift=shift % arrSize; //if(shift>sizeofarray) toh ghuma phira ke mod hehorhahai
  //for ex. size =6 , agar shift by 6 krdo each element , wapis wohe array aajarhi hai
  //ie shift =0 horha hai ->6%6 horha hai;
  int temp[10],index=0;
  for(int i=arrSize-shift; i< arrSize ;i++)
  { //jitna newshift hai , utne element ssamne aajate hai(by observation)
  // toh hamne phle he unko temp me leliya and rest ko shift krdiya;
    temp[index++]=arr[i];
  }
  for(int i=arrSize-1; i-newshift>=0 ;i--)
  { // shifting rest elements by newshift;
    arr[i]=arr[i-newshift];
  }
  for(int i=0 ; i< newshift ;i++)
  { //adding back the temped stored variables ;
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