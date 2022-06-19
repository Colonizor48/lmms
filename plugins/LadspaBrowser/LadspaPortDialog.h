/*
 * LadspaPortDialog.h - dialog to test a LADSPA plugin
 *
 * Copyright (c) 2006-2007 Danny McRae <khjklujn/at/users.sourceforge.net>
 * 
 * This file is part of LMMS - https://lmms.io
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 */


#ifndef _LADSPA_PORT_DIALOG_H
#define _LADSPA_PORT_DIALOG_H


#include <QDialog>

#include "LadspaManager.h"

namespace lmms::gui
{


class LadspaPortDialog : public QDialog
{
	Q_OBJECT
public:
	LadspaPortDialog( const ladspa_key_t & _key );
	virtual ~LadspaPortDialog();

};


} // namespace lmms::gui

#endif
