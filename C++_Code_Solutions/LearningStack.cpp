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
     cout<<endl<< "Size before::" <<st.size();
     cout<<endl;
    st.pop();
     display(st);
    cout<<endl<< "Size after pop::" <<st.size();
     return 0;
     
}
