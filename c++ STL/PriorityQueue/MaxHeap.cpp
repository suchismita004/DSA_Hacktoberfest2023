/*
        MinHeap= largest first - rest elements in decreasing order
        MaxHeap= smallest first - rest elements in increasing order
*/
//********************************** MAX HEAP *************************************
#include<bits/stdc++.h>
using namespace std;
void printpriorityqueue(priority_queue<int> pq)
{
    priority_queue<int> pq2=pq;
    while(!pq.empty())
    {
        cout<<pq.top()<<"\n";
        pq.pop();
    }
}
int main()
{
    priority_queue<int> pq;
    for(int i=1;i<=5;i++)
    pq.push(i);
    
    cout<<"The elements of the priority queue are:"<<endl;
    printpriorityqueue(pq);
    
    cout<<"The size of the priority queue: "<<pq.size()<<endl;
    cout<<"The top element of the priority queue: "<<pq.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    pq.pop();
    printpriorityqueue(pq);
}
/*
Output:

The elements of the priority queue are:
5
4
3
2
1
The size of the priority queue: 5
The top element of the priority queue: 5
Pop the top element:
4
3
2
1
*/