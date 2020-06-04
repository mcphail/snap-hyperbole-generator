#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "noun.h"
#include "snap.h"
#include "action.h"

int main() {
	srand(time(NULL));
	printf("%s %s and %s %s.\n",
	        snap[rand() % SNAP_NUM],
		action[rand() % ACTION_NUM],
		noun[rand() % NOUN_NUM],
		action[rand() % ACTION_NUM]
	      );
}
