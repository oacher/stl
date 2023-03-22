#include <iostream>
#include <stack>

int main() {
    std::string s;
    std::cin >> s;

    std::stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (st.empty()) {
                std::cout << "no" << std::endl;
                return 0;
            }
            char last = st.top();
            st.pop();
            if ((c == ')' && last != '(') ||
                (c == ']' && last != '[') ||
                (c == '}' && last != '{')) {
                std::cout << "no" << std::endl;
                return 0;
            }
        }
    }

    if (st.empty()) {
        std::cout << "yes" << std::endl;
    }
    else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
