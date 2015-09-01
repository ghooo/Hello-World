#include "client.h"

Client::Client():clientName_(""), clientId_(-1) {
}

void Client::setClientName(const std::string & clientName) {
	clientName_ = clientName;
}
void Client::setClientId(int clientId) {
	clientId_ = clientId;
}
std::string Client::getClientName() {
	return clientName_;
}
int Client::getClientId() {
	return clientId_;
}