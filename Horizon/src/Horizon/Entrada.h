#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Horizon::Aplicativo* Horizon::CriarAplicativo();


int main(int argc, char** argv) {
	auto app = Horizon::CriarAplicativo();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS

