//
// Created by karl on 23.03.21.
//

#include <stdio.h>

#include "level.h"
#include "clear_console.h"
#include "stall_for_milliseconds.h"

int main()
{
	Level level;
	level.rooms.resize(3);

	level.rooms[0].description.title = "Room 1";
	level.rooms[0].description.description = "This is room 1.";
	level.rooms[0].exits.push_back(1);
	level.rooms[0].exits.push_back(2);
	
	level.rooms[1].description.title = "Room 2";
	level.rooms[1].description.description = "This is room 2.";
	level.rooms[1].exits.push_back(0);
	level.rooms[1].exits.push_back(2);

	level.rooms[2].description.title = "Room 3";
	level.rooms[2].description.description = "This is room 3.";
	level.rooms[2].exits.push_back(0);
	level.rooms[2].exits.push_back(1);

	b32 exitGame = false;
	u32 currentRoom = 0;

	while (!exitGame)
	{
		print_room(&level.rooms[currentRoom]);

		printf("Enter the index of the doorway you'd like to go through. There are %d doorways.\n", (u32)level.rooms[currentRoom].exits.size());

		char input = getchar();
		while (getchar() != '\n') {} // We need to flush the getchar buffer.

		const u32 stallTime = 1000;

		if (!isdigit(input))
		{
			clear_console();
			printf("Must be a number.\n");
			stall_for_milliseconds(stallTime);
			continue;
		}

		u32 selection = (u32)(input - '0');

		if (selection >= level.rooms[currentRoom].exits.size())
		{
			clear_console();
			printf("Invalid index.\n", (u32)level.rooms[currentRoom].exits.size());
			stall_for_milliseconds(stallTime);
			continue;
		}

		currentRoom = level.rooms[currentRoom].exits[selection];
	}

    return 0;
}