#pragma once
#include <boost/asio.hpp>

namespace Hermes {
	class RpcServer
	{
	public:
		RpcServer(int port);
		~RpcServer();

	private:
		boost::asio::io_service ioservice;
	};
}

