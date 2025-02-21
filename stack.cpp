#include<bits/stdc++.h>
using namespace std;
queue<int> st,temp;
void print()
{

    temp = st;
    while(!temp.empty())
    {
        int front = temp.front();
        cout << front << " ";
        temp.pop();
    }

    cout << endl;
}
int main()
{
    st.push(5);
    print();
    st.push(10);
     print();
    st.push(15);
     print();

     st.pop();
     print();

      st.pop();
     print();

     st.pop();
     print();






} queue
