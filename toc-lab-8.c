#include <stdio.h>
enum states {
 q0, q1, q2
};
int i;
int transition(enum states state, char c) {
 switch (state) {
 case q0:
 if (c == 'b') {
 return q1;
 } else {
 return q0;
 }
 case q1:
 if (c == 'a') {
 return q2;
 } else {
 return q0;
 }
 case q2:
 return q2;
 }
}
enum states start_state = q0;
enum states final_state = q2;
int main() {
 enum states state = start_state;
 char str[100];
 scanf("%s", str);
 for ( i = 0; str[i] != '\0'; i++) {
 state = transition(state, str[i]);
 }
 if (state == final_state) {
 printf("The string is accepted.\n");
 } else {
 printf("The string is rejected.\n");
 }
 return 0;
}

