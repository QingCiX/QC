#include <QC.h>

class	Sandbox : public	QC::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

QC::Application*     QC::CreateApplication()
{
	return	new	Sandbox();
}
