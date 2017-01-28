#include <stdio.h>
char*i="#include<stdio.h>",q='"',n='\n',*p=
"int main(){return!printf(\"%s%cchar*i=\"%s\",q='%c',n='\\n',*p=%c%s%c%s%c\",p);})";
int main(){return!printf("%s%cchar*i=\"%s\",q='%c',n='\\n',*p=%c%s%c%s%c",i,n,i,q,n,p,n,p,n);}
