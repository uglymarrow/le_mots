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
    // try
    // {
    //     cout << Game_manager::get_instance()->login("kabachok", "123").get_login() << endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     cout << Game_manager::get_instance()->login("kabachok", "123").get_login() << endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     cout << Game_manager::get_instance()->register_player("test", "123").get_login();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // for (auto i: Game_manager::get_instance()->view_all_players())
    // {
    //     cout << i.second.get_login() << endl;
    // }
    
    
    
    
    // int id_login;
    // std::map<int, class Player>* play;
    // std::map<int, class Room>* room;
    Game_manager::get_instance()->add_player("kabachok", "123");
    Game_manager::get_instance()->add_player("new_kabachok", "123");
    // Game_manager::get_instance()->add_player("test_sign_in", "123");
    std::pair<int, std::string> result = Game_manager::get_instance()->create_room("test_room", 
                      (Game_manager::get_instance()->get_player(3)));

    // cout << get<0>(result) << endl;
    // cout << get<1>(result) << endl;
    // cout << Game_manager::get_instance()->get_room(1)->is_ready() << endl;


    Game_manager::get_instance()->get_room(1)->add_player(Game_manager::get_instance()->get_player(2));

    // cout << Game_manager::get_instance()->get_room(1)->get_creator()->get_login() << endl;
    // cout << Game_manager::get_instance()->get_room(1)->get_opp()->get_login() << endl;

    // cout << Game_manager::get_instance()->get_room(1)->get_word() << endl;

    Game_manager::get_instance()->get_room(1)->change_word("домовладелец");

    // for (auto i: Game_manager::get_instance()->view_all_rooms())
    // {
    //     cout << i.second.get_name() << endl;
    // }

    // cout << "posle udaleniya" << endl;

    // cout << Game_manager::get_instance()->get_room(1)->get_word() << endl;

    // cout << Game_manager::get_instance()->check_answer(2, 1, "дом") << endl;
    // cout << Game_manager::get_instance()->check_answer(2, 1, "дом") << endl;
    // cout << Game_manager::get_instance()->check_answer(3, 1, "дом") << endl;
    // cout << Game_manager::get_instance()->check_answer(3, 1, "дом") << endl;
    // Game_manager::get_instance()->check_answer(3, 1, "дом");
    // cout << Game_manager::get_instance()->get_player(2)->get_score().current_score << endl;
    cout << "winner: "<<Game_manager::get_instance()->get_room(1)->get_winner() << endl;
    cout <<Game_manager::get_instance()->get_room(1)->to_delete() << endl;
    cout << "winner: "<<Game_manager::get_instance()->get_room(1)->get_winner() << endl;
    cout <<Game_manager::get_instance()->get_room(1)->to_delete() << endl;
    // cout << Game_manager::get_instance()->get_player(3)->get_score().current_score << endl;
    // Game_manager::get_instance()->check_answer(3, 1, "лом");
    // Game_manager::get_instance()->check_answer(16, 1, "владелИц");
    // cout << "winner: "<<Game_manager::get_instance()->get_room(1)->get_winner() << endl;
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