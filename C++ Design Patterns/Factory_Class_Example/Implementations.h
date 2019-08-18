#ifndef IMPLEMENTATIONS_H
#define IMPLEMENTATIONS_H

#include "BaseFactory.h"

//All these classes inherit from CyberBase, they must define the virtual functions
class DOS_Attack : public CyberBase{
public:
	virtual void initialize();
	virtual void finalize();
};

class Malware_Attack : public CyberBase {
public:
	virtual void initialize();
	virtual void finalize();
};

class Phishing_Attack : public CyberBase {
public:
	virtual void initialize();
	virtual void finalize();
};

#endif