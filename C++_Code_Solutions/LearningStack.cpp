#include <iostream>
#include <stack>

using namespace std;
stack<int> st;


void display(stack<int> ab)
{
    while(!ab.empty())
    {
        cout<<ab.top();
        ab.pop();
    }
}

 int main(int argc, char const *argv[]) {


     st.push(1);
     st.push(2);
     st.push(3);
     st.push(4);
     st.push(5);
     st.push(6);
     st.push(7);

     display(st);
     cout<<endl;
    st.pop();
     display(st);

     return 0;
}
