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
/*

 */
int solution(char *S, char *F) {
    int total = 0;
    // New arrays based on numbers
    int arrF[sizeof S] = {};
    int arrS[sizeof F] = {};
    // Len of array for the for loop
    long int arrLenF = sizeof F / sizeof F[0];
    long int arrLenS = sizeof S / sizeof S[0];
    int i, x;
    int j = 0;
    // Converts the Char in to lexicographic array
    // A is now 1, b is 2, C is 3, etc...
    for (i = 0; i < arrLenF; i++) {
        switch (F[i]) {
            case 'a':
                arrF[j] += 1;
                j += 1;
                i += 1;
                break;
            case 'b':
                arrF[j] += 2;
                j += 1;
                i += 1;
                break;
            case 'c':
                arrF[j] += 3;
                j += 1;
                i += 1;
                break;
            case 'd':
                arrF[j] += 4;
                j += 1;
                i += 1;
                break;
            case 'e':
                arrF[j] += 5;
                j += 1;
                i += 1;
                break;
            case 'f':
                arrF[j] += 6;
                j += 1;
                i += 1;
                break;
            case 'g':
                arrF[j] += 7;
                j += 1;
                i += 1;
                break;
            case 'h':
                arrF[j] += 8;
                j += 1;
                i += 1;
                break;
            case 'i':
                arrF[j] += 9;
                j += 1;
                i += 1;
                break;
            case 'j':
                arrF[j] += 10;
                j += 1;
                i += 1;
                break;
            case 'k':
                arrF[j] += 11;
                j += 1;
                i += 1;
                break;
            case 'l':
                arrF[j] += 12;
                j += 1;
                i += 1;
                break;
            case 'm':
                arrF[j] += 13;
                j += 1;
                i += 1;
                break;
            case 'n':
                arrF[j] += 14;
                j += 1;
                i += 1;
                break;
            case 'o':
                arrF[j] += 15;
                j += 1;
                i += 1;
                break;
            case 'p':
                arrF[j] += 16;
                j += 1;
                i += 1;
                break;
            case 'q':
                arrF[j] += 17;
                j += 1;
                i += 1;
                break;
            case 'r':
                arrF[j] += 18;
                j += 1;
                i += 1;
                break;
            case 's':
                arrF[j] += 19;
                j += 1;
                i += 1;
                break;
            case 't':
                arrF[j] += 20;
                j += 1;
                i += 1;
                break;
            case 'u':
                arrF[j] += 21;
                j += 1;
                i += 1;
                break;
            case 'v':
                arrF[j] += 22;
                j += 1;
                i += 1;
                break;
            case 'w':
                arrF[j] += 23;
                j += 1;
                i += 1;
                break;
            case 'x':
                arrF[j] += 24;
                j += 1;
                i += 1;
                break;
            case 'y':
                arrF[j] += 25;
                j += 1;
                i += 1;
                break;
            case 'z':
                arrF[j] += 26;
                j += 1;
                i += 1;
                break;
        }
    }
    int o = 0;
    for (x = 0; x < arrLenS; x ++){
        switch (S[x]) {
            case 'a':
                arrS[x] += 1;
                o += 1;
                x += 1;
                break;
            case 'b':
                arrS[x] += 2;
                o += 1;
                x += 1;
                break;
            case 'c':
                arrS[x] += 3;
                o += 1;
                x += 1;
                break;
            case 'd':
                arrS[x] += 4;
                o += 1;
                x += 1;
                break;
            case 'e':
                arrS[x] += 5;
                o += 1;
                x += 1;
                break;
            case 'f':
                arrS[x] += 6;
                o += 1;
                x += 1;
                break;
            case 'g':
                arrS[x] += 7;
                o += 1;
                x += 1;
                break;
            case 'h':
                arrS[x] += 8;
                o += 1;
                x += 1;
                break;
            case 'i':
                arrS[x] += 9;
                o += 1;
                x += 1;
                break;
            case 'j':
                arrS[x] += 10;
                o += 1;
                x += 1;
                break;
            case 'k':
                arrS[x] += 11;
                o += 1;
                x += 1;
                break;
            case 'l':
                arrS[x] += 12;
                o += 1;
                x += 1;
                break;
            case 'm':
                arrS[x] += 13;
                o += 1;
                x += 1;
                break;
            case 'n':
                arrS[x] += 14;
                o += 1;
                x += 1;
                break;
            case 'o':
                arrS[x] += 15;
                o += 1;
                x += 1;
                break;
            case 'p':
                arrS[x] += 16;
                o += 1;
                x += 1;
                break;
            case 'q':
                arrS[x] += 17;
                o += 1;
                x += 1;
                break;
            case 'r':
                arrS[x] += 18;
                o += 1;
                x += 1;
                break;
            case 's':
                arrS[x] += 19;
                o += 1;
                x += 1;
                break;
            case 't':
                arrS[x] += 20;
                o += 1;
                x += 1;
                break;
            case 'u':
                arrS[x] += 21;
                o += 1;
                x += 1;
                break;
            case 'v':
                arrS[x] += 22;
                x += 1;
                o += 1;
                break;
            case 'w':
                arrS[x] += 23;
                o += 1;
                x += 1;
                break;
            case 'x':
                arrS[x] += 24;
                x += 1;
                o += 1;
                break;
            case 'y':
                arrS[x] += 25;
                o += 1;
                x += 1;
                break;
            case 'z':
                arrS[x] += 26;
                x += 1;
                o += 1;
                break;
        }
    }
    long int temp;


    for(i = 0; arrS[i] != '\0'; i++ ){
        for(x = 0; arrF[x] != '\0'; x++){
            // If the number is the same it breaks the loop
            if (arrF[x] == arrS[i]){
                i += 1;
                break;
            }
            // Calculates the number with the lowest difference between ArrS[i] and ArrF[x]
            if(x == 0){
                temp = arrF[x];

                x += 1;

            }else if (temp < abs(arrF[x] - arrS[i])){
                temp = arrF[x];
                x += 1;

            }
            else{
                x += 1;

            }
            // Adds the difference between the lowest number and ArrS[i] to the total
            total += abs(temp - arrS[i]);
            //increments the index by on for ArrS[i]
            i += 1;

        }
    }
    // Returns the total difference
    return total;
}








int main(int argc, char *argv[]) {
    int t;
    String s1 = {malloc(10), 0, 10},
            s2 = {malloc(10), 0, 10};
    t = atoi(getLine(&s1));
    for (int i = 1; i <= t; ++i) {
        getLine(&s1);
        getLine(&s2);

        if (argc == 1) {
            printf("Case #%d: %d\n", i, solution(s1.s, s2.s));
        } else if (atoi(argv[1]) == i) {
            printf("s1: %s\n", s1.s);
            printf("s2: %s\n", s2.s);
        }
        s1.len = 0;
        s2.len = 0;
    }
    return 0;
}
