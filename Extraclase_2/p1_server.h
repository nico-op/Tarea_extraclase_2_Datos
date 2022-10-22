#ifndef SERVER_TEST_H
#define SERVER_TEST_H

//#include <QMainWindow>
#include <stdlib.h>
#include "tarjetas.h"
#include <unistd.h>
//#include <QString>


class Server {


public:
    void start();

    void set_all_cards();

    void random_array();

    void create_matrix(int mixed_list[]);

    bool used(bool usados[]);

    int logic();

    int hay_pareja();

    int check_pages(int num);

    void add_tarjeta(int key);

    void update_labels();
/*
    QString tarjetas_memoria_to_string();
    QString tarjetas_disc_to_string();
    QString memoria_en_uso();
*/
    int ingame_card[18]={0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8};

    int matriz_posiciones[3][6]= {{30,30,30,30,30,30},
                                  {30,30,30,30,30,30},
                                  {30,30,30,30,30,30}};


    int pareja_1 = 30;
    int pareja_2 = 30;
    int button_pressed=30;

    tarjetas* tarjeta_0 = new tarjetas;
    tarjetas* tarjeta_1 = new tarjetas;
    tarjetas* tarjeta_2 = new tarjetas;
    tarjetas* tarjeta_en_memoria[3]={tarjeta_0,tarjeta_1,tarjeta_2};  //tercera parte de la cantidad total de tarjeta


private:
    //Ui::Server *ui;
    //Server_socket servidor;

    char *game_images_path [9] = {"Imagenes 100x100/bear.png","Imagenes 100x100/fox.png",
                                   "Imagenes 100x100/leopard.png","Imagenes 100x100/lion.png",
                                   "Imagenes 100x100/mouse.png","Imagenes 100x100/panda.png",
                                  "Imagenes 100x100/pig.png","Imagenes 100x100/rabbit.png",
                                  "Imagenes 100x100/tiger.png"};

    char check_image[40000];
    int IDs[9] = {0,1,2,3,4,5,6,7,8};











    int page_hits = 0;
    int page_faults = 0;

    bool jugador_1_playing = true;
    int puntaje_player1 = 0;
    int puntaje_player2 = 0;


};
#endif // SERVER_SOCKET_H
