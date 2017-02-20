#include <fcntl.h>
#include <stdio.h>
/*
	//comment
*/
#define CWR O_CREAT|O_WRONLY
#define NW "Grace_kid.c"
#define M int main(){int fd=open(NW,CWR,0644);if(fd==-1)return(-1);char*i="#include <fcntl.h>%c#include <stdio.h>%c/%c%c%c//comment%c%c/%c#define CWR O_CREAT|O_WRONLY%c#define NW %cGrace_kid.c%c%c#define M int main(){int fd=open(NW,CWR,0644);if(fd==-1)return(-1);char*i=%c%s%c;dprintf(fd,i,10,10,42,10,9,10,42,10,10,34,34,10,34,i,34,10,10);}%cM%c";dprintf(fd,i,10,10,42,10,9,10,42,10,10,34,34,10,34,i,34,10,10);}
M
