#pragma once

#ifdef    QC_PLATFORM_WINDOWS
		#ifdef  QC_BUILD_DLL
				#define	QC_API	__declspec(dllexport)
		#else
				#define	QC_API	__declspec(dllimport)
		#endif
#else
		#error	QC only supports Windows!
#endif