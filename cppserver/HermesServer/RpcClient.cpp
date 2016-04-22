#include "RpcClient.h"
#include <iostream>
#include <boost/bind.hpp>
#include <boost/array.hpp>
#include <boost/asio/buffer.hpp>
#include "hehe.pb.h"

using namespace boost;

namespace Hermes {

	using namespace std;

	RpcClient::RpcClient(boost::asio::io_service & ioservice):
		m_socket(ioservice)
	{
		
	}

	RpcClient::~RpcClient()
	{
		cout << m_socket.remote_endpoint().address() << "关闭链接"<<endl;
	}

	void RpcClient::HandleReadBody(boost::system::error_code errorcode)
	{
		if (errorcode){
			cout << errorcode.message()<< endl;
			return;
		}

		if (readBuffer.size() == sizeof(__int64)) {
			cout << "是数字" << endl;
			const __int64* head = asio::buffer_cast<const __int64*>(readBuffer.data());
			//clean readBuffer
			readBuffer.consume(sizeof(__int64));
			boost::asio::async_read(m_socket, readBuffer, boost::asio::transfer_exactly(*head), boost::bind(&RpcClient::HandleReadBody, shared_from_this(), boost::asio::placeholders::error));
			return;
		}
		else
		{
			example::LogonReqMessage logonReq;
			
			const char * str = asio::buffer_cast<const char *>(readBuffer.data());
			bool isOk  = logonReq.ParseFromArray(str, readBuffer.size());
			if (isOk) {
				cout << "序列化成功" << endl;
				cout << "accid:" << logonReq.acctid() << endl;
				cout << "password:" << logonReq.passwd() << endl;
			}
			else
			{
				cout << "序列化失败" << endl;
			}
			cout << readBuffer.size() << endl;
			readBuffer.consume(readBuffer.size());
			boost::asio::async_read(m_socket, readBuffer, boost::asio::transfer_exactly(sizeof(__int64)), boost::bind(&RpcClient::HandleReadBody, shared_from_this(), boost::asio::placeholders::error));
			return;
		}
	}

	boost::asio::ip::tcp::socket & RpcClient::socket()
	{
		return m_socket;
	}

	void RpcClient::Start()
	{
		boost::asio::async_read(m_socket, readBuffer,boost::asio::transfer_exactly(sizeof(__int64)),boost::bind(&RpcClient::HandleReadBody,shared_from_this(),boost::asio::placeholders::error));
	}
}
