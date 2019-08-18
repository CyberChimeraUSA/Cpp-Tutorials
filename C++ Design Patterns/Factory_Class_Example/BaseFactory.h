#ifndef BASE_FACTORY_H
#define BASE_FACTORY_H

enum CyberType
{
	Malware_type, DOS_type, Phishing_type,
};

class CyberBase
{
public:
	virtual void initialize() = 0;  //Init function, must be common among all subclasses
	virtual void finalize() = 0;    //finalize function, must be common among all subclasses
	static CyberBase* Create(CyberType type);  
};


#endif