#include "p1_server.h"
#include <unistd.h>

void Server::random_array(){
    int new_array[18];
    bool used_element[18];
    int i = 0;
    int playing_cards[18];
    memcpy(playing_cards,ingame_card,sizeof(ingame_card));
    //srand(time(0));
    for(int x = 0; x<18;x++){
        used_element[x]=false;
        new_array[x]=1234;

    }

    while (new_array[17] == 1234){
        //qDebug()<<"12344444";
        int num = rand()%18;
        if (!used_element[num]){
            new_array[i] = playing_cards[num];
            used_element[num]=true;
            i++;
        }
    }

    memcpy(ingame_card,new_array,sizeof(new_array));
    this->create_matrix(new_array);
}

void Server::create_matrix(int mixed_list[]){
    int matrix_created[3][6];
    int num = 0;
    for(int i = 0 ; i<3;i++){
        for(int j = 0; j<6; j++){
            matrix_created[i][j] = mixed_list[num];
            //std::cout << matrix_created[i][j];
            num++;
        }
    }
    memcpy(matriz_posiciones,matrix_created,sizeof(matrix_created));
}

int Server::logic(){
        //Sleep(30);
        if(button_pressed==0){
            //servidor.reset_button_pressed();
            int tarjeta_pedida = matriz_posiciones[0][0];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;
                //servidor.send_data(tarjeta_en_memoria[posicion_tarjeta]->get_image());
                //qDebug()<<"PAGE HIT!";
            }else{
                this->add_tarjeta(tarjeta_pedida);
                page_faults++;
                posicion_tarjeta = 0;
                //servidor.send_data(tarjeta_en_memoria[posicion_tarjeta]->get_image());
                //qDebug()<<"PAGE FAULT";
            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;

            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
            return tarjeta_pedida;
        }

        if(button_pressed==1){
            //servidor.reset_button_pressed();
            int tarjeta_pedida = matriz_posiciones[0][1];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;


            }else{
                this->add_tarjeta(tarjeta_pedida);
                 posicion_tarjeta = 0;
                 page_faults++;

            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;

            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
           return tarjeta_pedida;
        }

        if(button_pressed==2){
            //servidor.reset_button_pressed();
            int tarjeta_pedida = matriz_posiciones[0][2];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;

            }else{
                this->add_tarjeta(tarjeta_pedida);
                posicion_tarjeta = 0;
                page_faults++;

            }

            if(pareja_1==30){
                pareja_1=tarjeta_pedida;

            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
            return tarjeta_pedida;
        }

        if(button_pressed==3){
            //servidor.reset_button_pressed();
            int tarjeta_pedida = matriz_posiciones[0][3];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;

            }else{
                this->add_tarjeta(tarjeta_pedida);
                posicion_tarjeta = 0;
                page_faults++;
            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;
            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
           return tarjeta_pedida;
        }

        if(button_pressed==4){
            //servidor.reset_button_pressed();
            int tarjeta_pedida = matriz_posiciones[0][4];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;

            }else{
                this->add_tarjeta(tarjeta_pedida);
                posicion_tarjeta = 0;
                page_faults++;

            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;
            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
            return tarjeta_pedida;
        }

        if(button_pressed==5){

            int tarjeta_pedida = matriz_posiciones[0][5];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;


            }else{
                this->add_tarjeta(tarjeta_pedida);
                 posicion_tarjeta = 0;
                 page_faults++;

            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;
            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
            return tarjeta_pedida;
        }

        if(button_pressed==6){

            int tarjeta_pedida = matriz_posiciones[1][0];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;


            }else{
                this->add_tarjeta(tarjeta_pedida);
                 posicion_tarjeta = 0;
                 page_faults++;

            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;
            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
            return tarjeta_pedida;
        }

        if(button_pressed==7){
            int tarjeta_pedida = matriz_posiciones[1][1];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;


            }else{
                this->add_tarjeta(tarjeta_pedida);
                 posicion_tarjeta = 0;
                 page_faults++;

            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;
            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
            return tarjeta_pedida;
        }

        if(button_pressed==8){

            int tarjeta_pedida = matriz_posiciones[1][2];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;



            }else{
                this->add_tarjeta(tarjeta_pedida);
                 posicion_tarjeta = 0;
                 page_faults++;

            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;
            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
            return tarjeta_pedida;
        }

        if(button_pressed==9){

            int tarjeta_pedida = matriz_posiciones[1][3];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;


            }else{
                this->add_tarjeta(tarjeta_pedida);
                 posicion_tarjeta = 0;
                 page_faults++;

            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;
            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
            return tarjeta_pedida;
        }

        if(button_pressed==10){

            int tarjeta_pedida = matriz_posiciones[1][4];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;



            }else{
                this->add_tarjeta(tarjeta_pedida);
                 posicion_tarjeta = 0;
                 page_faults++;

            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;

            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;

                }
            }
            return tarjeta_pedida;
        }

        if(button_pressed==11){

            int tarjeta_pedida = matriz_posiciones[1][5];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;


            }else{
                this->add_tarjeta(tarjeta_pedida);
                 posicion_tarjeta = 0;
                 page_faults++;

            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;
            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;

                }
            }
            return tarjeta_pedida;
        }

        if(button_pressed==12){

            int tarjeta_pedida = matriz_posiciones[2][0];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;


            }else{
                this->add_tarjeta(tarjeta_pedida);
                 posicion_tarjeta = 0;
                 page_faults++;

            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;
            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
            return tarjeta_pedida;
        }

        if(button_pressed==13){

            int tarjeta_pedida = matriz_posiciones[2][1];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;


            }else{
                this->add_tarjeta(tarjeta_pedida);
                 posicion_tarjeta = 0;
                 page_faults++;

            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;

            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
            return tarjeta_pedida;
        }

        if(button_pressed==14){

            int tarjeta_pedida = matriz_posiciones[2][2];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;



            }else{
                this->add_tarjeta(tarjeta_pedida);
                 posicion_tarjeta = 0;
                 page_faults++;

            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;
            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
            return tarjeta_pedida;
        }

        if(button_pressed==15){

            int tarjeta_pedida = matriz_posiciones[2][3];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;



            }else{
                this->add_tarjeta(tarjeta_pedida);
                 posicion_tarjeta = 0;
                 page_faults++;

            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;
            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
            return tarjeta_pedida;
        }

        if(button_pressed==16){

            int tarjeta_pedida = matriz_posiciones[2][4];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;



            }else{
                this->add_tarjeta(tarjeta_pedida);
                 posicion_tarjeta = 0;
                 page_faults++;

            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;
            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
            return tarjeta_pedida;
        }

        if(button_pressed==17){

            int tarjeta_pedida = matriz_posiciones[2][5];
            int posicion_tarjeta = check_pages(tarjeta_pedida);
            if(posicion_tarjeta !=30){
                page_hits++;



            }else{
                this->add_tarjeta(tarjeta_pedida);
                 posicion_tarjeta = 0;
                 page_faults++;

            }
            if(pareja_1==30){
                pareja_1=tarjeta_pedida;
            }else{
                if(pareja_2==30){
                    pareja_2=tarjeta_pedida;
                }
            }
            return tarjeta_pedida;
        }

}

int Server::check_pages(int num){

    for (int f = 0; f < std::size(tarjeta_en_memoria); f++){
        if (tarjeta_en_memoria[f]->get_ID() == num){
            return f;
        }
    }

    return 30;
}


int Server::hay_pareja(){

        if(pareja_1 !=30 && pareja_2 !=30 && pareja_1 == pareja_2){
            //servidor.send_data("check");
            //Sleep(100);
            int prueba1 = pareja_1;

            pareja_1 = 30;
            pareja_2 = 30;
            return prueba1;

        }else{
            pareja_1 = 30;
            pareja_2 = 30;
            if(jugador_1_playing){
                jugador_1_playing = false;
            }else{
                jugador_1_playing = true;
            }
        }
}


void Server::add_tarjeta(int key){

    tarjetas* temp = new tarjetas;
    temp->set_ID(key);

    delete tarjeta_en_memoria[std::size(tarjeta_en_memoria)-1];

    for (int w = std::size(tarjeta_en_memoria)-1 ; w >0 ; w--){
        tarjeta_en_memoria[w] = tarjeta_en_memoria[w-1];
    }
    tarjeta_en_memoria[0]=temp;


}

