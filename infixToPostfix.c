#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

struct Stack {
    char items[MAX_SIZE];
    int top;
};

void push(struct Stack* s, char value) {
    s->items[++s->top] = value;
}

char pop(struct Stack* s) {
    if (s->top == -1) {
        return '\0'; // Stack underflow
    }
    return s->items[s->top--];
}

int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

int precedence(char op) {
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return -1; // For '('
}

char* infixToPostfix(char* infix) {
    struct Stack s;
    s.top = -1;
    int i = 0, j = 0;
    char ch, popped;
    static char postfix[MAX_SIZE];

    while ((ch = infix[i++]) != '\0') {
        if (isalnum(ch)) {
            postfix[j++] = ch;
        } else if (ch == '(') {
            push(&s, ch);
        } else if (ch == ')') {
            while ((popped = pop(&s)) != '(') {
                postfix[j++] = popped;
            }
        } else if (isOperator(ch)) {
            while (s.top != -1 && precedence(ch) <= precedence(s.items[s.top])) {
                postfix[j++] = pop(&s);
            }
            push(&s, ch);
        }
    }

    while (s.top != -1) {
        postfix[j++] = pop(&s);
    }
    postfix[j] = '\0';

    return postfix;
}

int main() {
    char infix[] = "3+4*2/(1-5)^2";
    char* postfix = infixToPostfix(infix);
    printf("Infix Expression: %s\n", infix);
    printf("Postfix Expression: %s\n", postfix);
    return 0;
}
