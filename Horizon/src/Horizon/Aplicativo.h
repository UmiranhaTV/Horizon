#pragma once
#include "Nucleo.h"

namespace Horizon {

	class HORIZON_API Aplicativo
	{
	public:
		Aplicativo();
		virtual ~Aplicativo();

		void Run();
	};

	Aplicativo* CriarAplicativo();

}

