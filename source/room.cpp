#include "room.h"

#include "clear_console.h"

void print_room(Room* room)
{
	clear_console();
	printf("%s\n\n", room->description.title.c_str());
	printf("%s\n\n", room->description.description.c_str());
}