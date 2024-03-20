#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
int main()
{
    int server_socket = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);

    struct sockaddr_in socket_address;
    memset(&socket_address, 0, sizeof(socket_address));
    socket_address.sin_family = PF_INET;
    socket_address.sin_addr.s_addr = inet_addr("127.0.0.1");
    socket_address.sin_port = htons(8000);
    bind(server_socket, (struct sockaddr *)&socket_address, sizeof(socket_address));

    listen(server_socket, 20);

    struct sockaddr_in client_address;
    socklen_t client_addr_size = sizeof(client_address);
    int newSocket = accept(server_socket, (struct sockaddr *)&client_address, &client_addr_size);
    char buffer[40];
    read(newSocket, buffer, sizeof(buffer));
    // printf("revc to message: %s\n",buffer);
    write(newSocket, buffer, sizeof(buffer));

    close(server_socket);
    close(newSocket);

    return 0;
}