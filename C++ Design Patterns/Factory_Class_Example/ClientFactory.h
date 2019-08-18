#ifndef CLIENT_FACTORY_H
#define CLIENT_FACTORY_H

#include "BaseFactory.h"

class DOS_Client {
public:
	DOS_Client()  //Constructor
	{
		CyberType type = DOS_type;  //Assigns DOS_type to type variable
		pDOS = CyberBase::Create(type); //Creates a DOS_type
	}
	~DOS_Client() {  //Destructor
		if (pDOS) {
			delete[] pDOS;
			pDOS = 0;
		}
	}
	CyberBase* getAccess()  //Returns private class variable
	{
		return pDOS;
	}

private:
	CyberBase* pDOS;  //Pointer to Base Class
};


class Malware_Client {
public:

	Malware_Client()
	{
		CyberType type = Malware_type;
		pMalware = CyberBase::Create(type);
	}
	~Malware_Client() {
		if (pMalware) {
			delete[] pMalware;
			pMalware = 0;
		}
	}
	CyberBase* getAccess()
	{
		return pMalware;
	}

private:
	CyberBase* pMalware;
};

class Phishing_Client {
public:

	Phishing_Client()
	{
		CyberType type = Phishing_type;
		pPhishing = CyberBase::Create(type);
	}
	~Phishing_Client() {
		if (pPhishing) {
			delete[] pPhishing;
			pPhishing = 0;
		}
	}
	CyberBase* getAccess()
	{
		return pPhishing;
	}

private:
	CyberBase* pPhishing;
};

#endif