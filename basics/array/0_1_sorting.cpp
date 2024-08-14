#include<iostream>
using namespace std;
// void sortoneandzeros(int arr[],int n)
// {
//   for(int i=0,j=n-1 ; i<j ; i++,j--)
//   {
//     if(arr[i]>arr[j])
//     {                                 GALAT LOGIC HAI ESMEIN;
//       int temp=arr[j];
//       arr[j]=arr[i];
//       arr[i]=temp;
//     }
//     else {
//       arr[i]=0;
//       arr[j]=1;
//     }

//   }
// }

// void cout_insert_onesandzeros(int arr[],int n)
// {
//   int zerocount=0,onecount=0;
//   for(int i=0;i < n ;i++)
//   {
//     if(arr[i]==1)
//     {
//       onecount++;
//     }
//     if(arr[i]==0)
//     {
//       zerocount++;              YEH THEEK HAI BUT ITS LONG;
//     }
//   }
//   for(int i=0;i<zerocount ;i++)
//   {
//     arr[i]=0;
//   }
//   for(int i=zerocount;i<n;i++)
//   {
//     arr[i]=1;
//   }
// }

void helpedAIout_tosort(int arr[],int n)
{
  int left=0, right = n-1;
 while (left < right) {
        // Move the left pointer to the right until it finds a 1
        while (arr[left] == 0 && left < right) {
            left++;
        }
        // Move the right pointer to the left until it finds a 0
        while (arr[right] == 1 && left < right) {
            right--;
        }
        // Swap arr[left] and arr[right] if left is still less than right
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
     //agar for loop nahi lagta toh esme if(left < right aata AND SAARE IF ME bhi && krke 
    // ADDITION AL CONDITION AAJATI)
        }
    }
  {
   
   

  }
}

int main()
{
  int array[8],size;
  cout << "enter size of array";
  cin>> size;
  for(int i=0 ; i < size ;i++)
  {
  
    cin >> array[i];
  }
  // sortoneandzeros(array,size);
  helpedAIout_tosort(array,size);
  // cout_insert_onesandzeros(array,size);
   for(int i=0 ; i < size ;i++)
  {
    cout << array[i] <<" ";
 
  }
  return 0;

}