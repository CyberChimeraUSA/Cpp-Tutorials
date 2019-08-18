#include "ClientFactory.h"
#include "BaseFactory.h"
#include <iostream>

using namespace std;

int main() 
{
	int input;
	cout << "1. Malware" << endl;
	cout << "2. DOS" << endl;
	cout << "3. Phishing" << endl;
	cin >> input;  //No Handler, so only enter 1,2,3


	if (input == 1)
	{
		Malware_Client* pClient = new Malware_Client();
		CyberBase* pCyber = pClient->getAccess();
		pCyber->initialize();
		pCyber->finalize();
	}
	else if (input == 2)
	{
		DOS_Client* pClient = new DOS_Client();
		CyberBase* pCyber = pClient->getAccess();
		pCyber->initialize();
		pCyber->finalize();

	}
	else if (input == 3)
	{
		Phishing_Client* pClient = new Phishing_Client();
		CyberBase* pCyber = pClient->getAccess();
		pCyber->initialize();
		pCyber->finalize();
	}
	else
	{
		return 1;
	}

	return 0;
}