#include "StdAfx.h"
#include "PentagonoVista.h"

PentagonoVista::PentagonoVista(sEvento estadoEvento) : PoligonoRegularVista(estadoEvento){
	this->tipo = PENTAGONO;
	this->lados = LADOS_PENTAGONO;

	this->calcularVertices();

	this->rutaTextura = "imagenes/TexturaPentagono.png";

	Logger::getLogger()->debug( "Pentagono Vista creado" );
}