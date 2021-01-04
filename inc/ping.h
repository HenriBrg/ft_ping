#ifndef PING_H
# define PING_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <netdb.h>
# include <sys/types.h>
# include <sys/socket.h>
# include <sys/time.h>
# include <arpa/inet.h>

/**
 * Authorized Functions
 * 
 * pid_t        getpid(void)
 * uid_t        getuid(void)
 * int          getaddrinfo(const char *node, const char *service, const struct addrinfo *hints, struct addrinfo **res) 
 * int          gettimeofday(struct timeval *tv, struct timezone *tz)
 * const char   *inet_ntop(int af, const void *src, char *dst, socklen_t cnt)  
 * int          inet_pton(int af, const char * src, void *dst); 
 * unsigned int alarm(unsigned int nb_sec);  
 * int          setsockopt(int s, int level, int optname, const void *optval, socklen_t optlen); 
 * ssize_t      recvmsg(int s, struct msghdr *msg, int flags);  
 * ssize_t      sendto(int s, const void *buf, size_t len, int flags, const struct sockaddr *to, socklen_t tolen);   
 * int          socket(int domain, int type, int protocol);   
 *  
*/

typedef struct s_ping {

    char            *host;
    int             isVerboseOn;
    int             isSweepincrsizeSet;
    struct addrinfo *addrInfoRes;

    
}              t_ping;

t_ping          gPing;

int             exitPrint(char * s);
int             retPrintUsage(void);
size_t          _strlen(const char *str);

#endif