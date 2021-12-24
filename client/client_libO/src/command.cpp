#include "command.h"

#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <map>
#include <boost/asio.hpp>
#include <boost/json.hpp>
#include <boost/json/src.hpp>

// #include "player.h"

using namespace boost::json;
using boost::asio::ip::tcp;

Command::Command(boost::asio::io_context &io_context): client(io_context) {
  client.connect(std::string("127.0.0.1"), std::string("8000"));
}

Profile Command::login(const std::string& user, const std::string& password) {
  value jv = {
      { "type", "login" },
      { "info", {
          { "user", user },
          { "password", password }
      } }
  };

  std::string json = client.send(std::string(serialize(jv)));

  std::cout << json << std::endl;

  object const& data = safly_read(json);

  if (!value_to<int>(data.at("type"))) throw std::invalid_argument("User not found");

  return Profile(value_to<std::string>(data.at("info").at("user")));
}

std::pair<int, std::string> Command::all_rooms() {
  value jv = {
      { "type", "rooms" }
  };

  std::string json = client.send(std::string(serialize(jv)));

  object const& data = safly_read(json);

  std::pair<int, std::string> pa(value_to<int>(data.at("info").at("id")), value_to<std::string>(data.at("info").at("name")));

  return pa;
}

std::string Command::create_room(std::string &name) {
  value jv = {
      { "type", "create_room" },
      { "info", {
          { "name", name }
      } }
  };

  std::string json = client.send(std::string(serialize(jv)));

  std::cout << json << std::endl;

  object const& data = safly_read(json);

  return value_to<std::string>(data.at("info").at("word"));
}

int Command::is_ready() {
  value jv = {
      { "type", "is_ready" }
  };

  std::string json = client.send(std::string(serialize(jv)));

  object const& data = safly_read(json);

  return value_to<int>(data.at("type"));
}

int Command::check_word(std::string &str) {
  value jv = {
      { "type", "check_word" },
      { "info", {
          { "word", str }
      } }
  };

  std::string json = client.send(std::string(serialize(jv)));

  std::cout<< json << std::endl;

  object const& data = safly_read(json);

  return value_to<int>(data.at("type"));
}

std::string Command::get_winner() {
  value jv = {
      { "type", "get_winner" }
  };

  std::string json = client.send(std::string(serialize(jv)));

  object const& data = safly_read(json);

  return value_to<std::string>(data.at("info").at("user"));
}

std::string Command::join_room(int id) {
  value jv = {
      { "type", "join_room" },
      { "info", {
          { "id", id }
      } }
  };

  std::string json = client.send(std::string(serialize(jv)));

  object const& data = safly_read(json);

  return value_to<std::string>(data.at("info").at("word"));
}

object const Command::safly_read(std::string& json) {
  value json_data;
  boost::json::error_code ec;

  try {
    json_data = parse(json, ec);
  } catch(std::bad_alloc const& e) {
    throw std::invalid_argument("Failed parsing");
  }

  if (ec) {
    throw std::invalid_argument("Failed parsing");
  }

  return json_data.as_object();
}