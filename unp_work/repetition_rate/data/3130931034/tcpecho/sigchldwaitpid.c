#include "unp.h"
void
sig_chld(int signo)
{
	pid_t pid;
	int stat;
	while((pid = waitpid(-1,&stat,WNOHANG))>0)
		printf("chld %d terminated\n",pid);
	return;
}