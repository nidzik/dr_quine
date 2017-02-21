#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
int i=5;
if(i<0)return(-1);
char s[128];
char n[128];sprintf(n,"Sully_%d.c",i);
int fd=open(n,O_CREAT|O_WRONLY,0644);if(fd==-1)return(-1);
char*str="#include <fcntl.h>%c#include <stdio.h>%c#include <stdlib.h>%cint main(){%cint i=%d;%cif(i<0)return(-1);%cchar s[128];%cchar n[128];sprintf(n,%cSully_%cd.c%c,i);%cint fd=open(n,O_CREAT|O_WRONLY,0644);if(fd==-1)return(-1);%cchar*str=%c%s%c;%cdprintf(fd,str,10,10,10,10,i-1,10,10,10,34,37,34,10,10,34,str,34,10,10,34,37,37,34,10,34,37,34,10,10);%csprintf(s,%cgcc -Wall -Wextra -Werror %cs -o Sully_%cd%c,n,i);system(s);%csprintf(s,%c./Sully_%cd%c,i--);system(s);%c}%c";
dprintf(fd,str,10,10,10,10,i-1,10,10,10,34,37,34,10,10,34,str,34,10,10,34,37,37,34,10,34,37,34,10,10);
sprintf(s,"gcc -Wall -Wextra -Werror %s -o Sully_%d",n,i);system(s);
sprintf(s,"./Sully_%d",i--);system(s);
}
