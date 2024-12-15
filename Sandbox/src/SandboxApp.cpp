#include <Horizon.h>


class Sandbox : public Horizon::Aplicativo {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Horizon::Aplicativo* Horizon::CriarAplicativo() {
	return new Sandbox();
}