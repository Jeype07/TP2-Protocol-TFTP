#include "fonctions.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        write(STDOUT_FILENO, ERROR, sizeof(ERROR) - 1);
        exit(EXIT_FAILURE);
    }

    const char* server = argv[1];
    const char* file = argv[2];
    
    write(STDOUT_FILENO, "Server address: ", 16);
    write(STDOUT_FILENO, server, strlen(server));
    write(STDOUT_FILENO, "\n", 1);

    write(STDOUT_FILENO, "File name: ", 14);
    write(STDOUT_FILENO, file, strlen(file));
    write(STDOUT_FILENO, "\n", 1);

    return 0;
}
