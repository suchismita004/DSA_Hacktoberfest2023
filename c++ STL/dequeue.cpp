/*
 type of queue data structure
  in which the insertion and deletion of elements 
  can be either in front or rear. 

         push_back() = insert     //last element
         push_front() = insert     //first element
         pop_front() = delete
         pop_back()=delete
 */
#include<bits/stdc++.h>
using namespace std;
void printdeque(deque<int> dq)
{
    deque<int>::iterator it;         //important**
    for(it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_front(50);
    
    cout<<"The elements in the deque are: ";
    printdeque(dq);
    
    cout<<"The size of the deque is: "<<dq.size()<<endl;
    cout<<"The first element in the deque: "<<dq.front()<<endl;
    cout<<"Deleting the first element"<<endl;
    dq.pop_front();
    printdeque(dq);
    cout<<"The last element of the deque: "<<dq.back()<<endl;
    cout<<"Deleting the last element"<<endl;
    dq.pop_back();
    printdeque(dq);
    
}
/*
Output:

The elements in the deque are: 50 40 30 10 20
The size of the deque is: 5
The first element in the deque: 50
Deleting the first element
40 30 10 20
The last element of the deque: 20
Deleting the last element
40 30 10
*/