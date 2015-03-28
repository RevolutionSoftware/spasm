#pragma once

#ifdef _WINDOWS
#if defined(_ATL_STATIC_REGISTRY)
#include "SPASM_h.h"

class CSPASMModule : public ATL::CAtlExeModuleT<CSPASMModule>
{
public:
	DECLARE_LIBID(LIBID_SPASM)
};

extern CSPASMModule _AtlModule;
#endif
#endif
