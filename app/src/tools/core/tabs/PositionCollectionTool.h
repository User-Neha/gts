/*
 * Copyright (C) 2007-2013 Dyson Technology Ltd, all rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef POSITIONCOLLECTIONTOOL_H
#define POSITIONCOLLECTIONTOOL_H

#include "CollectionToolWidget.h"

class QComboBox;
class CameraHardware;

class PositionCollectionTool : public CollectionToolWidget
{
    Q_OBJECT

public:
    explicit PositionCollectionTool( CameraHardware& cameraHardware,
                                     QWidget* parent,
                                     MainWindow& mainWindow );
    ~PositionCollectionTool();

    virtual const QString Name() const;

private:
    virtual const QString GetSubSchemaDefaultFileName() const;

    static const WbSchema CreateCollectionSchema();
    static const WbSchema CreateElementSchema();

    QComboBox* m_cameraComboBox;
};

#endif // POSITIONCOLLECTIONTOOL_H
