#pragma once

namespace herc {
namespace network {

class Server
{
public:
	Server();
	~Server();
	Server(const Server&) = delete;
	Server(Server&&) = delete;
	Server& operator=(const Server&) = delete;
	Server& operator=(Server&&) = delete;

	bool bind(const IPv4Port port);
	Socket accept() const;
	void close();

	inline bool isValid() const { return m_isValid; }

private:
	int 	m_socketFD;
	bool 	m_isValid;
};

} // namespace network
} // namespace herc
