#include "client.h"

/*!
 * set clientName_ to ""
 * set clientId_ to -1
 */
Client::Client():clientName_(""), clientId_(-1) {
}

/*!
 * does nothing for now
 */
Client::~Client() {}

/*!
 * @param clientName is client name
 * should add some validation here
 * @sa getClientName()
 */
void Client::setClientName(const std::string & clientName) {
	clientName_ = clientName;
}

/*!
 * @param clientId is client id
 * should add some validation here
 * @sa getClientId()
 */
void Client::setClientId(int clientId) {
	clientId_ = clientId;
}

/*!
 * @return client name
 * @sa setClientName()
 */
std::string Client::getClientName() {
	return clientName_;
}

/*!
 * @return client id
 * @sa setClientId
 */
int Client::getClientId() {
	return clientId_;
}