#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    stack<int> st;
    queue<int> q;

    st.push(1);
    st.push(2);
    st.push(3);

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Stack top: " << st.top() << endl;
    cout << "Queue front: " << q.front() << endl;

    st.pop();
    q.pop();

    cout << "Stack top after pop: " << st.top() << endl;
    cout << "Queue front after pop: " << q.front() << endl;

    return 0;
}
