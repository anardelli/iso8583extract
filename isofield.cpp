/***************************************************************************
 * This program is free software: you can redistribute it and/or modify    *
 * it under the terms of the GNU General Public License as published by    *
 * the Free Software Foundation, either version 3 of the License, or       *
 * (at your option) any later version.                                     *
 *                                                                         *
 * This program is distributed in the hope that it will be useful,         *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 * GNU General Public License for more details.                            *
 *                                                                         *
 * You should have received a copy of the GNU General Public License       *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.   *
 *                                                                         *
 * Copyright (C) 2010 Kadek Wisnu Arsadhi kadek.wisnu@gmail.com            *
 *                                                                         *
 *                                                                         *
 * iso8583 extract - Extract bit fields of any ISO 8583 financial          *
 * based messages under GPL Licence                                        *
 *                                                                         *
 ***************************************************************************/

#include "isofield.h"

IsoField::IsoField(QString arg1, QString arg2)
{
    lengthType = arg1;
    value = arg2;
}

