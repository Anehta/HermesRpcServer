#include <boost/asio.hpp>
#include <iostream>
typedef boost::asio::io_service IOSERVICE;
typedef boost::asio::ip::tcp TCP;

using namespace boost;
using namespace std;

int main() {
	IOSERVICE ioservice;
	boost::system::error_code error;
	TCP::socket soc(ioservice);
	TCP::acceptor acceptor(ioservice, TCP::endpoint(TCP::v4(), 9999));
	for (;;) {
		TCP::socket soc(ioservice);
		acceptor.accept(soc);
		char str[100];
		boost::system::error_code errorcode;
		//transfer_all读取全部之后才返回
		//asio::read(soc,boost::asio::buffer(str,10),boost::asio::transfer_all(),errorcode);
		//str[5] = '\0';
		//cout << str << endl;
		//boost::system::error_code errorcode;
		for (int i = 0; i < 10; i++) {
			asio::write(soc, boost::asio::buffer("shabi"), boost::asio::transfer_all(), errorcode); 
		}
	}
	return 0;
}