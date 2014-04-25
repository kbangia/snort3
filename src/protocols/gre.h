/*
** Copyright (C) 2002-2013 Sourcefire, Inc.
** Copyright (C) 1998-2002 Martin Roesch <roesch@sourcefire.com>
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License Version 2 as
** published by the Free Software Foundation.  You may not use, modify or
** distribute this program under any other version of the GNU General
** Public License.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/


#ifndef GRE_H
#define GRE_H

namespace gre{

namespace detail{

} // namespace detail

/* GRE related stuff */
struct GREHdr
{
    uint8_t flags;
    uint8_t version;
    uint16_t ether_type;

};


} // namespace gre

typedef gre::GREHdr GREHdr;




#define GRE_VERSION(x) (x->version & 0x07)
#define GRE_PROTO(x)   ntohs(x->ether_type)

#endif