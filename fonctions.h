#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
# include "netdb.h" // bibliothèdue de getaddrinfo

#define TFTP_SERVER_PORT 69
#define ERROR "Commande invalide. Pas le bon nombre d'arguments. \n"