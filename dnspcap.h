#ifndef __DNSPCAP_H_
#define __DNSPCAP_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <endian.h>
#include <pcap.h>

void dnspcap_pkt (unsigned char *arg, const struct pcap_pkthdr *pkthdr, const unsigned char *bytes) ;
void dnspcap_start (char *dev) ;

#endif //__DNSPCAP_H_

