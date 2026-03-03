#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char **argv)
{
	int nb = atoi(argv[1]);
	if (nb != 423)
		printf("No !\n");
	else
	{
		gid_t	gid = getegid();
		uid_t	uid = geteuid();
		setresgid(gid, gid, gid);
		setresuid(uid, uid, uid);
		arg[0] = strdup("/bin/sh");
		arg[1] = NULL
		execv("/bin/sh", arg);
	}
	return 0;
}