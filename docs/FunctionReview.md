◦ getpid            =   pid_t getpid(void)
                        -> Renvoie l'identifiant du processus appelant    
◦ getuid            =   uid_t getuid(void)
                        -> Retourne l'UID réel du processus appelant.    

◦ getaddrinfo       =   int getaddrinfo(const char *node, const char *service, const struct addrinfo *hints, struct addrinfo **res)   
                        -> Renvoie une ou plusieurs structures addrinfo, chacune d'entre elles contenant une adresse Internet   
                           qui puisse être indiquée dans un appel à bind(2) ou connect(2)   

                        struct addrinfo {   
                            int              ai_flags;   
                            int              ai_family;   
                            int              ai_socktype;   
                            int              ai_protocol;   
                            size_t           ai_addrlen;   
                            struct sockaddr *ai_addr;   
                            char            *ai_canonname;   
                            struct addrinfo *ai_next;   
                        };   

◦ gettimeofday      =   int gettimeofday(struct timeval *tv, struct timezone *tz)   

◦ inet_ntop         =   const char *inet_ntop(int af, const void *src, char *dst, socklen_t cnt)  
                        -> Convertir des adresses IPv4 et IPv6 sous forme binaire en texte   

◦ inet_pton         =   int inet_pton(int af, const char * src, void *dst);  
                        -> Créer une structure d'adresse réseau   

◦ alarm             =   unsigned int alarm(unsigned int nb_sec);  
                        -> Programmer un réveil pour l'émission d'un signal   
◦ setsockopt        =    int setsockopt(int s, int level, int optname, const void *optval, socklen_t optlen);   
                        -> setsockopt() manipulent les options associées à une socket

◦ recvmsg           =   ssize_t recvmsg(int s, struct msghdr *msg, int flags);  
                        -> recvmsg() est utilisé pour recevoir des messages depuis une socket sur une socket orientée connexion ou non (contrairement à recv)  
                        -> L'appel recvmsg() utilise une structure msghdr pour minimiser le nombre de paramètres à fournir directement.  
                    
                    struct msghdr {
                        void         *msg_name;       /* adresse optionnelle */   
                        socklen_t     msg_namelen;    /* taille de l'adresse */   
                        struct iovec *msg_iov;        /* tableau scatter/gather */   
                        size_t        msg_iovlen;     /* # éléments dans msg_iov */   
                        void         *msg_control;    /* métadonnées, voir ci-dessous */   
                        socklen_t     msg_controllen; /* taille du tampon de métadonnées */   
                        int           msg_flags;      /* attributs du message reçu */   
                    };

◦ sendto            =   ssize_t sendto(int s, const void *buf, size_t len, int flags, const struct sockaddr *to, socklen_t tolen);   

◦ socket            =   int socket(int domain, int type, int protocol);    
