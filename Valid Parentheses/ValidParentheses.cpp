/**
 * Valid Parentheses
 */
bool isValid(string s) {
    if (s.empty()) {
        return true;
    }

    bool match = true;
    stack<char> par;
    par.push('0');
    for (int i = 0; i < s.length(); i++) {
        if (par.top() == '(' && s[i] == ')') {
            par.pop();
        } else if (par.top() == '[' && s[i] == ']') {
            par.pop();
        } else if (par.top() == '{' && s[i] == '}') {
            par.pop();
        } else if (s[i] == '(' || s[i] == ')' ||
            s[i] == '[' || s[i] == ']' ||
            s[i] == '{' || s[i] == '}') {
            par.push(s[i]);
        }
    }

    if (!(par.top() == '0')) {
        match = false;
    }
    return match;
}


