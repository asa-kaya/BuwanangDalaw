#pragma once

#include <string>
#include <vector>

#include "Room.h"

class House {
private:
	std::string code;
	std::string name;
	std::string address;
	
	std::vector<Room> roomList;
	int roomCount;

	static int count;

public:
	// constructor
	House(std::string code, std::string name, std::string address);

	// setters
	void setCode(std::string code);
	void setName(std::string name);
	void setAddress(std::string address);

	// getters
	std::string getCode();
	std::string getName();
	std::string getAddress();

	// static functions
	static void add(std::vector<House>& houses);
	static void viewAll(std::vector<House>& houses);
	static House& search(std::vector<House>& houses);
	static House& search(std::vector<House>& houses, std::string houseCode);

	void displayInfo();

	// room functions
	void addRoom();
	void addRoom(Room& r);
	void viewRooms();

};