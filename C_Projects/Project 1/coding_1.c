//
// Created by haoyu on 9/18/2022.
//
#include <stdlib.h>
#include <stdio.h>

typedef struct string {
    char *s;
    int len, cap;
} String;


String *append_string(String *s, char c) {
    if (s->cap == s->len) {
        s->cap <<= 1;
        s->s = (char *) realloc(s->s, s->cap);
    }
    s->s[s->len++] = c;
    s->s[s->len] = 0;
    return s;
}

char *getLine(String *s) {
    s->len = 0;
    char c;
    while (1) {
        c = getchar();
        if (c == -1 || c == '\n') return s->s;
        append_string(s, c);
    }
}

#define YES  "YES"
#define NO  "NO"
/*
 D is number of dog food
 C is number of cat food
 M extra cat food that to be given to the cats
 S is the order of that food that neededs to be given
 Question: Will all the dogs be fed?
 Char C eats one C
 Char D consumes one D
 When D is used add M to C
*/
char *solution(int D, long int C, int M, char *S) {
    int i, x;
    int temp =0;
    int fed = 0;
    for(x = 0; S[x] != '\0'; x++){
        if(S[x] == 'D'){
            temp += 1;
        }
    }
    for(i = 0; S[i] != '\0'; i++){

        if(S[i]== 'D' && D > 0){
            fed += 1;
            D -= 1;
            C += M;
        } else if (S[i] == 'D' && D == 0){
            break;
        }else if(S[i] == 'C' && C > 0){
            C -= 1;
        }else if(S[i] == 'C' && C == 0){
            break;
        }
    }
    if(temp == fed){
        return YES;
    }else
        return NO;


}

int main(int argc, char *argv[]) {
    int t, D, C, M, L;
    String s1 = {malloc(10), 0, 10},
            s2 = {malloc(10), 0, 10};
    t = atoi(getLine(&s1));
    for (int i = 1; i <= t; ++i) {
        getLine(&s1);
        getLine(&s2);
        sscanf(s1.s, "%d %d %d %d", &L, &D, &C, &M);
        if (argc == 1) {
            printf("Case #%d: %s\n", i, solution(D, C, M, s2.s));
        } else if (atoi(argv[1]) == i) {
            printf("s1: %s\n", s1.s);
            printf("s2: %s\n", s2.s);
        }
        s1.len = 0;
        s2.len = 0;
    }
    return 0;
}
