/*
        MinHeap= largest first - rest elements in decreasing order
        MaxHeap= smallest first - rest elements in increasing order
*/
//********************************** MIN HEAP *************************************
#include<bits/stdc++.h>
using namespace std;
void printpriorityqueue(priority_queue<int,vector<int>,greater<int>> pq)
{
    priority_queue<int,vector<int>,greater<int>> pq2=pq;
    while(!pq.empty())
    {
        cout<<pq.top()<<"\n";
        pq.pop();
    }
}
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
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
1
2
3
4
5
The size of the priority queue: 5
The top element of the priority queue: 1
Pop the top element:
2
3
4
5
*/