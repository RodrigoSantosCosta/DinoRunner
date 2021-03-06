#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include "object.h"

using namespace std;

#ifndef PTERODACTYLUS_H
#define PTERODACTYLUS_H

/// CLASSE PTERODACTYLUS ///====================================================================================///
/*  Descrição: 
 *    classe referente ao objeto pterodáctilo, um dos inimigos mais ferozes de qualquer dinossauro que
 *    deseje cruzar o deserto correndo.
 */
///==================///========================================================================================///
class Pterodactylus:public Object{
public:
    // Prototipação do Construtor:
    Pterodactylus();
    Pterodactylus(float currentX, float currentY, float currentZ);
    Pterodactylus(float currentX, float currentY, float currentZ,
                  bool  rotateX , bool  rotateY , bool  rotateZ ,
                  float angle   , float newSizeX, float newSizeY, float newSizeZ);

    // Prototipação dos Métodos de Propósito Geral:
    void flyAction();

    // Métodos Get:
    float getConstantVariationX();

    // Métodos Set:
    void setConstantVariationX(float newVariationX);

private:
    // Atributos que guardam informações sobre a variação
    // do deslocamento objeto em determinado instante no respectivo eixo
    float constantVariationX;       // Variação Atual do movimento
};


// CONSTRUTOR //---------------------------------------------------------------------------//

Pterodactylus::Pterodactylus(){
    // Atributos herdados:
    coordinateX = 0.0;
    coordinateY = 0.0;
    coordinateZ = 0.0;

    rotationX = false;
    rotationY = false;
    rotationZ = false;
    rotationAngle = 0.0;

    sizeX = 0.5;
    sizeY = 0.5;
    sizeZ = 0.5;

    planPositiveX =  sizeX/2 + coordinateX;
    planNegativeX = -sizeX/2 + coordinateX;
    planPositiveY =  sizeY/2 + coordinateY;
    planNegativeY = -sizeY/2 + coordinateY;
    planPositiveZ =  sizeZ/2 + coordinateZ;
    planNegativeZ = -sizeZ/2 + coordinateZ;

    collided = false; 

    // Atributos da classe:
    constantVariationX = -0.06;
}

Pterodactylus::Pterodactylus(float currentX, float currentY, float currentZ){
    // Atributos herdados:
    coordinateX = currentX;
    coordinateY = currentY;
    coordinateZ = currentZ;

    rotationX = false;
    rotationY = false;
    rotationZ = false;
    rotationAngle = 0.0;

    sizeX = 0.5;
    sizeY = 0.5;
    sizeZ = 0.5;

    planPositiveX =  sizeX/2 + coordinateX;
    planNegativeX = -sizeX/2 + coordinateX;
    planPositiveY =  sizeY/2 + coordinateY;
    planNegativeY = -sizeY/2 + coordinateY;
    planPositiveZ =  sizeZ/2 + coordinateZ;
    planNegativeZ = -sizeZ/2 + coordinateZ;

    collided = false; 

    // Atributos da Classe:
    constantVariationX = -0.06;
}

Pterodactylus::Pterodactylus(float currentX, float currentY, float currentZ,
                             bool  rotateX , bool  rotateY , bool  rotateZ ,
                             float angle   , float newSizeX, float newSizeY, float newSizeZ){

    // Atributos herdados:
    coordinateX = currentX;
    coordinateY = currentY;
    coordinateZ = currentZ;

    rotationX = rotateX;
    rotationY = rotateY;
    rotationZ = rotateZ;
    rotationAngle = angle;

    sizeX = newSizeX;
    sizeY = newSizeY;
    sizeZ = newSizeZ;

    planPositiveX =  sizeX/2 + coordinateX;
    planNegativeX = -sizeX/2 + coordinateX;
    planPositiveY =  sizeY/2 + coordinateY;
    planNegativeY = -sizeY/2 + coordinateY;
    planPositiveZ =  sizeZ/2 + coordinateZ;
    planNegativeZ = -sizeZ/2 + coordinateZ;

    collided = false;  

    // Atributos da Classe:
    constantVariationX = -0.06;  
}

//------------//---------------------------------------------------------------------------//


// MÈTODOS DE PROPÒSITO GERAL //-----------------------------------------------------------//

/* Método Fly Action:  
 *   Descrição: 
 *     Define o movimento constante do pterodáctilo ao longo do plano XoZ.
 */
void Pterodactylus::flyAction(){
    float velocity;

    // Faz com que a posição seja decrementada de acordo com a variation X:
    coordinateX  = coordinateX + constantVariationX;
}

//----------------------------//-----------------------------------------------------------//


// MÈTODOS GET E SET //--------------------------------------------------------------------//

// Métodos Get:
float Pterodactylus::getConstantVariationX(){
    return constantVariationX;
}

// Métodos Set:
void Pterodactylus::setConstantVariationX(float newConstantVariationX){
    constantVariationX = newConstantVariationX;
}

//-------------------//--------------------------------------------------------------------//

///=================///========================================================================================///

#endif	// PTERODACTYLUS_H