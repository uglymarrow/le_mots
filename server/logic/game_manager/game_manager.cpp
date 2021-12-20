#include "game_manager.h"

bool operator==(const std::pair<const int, Player>& rhs, const Player& lhs ){
    return (std::get<1>(rhs).get_login() == lhs.get_login()
    &&
    std::get<1>(rhs).get_pass() == lhs.get_pass());
  }

bool operator==(const std::pair<const int, Room>& rhs, const Room& lhs ){
    return (std::get<1>(rhs).get_name() == lhs.get_name()
    &&
    std::get<1>(rhs).get_id() == lhs.get_id());
}

void Game_manager::run_game()
{

}

Game_manager* Game_manager::instance(nullptr);

Game_manager* Game_manager::get_instance() 
{
     if (instance == nullptr) {//если не было выделено, то создаем
        instance = new Game_manager();
    }
    return instance;
}

Player Game_manager::login(const string& login, const string& password)
{
  User user_model;
  return user_model.login(login, password);
}

bool Game_manager::create_room(const std::string& name, const Player& creator, const std::string& password)
{
  int id = Game_manager::get_instance()->count_rooms() + 1; 
  if (!is_login(creator.get_id())) 
    return false;
  if (password == "-")
  {
    Room new_room(name, id, creator);
    if (rooms.size() == 0)
    {
      rooms.emplace(std::make_pair(1, new_room));
      return true;
    }
    if (std::find(rooms.begin(), rooms.end(), new_room) != rooms.end())
    {
      cout << id << endl;
      return false;
    }
    else 
    {
      rooms.emplace(std::make_pair(id, new_room));
      return true;
    }
  }
  else
  {
    Room new_room(name, password, id, creator);
    if (std::find(rooms.begin(), rooms.end(), new_room) != rooms.end())
    {
      return false;
    }
    else 
    {
      rooms.emplace(std::make_pair(id, new_room));
      return true;
    }
  }
}

int Game_manager::add_player(const std::string& login, const std::string& password)
{
  User user_model;
  try {
    Player to_login;
    to_login = user_model.login(login, password);
    if (std::find(players.begin(), players.end(), to_login) != players.end())
    {
      return -1;
    }
    else 
    {
      players.insert(std::make_pair(to_login.get_id(), to_login));
      return to_login.get_id();
    }
  } catch (std::exception &e) 
  {
    return -1;
  };
}


bool Game_manager::is_login(const int& id)
{
  if (players.find(id) != players.end())
    return true;
  else
    return false;
}

bool Game_manager::is_room(const int& id)
{
  if (rooms.find(id) != rooms.end())
    return true;
  else
    return false;
}

bool Game_manager::update_stat(const int& id, const Stat& stat)
{
  if (is_login(id)){
  try{
    User mod_user;
    if (mod_user.update_stat(players[id].get_login(), stat.games, stat.win_game))
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  catch (std::exception &e)
  {
    return false;
  }
  }
  else 
    return false;
}

bool Game_manager::check_answer(const int& login_id, const int& room_id, const std::string& word)
{
  if (is_login(login_id))
  {
    Word mod_word;
    if (mod_word.check_word(word))
    {
      Game_manager::get_instance()->get_room(room_id)->get_player_id(login_id)->refresh_score();
      return true;
    }
    else
      return false;
  }
  else 
    return false;
}

bool Game_manager::join_room(const int& player_id, const int& room_id)
{
  if (is_login(player_id))
  {
    if (is_room(room_id))
    {
      // if (Game_manager::get_instance()->get_room(room_id).add_player(Game_manager::get_instance()->get_player(player_id)))
      // {
        // Room buf = Game_manager::get_instance()->get_room(room_id);
        // Room new_one(buf.get_name(), buf.get_id(), buf.get_creator(), Game_manager::get_instance()->get_player(player_id));
        // rooms.erase(room_id);
        // rooms.emplace(std::make_pair(room_id, new_one));
        // cout << Game_manager::get_instance()->get_player(player_id).get_login() << std::endl; 
        // return true;
      // }
      // else 
        return false;
    }
    else 
      return false;
  }
    else 
      return false;
}

Player* Game_manager::get_player(const int& id)
{
  return &players[id];
}

Room* Game_manager::get_room(const int& id)
{
  return &rooms[id];
}

std::map<int, Room>* Game_manager::view_all_rooms()
{
  return &rooms;
}

Game_manager::~Game_manager()
{
     delete instance;
}

std::map<int, Player>* Game_manager::view_all_players()
{
  return &players;
}

int Game_manager::count_rooms()
{
  return (*Game_manager::get_instance()->view_all_rooms()).size();
}

std::string Game_manager::get_word()
{
  Word mod_word;
  return mod_word.get_word();
}

