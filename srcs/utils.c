# include "../inc/ping.h"

size_t  _strlen(const char *str) {
	
    size_t i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);

}

int exitPrint(char * s) {
    write(2, s, _strlen(s));
    exit(EXIT_FAILURE);
}

int retPrintUsage(void) {
    write(1, "Usage: ping [-hv] TARGET\n", 28);
    return (EXIT_FAILURE);
}