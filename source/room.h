#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>

#include "types.h"

struct RoomDescription
{
	std::string title;
	std::string description;
};

struct Room
{
	RoomDescription description;
	std::vector<u32> exits;
};

void print_room(Room* room);

#endif // ROOM_H