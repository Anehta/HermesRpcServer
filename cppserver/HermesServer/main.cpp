#include <boost/asio.hpp>
#include <iostream>
#include "RpcServer.h"

typedef boost::asio::io_service IOSERVICE;
typedef boost::asio::ip::tcp TCP;

using namespace boost;
using namespace std;

int main() {
	IOSERVICE ioservice;
	Hermes::RpcServer rpc(ioservice,9988);
	rpc.start();
	ioservice.run();
	return 0;
}