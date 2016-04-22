#include "RpcServer.h"
#include <iostream>
#include "RpcClient.h"

using namespace std;

namespace Hermes {
	RpcServer::RpcServer(boost::asio::io_service &_ioservice,int _port):
		ioservice(_ioservice),
		acceptor(ioservice,boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(),_port))
	{
		
	}

	void RpcServer::start()
	{
		boost::shared_ptr<RpcClient> pclient(new RpcClient(ioservice));
		acceptor.async_accept(pclient->socket(), boost::bind(&RpcServer::AcceptHandler, this, pclient, _1));
	}

	void RpcServer::AcceptHandler(boost::shared_ptr<RpcClient> pClient, ErrorCode errorcode)
	{
		if (errorcode) {
			cout << errorcode << endl;
			return;
		}
		this->start();
		cout << "new socket's remote address:" << pClient->socket().remote_endpoint().address() << ":" << pClient->socket().remote_endpoint().port() << endl;
		pClient->Start();
	}

	RpcServer::~RpcServer()
	{
	}
}

