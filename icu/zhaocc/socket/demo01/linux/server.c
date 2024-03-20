#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
int main()
{
    // 创建套接字
    int server_socket = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);

    // 将套接字和IP、端口绑定
    struct sockaddr_in server_address;
    // 每个字节都用0填充
    memset(&server_address, 0, sizeof(server_address));
    // 使用IPv4地址
    server_address.sin_family = PF_INET;
    // 具体的IP地址
    server_address.sin_addr.s_addr = inet_addr("127.0.0.1");
    // 端口
    server_address.sin_port = htons(8000);
    bind(server_socket, (struct sockaddr *)&server_address, sizeof(server_address));

    // 进入监听状态，等待用户发起请求
    listen(server_socket, 20);

    // 接收客户端请求
    //  int     accept(int, struct sockaddr * __restrict, socklen_t * __restrict)
    struct sockaddr_in client_address;
    socklen_t client_addr_size = sizeof(client_address);
    int newSocket = accept(server_socket, (struct sockaddr *)&client_address, &client_addr_size);

    // 向客户端发送数据
    char message[] = "hello world";
    write(newSocket, message, sizeof(message));

    // 关闭套接字
    close(server_socket);
    close(newSocket);
    return 0;
}