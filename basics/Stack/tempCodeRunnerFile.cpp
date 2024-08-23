#include <iostream>
using namespace std;

void enqueue(int Q[], int *f, int *r, int v, int n)
{
    if (*r == n - 1)
    {
        cout << "Queue is full" << endl;
        return;
    }
    else
    {
        (*r)++;
        if (*f == -1)
            *f = 0;
        Q[*r] = v;
    }
}

int display(int Q[], int f, int r)
{
    if (f != -1)
    {
        for (int i = f; i <= r; i++)
        {
            cout << Q[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Empty Queue" << endl;
    }
}

void dequeue(int Q[], int *f, int *r)
{

    if (*f < *r)
    {
        (*f)++;
    }
    else if (*f == *r)
    {
        *f = -1;
        *r = -1;
    }
}

int main()
{
    int n;
    cout << "Enter the size of queue : ";
    cin >> n;
    int Q[n];
    int f = -1, r = -1;
    enqueue(Q, &f, &r, 12, n);
    enqueue(Q, &f, &r, 13, n);
    enqueue(Q, &f, &r, 14, n);
    enqueue(Q, &f, &r, 15, n);
    enqueue(Q, &f, &r, 16, n);
    enqueue(Q, &f, &r, 17, n);
    display(Q, f, r);
    dequeue(Q, &f, &r);
    display(Q, f, r);
}