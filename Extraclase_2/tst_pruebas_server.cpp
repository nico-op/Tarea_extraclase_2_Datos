#include "p1_server.h"
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include <gmock/gmock.h>

#include <iostream>

using namespace testing;
using :: testing :: AtLeast;
using :: testing :: Return;
using :: testing :: _;


class client_test{
public:
    virtual int button_pressed(){
        int button_pressed = 30;
        return button_pressed;
    }
};


class Mock_class: public client_test{
public:

    MOCK_METHOD0(prueba, int());
    MOCK_METHOD0(button_pressed, int());
};



TEST(Pruebas_extraclase_1, Pruebas_server)
{
    Mock_class mocks;
    Server *servidor = new Server;
    servidor->random_array();
    for (int n = 0; n<18;n++){
        EXPECT_CALL(mocks, button_pressed).Times(1).WillOnce(Return(n));
        int button_pressed = mocks.button_pressed();
        servidor->button_pressed = button_pressed;
        int check =servidor->logic();
        EXPECT_TRUE((check >=0) && (check <= 8));
    }
}


TEST(Pruebas_extraclase_2, Pruebas_server)
{
    Server *servidor = new Server;
    servidor->random_array();
    int check_pos0 = servidor->ingame_card[0];
    int check_pos1 = servidor->ingame_card[1];
    int check_pos2 = servidor->ingame_card[2];
    EXPECT_TRUE((check_pos0 != 0) || (check_pos1 != 0) || (check_pos2 != 1)); //int ingame_card[18]={0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8};

}



TEST(Pruebas_extraclase_4, Pruebas_server)
{
    Server *servidor = new Server;
    for (int s=0; s<3;s++){
        servidor->tarjeta_en_memoria[s]->set_ID(s);
    }
    int check = servidor->check_pages(2);
    EXPECT_TRUE(check == 2);
}



TEST(Pruebas_extraclase_5, Pruebas_server)
{
    Server *servidor = new Server;
    servidor->pareja_1 = 2;
    servidor->pareja_2 = 2;
    int check = servidor->hay_pareja();
    EXPECT_TRUE(check == 2);
}



TEST(Pruebas_extraclase_6, Pruebas_server)
{
    Server *servidor = new Server;
    servidor->add_tarjeta(2);
    int check = servidor->tarjeta_en_memoria[0]->get_ID();
    EXPECT_TRUE(check ==2);
}








