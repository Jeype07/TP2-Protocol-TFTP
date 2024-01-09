#include "fonctions.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        write(STDOUT_FILENO, ERROR, sizeof(ERROR) - 1);
        exit(EXIT_FAILURE);
    }

    const char* server = argv[1]; // 2e argument : adresse du serveur
    const char* file = argv[2]; // 3e argument : nom du fichier


    // TEST //
    write(STDOUT_FILENO, "Server address: ", 16);
    write(STDOUT_FILENO, server, strlen(server));
    write(STDOUT_FILENO, "\n", 1);

    write(STDOUT_FILENO, "File name: ", 14);
    write(STDOUT_FILENO, file, strlen(file));
    write(STDOUT_FILENO, "\n", 1);

    struct addrinfo hints;
    struct addrinfo *results;
    memset(&hints, 0, sizeof hints);

    hints.ai_family = AF_UNSPEC; // IPv4 ou IPv6
    hints.ai_socktype = SOCK_DGRAM; // type de socket

    // Obtention des informations sur le serveur (l'adresse) en utilisant getaddrinfo
    int statut = getaddrinfo(server, "69", &hints, &results);
    if (statut != 0) {
        fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(statut));
        exit(EXIT_FAILURE);

    return 0;
}
