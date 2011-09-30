/*
 # Copyright (C) 2005-2011 MaNGOS <http://www.getmangos.com/>
 *
 # Copyright (C) 2008-2011 Trinity <http://www.trinitycore.org/>
 *
 # Copyright (C) 2010-2011 DarkmoonCore <http://www.darkmooncore.org/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "gamePCH.h"
#include "Group.h"
#include "GroupReference.h"

void GroupReference::targetObjectBuildLink()
{
    // called from link()
    getTarget()->LinkMember(this);
}

void GroupReference::targetObjectDestroyLink()
{
    // called from unlink()
    getTarget()->DelinkMember(this);
}

void GroupReference::sourceObjectDestroyLink()
{
    // called from invalidate()
    getTarget()->DelinkMember(this);
}