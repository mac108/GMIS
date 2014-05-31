// UserMutex.cpp: implementation of the CUserMutex class.
//
//////////////////////////////////////////////////////////////////////
#pragma warning(disable: 4786)

#include "UserMutex.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CUserMutex::CUserMutex()
{
    ::InitializeCriticalSection(&m_Mutex);
}

CUserMutex::~CUserMutex()
{
	 ::DeleteCriticalSection(&m_Mutex);

}

