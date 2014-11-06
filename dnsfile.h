#ifndef __DNSFILE_H_
#define __DNSFILE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <time.h>
#include <sys/time.h>


#define ROTATE_SECONDS 600

FILE *dnsfile_qry () ;
FILE *dnsfile_resp () ;
FILE *dnsfile_rr () ;

#endif //__DNSFILE_H_
