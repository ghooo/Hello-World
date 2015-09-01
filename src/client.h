#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client {
public:
	Client();
	void setClientName(const std::string & /*clientName*/);
	void setClientId(int /*clientid*/);
	std::string getClientName();
	int getClientId();
	int getRandomNumber() {
		return 55;
	}
private:
	std::string clientName_;
	int clientId_;
};
#endif // CLIENT_H