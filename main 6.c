#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    char stack[1000];
    int top = -1;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        } else {
            if (top == -1) return false;
            if ((s[i] == ')' && stack[top] != '(') || 
                (s[i] == '}' && stack[top] != '{') || 
                (s[i] == ']' && stack[top] != '[')) {
                return false;
            }
            top--;
        }
    }
    return top == -1;
}

int main() {
    // Test cases
    printf("%s\n", isValid("()") ? "true" : "false"); // true
    printf("%s\n", isValid("()[]{}") ? "true" : "false"); // true
    printf("%s\n", isValid("(]") ? "true" : "false"); // false
    printf("%s\n", isValid("{[]}") ? "true" : "false"); // true
    return 0;
}
