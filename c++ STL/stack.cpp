/*
all the deletion and insertion in a stack 
are done from the "top" of the stack
    insertion/deletion from one end = top
        (LIFO=Last In First Out)
*/
#include<bits/stdc++.h>
using namespace std;
void printstack(stack<int> s1)
{
    stack<int> s2=s1;
    while(!s2.empty())
    {
        cout<<s2.top()<<"\n";
        s2.pop();
    }
}
int main()
{
    stack<int> s;
    for(int i=1;i<=5;i++)
    s.push(i);
    
    cout<<"The elements of the stack are:"<<endl;
    printstack(s);
    
    cout<<"The size of the stack: "<<s.size()<<endl;
    cout<<"The top element of the queue: "<<s.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    s.pop();
    printstack(s);
}

/*
Output:

The elements of the stack are:
5
4
3
2
1
The size of the stack: 5
The top element of the queue: 5
Pop the top element:
4
3
2
1
*/