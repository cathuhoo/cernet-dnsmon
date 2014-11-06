#ifndef __DNSPKT_H_
#define __DNSPKT_H_

#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <endian.h>
#include <arpa/inet.h>
#include <ldns/ldns.h>


typedef struct {
    uint8_t ipver;
    uint32_t ip4;
    uint64_t ip6h;
    uint64_t ip6l;
    uint16_t port;
} host_t;



void dnspkt_printqry (ldns_rr *rr, struct timeval ts, host_t *src, host_t *dst) ;
void dnspkt_printrr (ldns_rr *rr, struct timeval ts, host_t *src, host_t *dst, uint16_t section) ;
void dnspkt_printresp (ldns_pkt *pkt, struct timeval ts, host_t *src, host_t *dst) ;
void dnspkt_proc (const char *bytes, uint16_t len, struct timeval ts, host_t *src, host_t *dst) ;

#endif //__DNSPKT_H_



