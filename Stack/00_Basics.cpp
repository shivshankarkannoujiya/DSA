// Using STL
#include <iostream>
using namespace std;
#include <stack>

int main()
{

    // creation
    stack<int> st;

    // insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // size
    cout << "Size of stack is : " << st.size() << endl;

    // remove
    st.pop();

    // check empty
    if (st.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
}