#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Horizon::Aplicativo* Horizon::CriarAplicativo();


int main(int argc, char** argv) {

	Horizon::Log::Init();

	HZ_CORE_WARN("Log Inicializado!");
	int a = 5;
	HZ_INFO("Aoba! Var={0}", a);

	auto app = Horizon::CriarAplicativo();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS

