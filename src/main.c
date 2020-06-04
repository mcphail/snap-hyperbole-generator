#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "noun.h"
#include "snap.h"
#include "action.h"

int main() {
	struct timespec tp;

	clock_gettime(CLOCK_REALTIME, &tp);
	srand(tp.tv_nsec);
	printf("%s %s and %s %s.\n",
	        snap[rand() % SNAP_NUM],
		action[rand() % ACTION_NUM],
		noun[rand() % NOUN_NUM],
		action[rand() % ACTION_NUM]
	      );
}
