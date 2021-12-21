#include <iostream>
#include "game_manager.h"


int main()
{
    // int command = 0;
    Player player;
    string name_of_room;
    static User mod_user;
    Game_manager::get_instance();
    std::string login, pass;
    // int id_login;
    // std::map<int, class Player>* play;
    // std::map<int, class Room>* room;
    Game_manager::get_instance()->add_player("kabachok", "123");
    Game_manager::get_instance()->add_player("test_sign_in", "123");
    std::pair<int, std::string> result = Game_manager::get_instance()->create_room("test_room", 
                      *(Game_manager::get_instance()->get_player(16)));

    cout << get<0>(result) << endl;
    cout << get<1>(result) << endl;
    cout << Game_manager::get_instance()->get_room(1)->is_ready() << endl;

    cout << Game_manager::get_instance()->get_room(1)->add_player(*Game_manager::get_instance()->get_player(3)) << endl;

    cout << Game_manager::get_instance()->get_room(1)->get_word() << endl;

    Game_manager::get_instance()->get_room(1)->change_word("домовладелец");

    cout << Game_manager::get_instance()->get_room(1)->get_word() << endl;

    Game_manager::get_instance()->check_answer(3, 1, "дом");
    Game_manager::get_instance()->check_answer(16, 1, "владелИц");
    cout << "winner: "<<Game_manager::get_instance()->get_room(1)->get_winner() << endl;
    // while(true)
    // {
    //   cin >> command;
    //   switch(command)
    //   {
    //     case 1:
    //       {
    //       cin >> login >> pass;
    //       id_login = Game_manager::get_instance()->add_player(login, pass);
    //       if (id_login != -1)
    //       {
    //         cout << "Succesfully login" << endl;
    //       }
    //       else 
    //       cout << "fuck" << endl;
    //       }
    //       break;
    //     case 2:
    //       play = Game_manager::get_instance()->view_all_players();
    //       room = Game_manager::get_instance()->view_all_rooms();
    //       for (auto i : (*play))
    //       {
    //         cout << "Player: " <<i.second.get_login()<< i.second.get_id() << endl;
    //       }
    //       for (auto i : (*room))
    //       {
    //         cout << "Room: " << i.second.get_name() << i.second.get_id() << endl;
    //       }
    //      break;
    //     case 3:
    //       {
    //       cin >> id_login;
    //        if (Game_manager::get_instance()->create_room("test_room", 
    //                   (Game_manager::get_instance()->get_player(id_login))))
    //         {
    //           cout << "succesfully created";
    //         }
    //         else 
    //         {
    //           cout << "fuck" << endl;
    //         }
    //       }
    //       break;
    //     case 4:
    //       {
    //         int id_login, id_room;
    //         cin >> id_login >> id_room;
    //         // if (Game_manager::get_instance()->join_room(id_login, id_room))
    //         // {
    //           // cout << "succes" << endl;
    //         // }
    //         // Player to_add = 
    //         cout << Game_manager::get_instance()->get_player(id_login).get_login();
    //         // Game_manager::get_instance()->get_room(id_room).add_player(to_add);
    //         std::pair<Player, std::string> result = Game_manager::get_instance()->get_room(id_room).get_players();
    //         std::cout << get<0>(result).get_login()  << "!!!"<< std::endl;
    //         std::cout << get<1>(result)<< std::endl;
    //         cout << Game_manager::get_instance()->get_room(id_room).get_opp_nick() << endl;
    //       }
          
    //       break;
    //     case 6:
    //       {
    //         int id_room;
    //         // cout << Game_manager::get_instance()->get_word();
    //         cin >> id_room;
    //         if (Game_manager::get_instance()->get_room(id_room).start_game())
    //         {
    //           cout << Game_manager::get_instance()->get_word();
    //           while (true)
    //           {
    //             int id_login;
    //             std::string word; 
    //             cin >> id_login;
    //             if (id_login == 999)
    //             {
    //               break;
    //             }
    //             cin >> word;
    //             std::cout << Game_manager::get_instance()->check_answer(id_login, word);
    //           }
    //           cout << Game_manager::get_instance()->get_room(id_room).get_winner() << endl;
    //         }
    //       }
    //       break;
    //     default:
    //       cout<<"Error, bad input, quitting\n";
    //       break;
    //   }
    // }
}