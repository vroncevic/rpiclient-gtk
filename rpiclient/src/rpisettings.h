/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * rpisettings.h
 * Copyright (C) 2016 Vladimir Roncevic <elektron.ronca@gmail.com>
 * 
 * rpiclient-gtk is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * rpiclient-gtk is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __RPISETTINGS_H
#define __RPISETTINGS_H

#include "resource.h"

#define MENU_ITEM_SETTINGS   "Settings"

typedef struct {
	GtkWidget *settings_subitem;
} RPISettings;

RPISettings * new_rpisettings();
void show_rpisettings(RPISettings *rpisettings_ptr);
void hide_rpisettings(RPISettings *rpisettings_ptr);
void destroy_rpisettings(RPISettings *rpisettings_ptr);

#endif

