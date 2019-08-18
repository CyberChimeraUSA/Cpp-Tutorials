
#include "BaseFactory.h"
#include "Implementations.h"

CyberBase* CyberBase::Create(CyberType type)
{
	if (type == Malware_type)
		return new Malware_Attack();
	else if (type == DOS_type)
		return new DOS_Attack();
	else if (type == Phishing_type)
		return new Phishing_Attack();
	else return 0;
}