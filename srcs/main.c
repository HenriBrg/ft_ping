# include "../inc/ping.h"

/**
 * * int getaddrinfo(const char *node, const char *service, const struct addrinfo *hints, struct addrinfo **res) 
 * service définit le port dans chacune des structures d'adresses renvoyées (nom du service)
 * L'argument hints pointe sur une structure addrinfo qui spécifie les critères de sélection des structures d'adresses de sockets renvoyée dans la liste pointé par res.
*/

static void parseArgs(char **av) {

    if (av[1] && (_strlen(av[1]) == 2 || _strlen(av[1]) == 3) && av[1][0] == '-') {
        if (av[1][1] == 'v' && av[1][2] == 0)
            gPing.isVerboseOn = 1;
        if (av[1][1] == 'h' && av[1][2] == 0)
            gPing.isSweepincrsizeSet = 1;
        if (_strlen(av[1]) == 3 && ((av[1][1] == 'h' && av[1][2] == 'v') || (av[1][1] == 'v' && av[1][2] == 'h')) && av[1][3] == 0)
            gPing.isSweepincrsizeSet = gPing.isVerboseOn = 1;
    }

    int x;
    struct  addrinfo tmp;
    tmp.ai_family = AF_INET;
    if ((x = getaddrinfo(av[2], NULL, &tmp, &gPing.addrInfoRes)) != 0)
        exitPrint("ping: cannot resolve given host\n");

}

int main(int ac, char **av) {

    (void)ac;
    (void)av;

    if (ac < 2 || ac > 3)
        return retPrintUsage();
    parseArgs(av);
    return (EXIT_SUCCESS);

}
