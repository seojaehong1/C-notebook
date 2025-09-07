#include <string.h>
#include "stackL.h"
#include "evalPostfix.h"

element evalPostfix(char* exp){
    int opr1, opr2, value, i=0;

    int length = strlen(exp);
    char symbol;

    top = NULL;

    for(i = 0; i< length; i++){
        symbol = exp[i];
        if(symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/')
            value = symbol - '0', push(value);
        else {
            opr2 = pop();
            opr1 = pop();
            switch(symbol){
                case '+':
                    value = opr1 + opr2; break;
                case '-':
                    value = opr1 - opr2; break;
                case '*':
                    value = opr1 * opr2; break;
                case '/':
                    value = opr1 / opr2; break;
            }
            push(value);
        }   
    }
    return pop();
}