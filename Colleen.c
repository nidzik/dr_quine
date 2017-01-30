#include <stdio.h>
// comment1
void func(){}
int main(){
//comment2
char*p="#include <stdio.h>%c// comment1%cvoid func(){}%cint main(){%c//comment2%cchar*p=%c%s%c;%cprintf(p,10,10, 10,10,10,34,p,34,10,10,10);}%c";
printf(p,10,10, 10,10,10,34,p,34,10,10,10);}
