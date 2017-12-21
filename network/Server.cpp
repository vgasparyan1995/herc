#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>

#include "Server.h"

herc::network::Server()
	: m_socketFD(-1)
	, m_isValid(false)
{
	m_socketFD = socket(AF_INET, SOCK_STREAM, 0);
	if (m_socketFD < 0) {
		throw "Server failed to open socket.";
	}
	m_isValid(true);
}

herc::network::~Server()
{
	close();
}

bool herc::network::Server::bind(const IPv4Port port)
{
	IPv4Address serv_addr;
	serv_addr.setPort(port);
	auto pToNative = ;
	if (bind(m_socketFD, serv_addr.getNativePointer(), Socket::) < 0) {
		throw "Binding failed with port: " + port.toString();
	}
	listen(m_socketFD, 5);
}

herc::network::Socket herc::network::Server::accept() const
{
	
}
