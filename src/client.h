#ifndef CLIENT_H
#define CLIENT_H

#include <string>
//! test class
/*!
 * this class is only used for testing doxygen and Makfile, nothing
 */
class Client {
public:
	//! default constructor
	Client();

	//! destructor
	~Client();

	//! set client name using this function.
	void setClientName(const std::string & /*clientName*/);

	//! set client id using this function.
	void setClientId(int /*clientid*/);

	//! get client name using this function
	std::string getClientName();

	//! get client id using this function
	int getClientId();

	//! used only for testing Makefile
	int getRandomNumber() {
		return 55;
	}
private:
	std::string clientName_; //!< client name
	int clientId_; //!< client id
};
#endif // CLIENT_H