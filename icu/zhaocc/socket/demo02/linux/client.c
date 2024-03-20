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
    int client_socket = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);

    // 向服务器（特定的IP和端口）发起请求
    struct sockaddr_in server_address;
    // 每个字节都用0填充
    memset(&server_address, 0, sizeof(server_address));
    // 使用IPv4地址
    server_address.sin_family = PF_INET;
    // 具体的IP地址
    server_address.sin_addr.s_addr = inet_addr("127.0.0.1");
    // 端口
    server_address.sin_port = htons(8000);
    connect(client_socket, (struct sockaddr *)&server_address, sizeof(server_address));

    //获取用户输入的字符串并发送给服务器
    char bufSend[40] = {0};
    printf("Input a string: ");
    scanf("%s", bufSend);
    write(client_socket, bufSend, strlen(bufSend));

    // 读取服务器传回的数据
    char buffer[40];
    read(client_socket, buffer, sizeof(buffer) - 1);

    printf("Message form server: %s\n", buffer);

    // 关闭套接字
    close(client_socket);

    return 0;
}