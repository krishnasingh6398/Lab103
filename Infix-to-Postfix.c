#include <stdio.h>
char stack[100];
int top=-1;
void push( char x){
    
    top++;
    stack[top]= x;
}

char pop(){
    return stack[top--];
}

int priority(char x){
    if ( x == '^'){
        return 3;
    }
    else if( x == '*' || x=='/'){
        return 2;
    }
    else if( x=='+' || x=='-'){
        return 1;
    }
    return 0;
}

int main(){
    char infix[100];
    int i;
    char ch;
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    for(int i=0; infix[i] != '\0'; i++){
         ch = infix[i];

        if( ch>='a' && ch<='z' ||
            ch>='A' && ch<='z' ||
            ch>='0' && ch<='9'
          ){
            printf("%c", ch);
          }
        else if( ch =='('){
            push(ch);
        }
        else if( ch == ')'){
            while( stack[top] != '('){
                printf("%c", pop());
            }
            pop();
        }
        else{
            while( top != -1 && stack[top] != '(' && priority(stack[top])>= priority(infix[i])){
                printf("%c", pop());
            }
            push(ch);
        }
    }
    while( top != -1){
        printf("%c", pop());
    }
    
    return 0;
}
