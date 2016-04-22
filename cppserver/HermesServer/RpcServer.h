#pragma once
#include <boost/asio.hpp>
#include <boost/bind.hpp>

namespace Hermes {
	class RpcClient;
	typedef boost::asio::ip::tcp Tcp;
	typedef boost::asio::io_service Ioservice;
	typedef boost::system::error_code ErrorCode;

	class RpcServer
	{
	public:
		RpcServer(boost::asio::io_service &_ioservice, int _port);
		void start();
		void AcceptHandler(boost::shared_ptr<RpcClient> pClient, ErrorCode errorcode);
		~RpcServer();

	private:
		boost::asio::io_service &ioservice;
		boost::asio::ip::tcp::acceptor acceptor;
	};
}

