#include "unp.h"
void
sig_chld(int signo)
{
	pid_t pid;
	int stat;
	while((pid==waitpid(-1,&stat,WNOHANG))>0)
		printf("CHILD%DTERMINATED\n",pid);
	return;
}
