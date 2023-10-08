/*
the terms FRONT and REAR are used in describing a linear list 
only when it is implemented as a queue.

v.push() insert an element
v.pop()   delete an element
            (FIFO=First In First Out)
*/

#include<bits/stdc++.h>
using namespace std;
void printqueue(queue<int> q1)
{
    queue<int> q2=q1;
    while(!q2.empty())
    {
        cout<<q2.front()<<"\n";
        q2.pop();
    }
}
int main()
{
    queue<int> q;
    for(int i=1;i<=5;i++)
    q.push(i);
    
    cout<<"The elements of the queue are:"<<endl;
    printqueue(q);
    
    cout<<"The size of the queue: "<<q.size()<<endl;
    cout<<"The front element of the queue: "<<q.front()<<endl;
    cout<<"The last element of the queue: "<<q.back()<<endl;
    cout<<"Pop the front element: "<<endl;
    q.pop();
    printqueue(q);
}
/*
Output:

The elements of the queue are:
1
2
3
4
5
The size of the queue: 5
The front element of the queue: 1
The last element of the queue: 5
Pop the front element:
2
3
4
5
*/