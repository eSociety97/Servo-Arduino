/*************************************************Capitulo 6 - Servomotores********************************************************
*                                                                                                                                 *
*     En este sexto capitulo aprenderemos a utilizar los servomotores. Para utilizar un servomotor necesitamos conectarlo         *                                                                      *
*  a uno de los pines PWM debido a su funcionamiento ya que con un pin digital que nos distribuye un voltaje continuo de 5V.      *
*  Tambien es importante saber que los servomotores solo pueden ser utilizados como maximo 2 con el voltaje de arduino, si se     *
*  necesitan usar mas de 2 es necesario una fuente externa y unificar las tierras (GND) entre el arduino y la fuente.             *
*                                                                                                                                 *
*  Para lograr esto necesitaremos:                                                                                                *
*                                                                                                                                 *
*  -Placa arduino Uno                                                                                                             *
*  -1 Servomotor.                                                                                                                 *
*  -Protoboard                                                                                                                    *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                              Facebook: ESociety *
*                                                                                                              GitHub: eSociety97 *
*                                                                                                                                 *
*                                                         #NuncaDejenDeCrear                                                      *
***********************************************************************************************************************************/ 

#include <Servo.h> //Importamos la libreria de Servo

Servo servo1;//Declaramos nuestro objeto servo

int pinServo = 6; //Declaramos la variable que usaremos para el pin 6

void setup(){
  servo1.attach(6);// Declaramos el pin 6 como salida al servo
  }
  void loop(){
    servo1.write(0); //Posicionamos el servo a 0 grados
    delay(3000); //generamos una pausa de 3 segundos
    servo1.write(180); //Posicionamos el servo a 180 grados
    delay(3000); //Generamos una pausa de 3 segundos
    }
