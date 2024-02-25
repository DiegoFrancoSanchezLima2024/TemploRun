#pragma once
class Escenario
{
private:
	float posicionX, posicionY, tiempo, velocidad;
	int clima, iluminacion, sonido, dureza, tamanio, danio;
public:
	void PosicionCamara(float posicionX, float posicionY);
	void Velocidad(float tiempo);
	void EstadoEscenario(int climia, int iluminacion, int sonido);
	void Obstaculos(float velosicidad, int dureza, int tamano, int danio);
};

