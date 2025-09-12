#include <WinSock2.h>
#include <WS2tcpip.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

#define PORT 8181

int main()
{
    WSADATA wsa;
    SOCKET s, c;
    int addrlen;
    struct sockaddr_in srv, cli;
    char buf[512];
    char *data;

    // Initialize Winsock
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
    {
        printf("WSAStartup failed\n");
        return -1;
    }

    // Create Socket
    s = socket(AF_INET, SOCK_STREAM, 0);
    if (s == INVALID_SOCKET)
    {
        printf("socket() failed\n");
        WSACleanup();
        return -1;
    }

    memset(&srv, 0, sizeof(srv));
    srv.sin_family = AF_INET;
    srv.sin_addr.s_addr = INADDR_ANY;
    srv.sin_port = htons(PORT);

    if (bind(s, (struct sockaddr *)&srv, sizeof(srv)) == SOCKET_ERROR)
    {
        printf("bind() failed\n");
        closesocket(s);
        WSACleanup();
        return -1;
    }

    if (listen(s, 5) == SOCKET_ERROR)
    {
        printf("listen()\n");
        closesocket(s);
        WSACleanup();
        return -1;
    }

    printf("Listening on 0.0.0.0:%d\n", PORT);

    addrlen = sizeof(cli);
    c = accept(s, (struct sockaddr *)&srv, &addrlen);
    if (c == INVALID_SOCKET)
    {
        printf("accept()\n");
        closesocket(s);
        WSACleanup();
        return -1;
    }

    printf("Client connected\n");
    int recv_size = recv(c, buf, sizeof(buf) -1, 0);
    if(recv_size > 0){
        buf[recv_size] = '\0';
        printf("Client sent: %s\n", buf);

        data = "http v1.0\n";
        send(c, data, strlen(data), 0);
    }

    closesocket(c);
    closesocket(s);
    WSACleanup();
    return 0;
}