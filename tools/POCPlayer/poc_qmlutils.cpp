/*
* Project: PiOmxTextures
* Author:  Luca Carlon
* Date:    07.28.2013
*
* Copyright (c) 2012, 2013 Luca Carlon. All rights reserved.
*
* This file is part of PiOmxTextures.
*
* PiOmxTextures is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* PiOmxTextures is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with PiOmxTextures. If not, see <http://www.gnu.org/licenses/>.
*/

/*----------------------------------------------------------------------
|    includes
+---------------------------------------------------------------------*/
#include <QDir>
#include "poc_qmlutils.h"

/*----------------------------------------------------------------------
|    POC_QMLUtils::POC_QMLUtils
+---------------------------------------------------------------------*/
POC_QMLUtils::POC_QMLUtils(QObject* parent) :
   QObject(parent)
{
   // Do nothing.
}

/*----------------------------------------------------------------------
|    POC_QMLUtils::getHomeDir
+---------------------------------------------------------------------*/
QString POC_QMLUtils::getHomeDir()
{
   return QDir::homePath();
}
