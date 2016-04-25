#include<signal.h>

typedef void (*sighandler_t)(int);

int sig_ignored(int signum)
{
	sighandler_t sig;
	sig = signal(signum,SIG_DFL);
	
	if(sig == SIG_IGN)
	{ 
		return 1; 
	} 
	else 
	{ 
		return 0; 
	} 
}

int main()
{
	signal(SIGINT,SIG_IGN);
	while(1){}
}
