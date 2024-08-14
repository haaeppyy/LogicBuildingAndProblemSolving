#include<iostream>
using namespace std;
int sumbinary(int n1,n2)
{   
    int N=n1,M=n2,lastdigit1,lastdigit2,len1=0,len2=0,sum=0;
    int actualSum=0,carry=0;
    cout << "calculations under processed" << endl;
    while(N>0)
    {
        len1++;
        N=N/10;
    }
       while(M>0)
    {
        len2++;
        M=M/10;
    }
    
    N=n;//again assigning values;
    M=n2;
    if(len1==len2)
    {
        while(N>0)
        {
            lastdigit1=N%2;
            lastdigit2=M%2;
            sum=lastdigit1+lastdigit2+ carry;
            carry=0;
            N=N/10;
            M=M/10;
            if(sum==2)
            {
                carry=1;
                sum=0;
            }
            actualSum=actualSum*10+sum;
            sum=0;
            

        }
        return actualSum;
    }
    
    // else condition : zero lagan hota hai staring se or ending se , read and learn about it then code;
    


}



int main()
{
    int binary1,binary2;
    cout << "enter two binary numbers\n"<< "first : "<< endl;
    cin>> binary1;
    cout<< "second : ";
    cin>> binary2;
    cout << "the BinarySum_is:" <<  sumbinary(binary1,binary2) << endl;
    return 0;
}




