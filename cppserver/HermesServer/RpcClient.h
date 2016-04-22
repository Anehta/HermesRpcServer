#pragma once

#include <boost/asio.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/system/error_code.hpp>

namespace Hermes {

class RpcClient:public boost::enable_shared_from_this<RpcClient>
{
public:
	RpcClient(boost::asio::io_service &ioservice);
	~RpcClient();
	void HandleReadBody(boost::system::error_code errorcode);
	boost::asio::ip::tcp::socket & socket();
	void Start();
private:
	boost::asio::ip::tcp::socket m_socket;
	boost::asio::streambuf readBuffer;
};

}


