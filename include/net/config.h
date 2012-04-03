#ifndef __NET__CONFIG_H
#define __NET__CONFIG_H

#ifndef SVC_TCP
#include <net/services.h>
#endif

/* These are the primary and secondry hosts to use as boot servers
 * for the DNS.  It is better to set to the primary to be a mud on
 * the same continent.
 */
// 11-1-95
// ES
#define MUDLIST_DNS  ({ "140.113.166.36", 8008 })
// enchanted rock
#define MUDLIST_BAK  ({ "204.251.16.225", 5563 })

#define LISTNODES ([ \
"celestial empire"              :       "210.209.35.35 4004",\
"celestial empire US"           :       "205.179.65.6 4004",\
"celestail empire US test"      :       "207.126.116.8 5004",\
"eastern pig"                   :       "140.114.18.21 5563",\
"doom of lost kingdoms"         :       "140.113.87.202 4008",\
"doom of lost kingdoms 2"       :       "140.116.250.9 4008",\
"eternal civilization"          :       "140.113.87.198 4004",\
"eastern stories"               :       "140.113.87.209 8008",\
"fantasy space"                 :       "140.120.7.9 4004",\
])

/* This is the default packet size of outgoing mail messages.  The ideal
 * number is 512, maximum would be about 900, since 1024 is the maximum
 * udp packet size.  Probably best kept at 512
 */
#define MAIL_PACKET_SIZE        512
 
/* These macros are for the name service.  They determine how often the
 * database is refreshed, how often other muds are checked, how often
 * the sequence list is checked for timed out services, and how long a
 * service is allowed to time out.
 */
#define REFRESH_INTERVAL     5*60
#define PING_INTERVAL       30*60
#define SEQ_CLEAN_INTERVAL  60*60
#define SERVICE_TIMEOUT        30

/* The number of muds that we initialy allocate space for.  This speeds
 * up name lookup.
 */
#define MUDS_ALLOC 60

/* This macro controls the level of tcp support used by the mud for
 * services such as finger, tell and mail. Valid values are:
 *  TCP_ALL   - all services available
 *  TCP_ONLY  - only tcp services available
 *  TCP_SOME  - some tcp services are available
 *  TCP_NONE  - no tcp services available
 */
#define TCP_SERVICE_LEVEL TCP_ALL

/* These are the prefered protocols used for certain services which can
 * be done either way.  Mail should be left tcp, the others are up to
 * the individual admin.  If the one you choose is not supported the
 * other type _may_ be used depending on the service.
 */

#define PREF_MAIL         SVC_TCP
#define PREF_FINGER       SVC_TCP
#define PREF_TELL         SVC_UDP

/* These macros are used by the name server to keep a list of muds which
 * do not support the DNS.
 */
#define MUD_ADDRESSES   "/adm/etc/mud_addresses"
#define MUD_SERVICES    "/adm/etc/mud_services"

#endif __NET__CONFIG_H
