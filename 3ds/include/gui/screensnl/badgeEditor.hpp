	/*
*   This file is part of LeafEdit
*   Copyright (C) 2019-2020 DeadPhoenix8091, Epicpkmn11, Flame, RocketRobz, StackZ, TotallyNotGuy
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*   Additional Terms 7.b and 7.c of GPLv3 apply to this file:
*       * Requiring preservation of specified reasonable legal notices or
*         author attributions in that material or in the Appropriate Legal
*         Notices displayed by works containing it.
*       * Prohibiting misrepresentation of the origin of that material,
*         or requiring that modified versions of such material be marked in
*         reasonable ways as different from the original version.
*/

#ifndef BADGEEDITOR_HPP
#define BADGEEDITOR_HPP

#include "common/structs.hpp"

#include "gui/screens/screen.hpp"

#include <vector>

class BadgeEditor : public Screen
{
public:
	void Draw(void) const override;
	void Logic(u32 hDown, u32 hHeld, touchPosition touch) override;

private:
	int selectedBadge = 0;
	u8 setAll();

	void DrawBadges(void) const;

	std::vector<Structs::ButtonPos> badgeTouch = {
		{3, 33, 40, 40, -1}, // Badge 1.
		{58, 33, 40, 40, -1}, // Badge 2.
		{113, 33, 40, 40, -1}, // Badge 3.
		{168, 33, 40, 40, -1}, // Badge 4.
		{223, 33, 40, 40, -1}, // Badge 5.
		{278, 33, 40, 40, -1}, // Badge 6.

		{3, 78, 40, 40, -1}, // Badge 7.
		{58, 78, 40, 40, -1}, // Badge 8.
		{113, 78, 40, 40, -1}, // Badge 9.
		{168, 78, 40, 40, -1}, // Badge 10.
		{223, 78, 40, 40, -1}, // Badge 11.
		{278, 78, 40, 40, -1}, // Badge 12.

		{3, 123, 40, 40, -1}, // Badge 13.
		{58, 123, 40, 40, -1}, // Badge 14.
		{113, 123, 40, 40, -1}, // Badge 15.
		{168, 123, 40, 40, -1}, // Badge 16.
		{223, 123, 40, 40, -1}, // Badge 17.
		{278, 123, 40, 40, -1}, // Badge 18.

		{3, 168, 40, 40, -1}, // Badge 19.
		{58, 168, 40, 40, -1}, // Badge 20.
		{113, 168, 40, 40, -1}, // Badge 21.
		{168, 168, 40, 40, -1}, // Badge 22.
		{223, 168, 40, 40, -1}, // Badge 23.
		{278, 168, 40, 40, -1}, // Badge 24.
	};

	std::vector<Structs::ButtonPos> setPos = {
		{100, 45, 120, 30, -1}, // None.
		{100, 85, 120, 30, -1}, // Bronze.
		{100, 125, 120, 30, -1}, // Silver.
		{100, 165, 120, 30, -1}, // Gold.
	};
};

#endif