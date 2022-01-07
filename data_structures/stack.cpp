#include <bits/stdc++.h>

using namespace std;

class Stack {
private:
    vector<int> stack;

public: 
    Stack() { }

    bool isEmpty() {
        if (stack.size() == 0) {
            return true;
        }

        return false;
    }

    int size() {
        return stack.size();
    }

    int top() {
        return stack.back();
    }

    void push(int i) {
        stack.push_back(i);
    }

    void pop() {
        stack.pop_back();
    }
}
