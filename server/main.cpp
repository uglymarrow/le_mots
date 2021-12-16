#include <iostream>
#include "game_manager.h"


int main()
{
    int command = 0;
    Player player;
    string name_of_room;
    static User mod_user;
    std::string login, pass;
    int id_login;
    std::map<int, class Player> play;
    std::map<int, class Room> room;
    while(true)
    {
      cin >> command;
      switch(command)
      {
        case 1:
          {
          cin >> login >> pass;
          id_login = Game_manager::get_instance()->add_player(login, pass);
          if (id_login != -1)
          {
            cout << "Succesfully login" << endl;
            // if (Game_manager::get_instance()->create_room("test_room", 
                      // Game_manager::get_instance()->get_player(id_login)))
            // {
              // cout << "succesfully created";
            // }
          }
          else 
          cout << "fuck" << endl;
          }
          break;
        case 2:
          play = Game_manager::get_instance()->view_all_players();
          room = Game_manager::get_instance()->view_all_rooms();
          for (auto i : play)
          {
            cout << "Player: " <<i.second.get_login()<< i.second.get_id() << endl;
          }
          for (auto i : room)
          {
            cout << "Room: " << i.second.get_name() << i.second.get_id() << endl;
          }
         break;
        case 3:
          {
          cin >> id_login;
           if (Game_manager::get_instance()->create_room("test_room", 
                      Game_manager::get_instance()->get_player(id_login)))
            {
              cout << "succesfully created";
            }
          }
          break;
        case 4:
          {
            int id_login, id_room;
            cin >> id_login >> id_room;
            if (Game_manager::get_instance()->join_room(id_login, id_room))
            {
              cout << "succes" << endl;
            }
            std::map<int, class Player> players_room = Game_manager::get_instance()->get_room(id_room).get_players();
            for (auto i : players_room)
            {
              cout << i.second.get_login() << endl;
            }
          }
          
          break;
        case 5:
          {
            int id_room;
            cin >> id_room;
            Game_manager::get_instance()->get_room(id_room).view_players();
          }
          break;
        case 6:
          {
            int id_room;
            // cout << Game_manager::get_instance()->get_word();
            cin >> id_room;
            if (Game_manager::get_instance()->get_room(id_room).start_game())
            {
              cout << Game_manager::get_instance()->get_word();
              while (true)
              {
                int id_login;
                std::string word; 
                cin >> id_login;
                if (id_login == 999)
                {
                  break;
                }
                cin >> word;
                std::cout << Game_manager::get_instance()->check_answer(id_login, word);
              }
              cout << Game_manager::get_instance()->get_room(id_room).get_winner().get_login()
                   << " "
                   << Game_manager::get_instance()->get_room(id_room).get_winner().get_score().current_score;
            }
          }
          break;
        default:
          cout<<"Error, bad input, quitting\n";
          break;
      }
    }
}