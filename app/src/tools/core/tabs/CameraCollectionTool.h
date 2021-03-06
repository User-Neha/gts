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

#ifndef CAMERACOLLECTIONTOOL_H
#define CAMERACOLLECTIONTOOL_H

#include "CollectionToolWidget.h"

#include <QWidget>

class CameraHardware;

class CameraCollectionTool : public CollectionToolWidget
{
    Q_OBJECT

public:
    explicit CameraCollectionTool( CameraHardware& cameraHardware,
                                   QWidget* parent,
                                   MainWindow& mainWindow );
    ~CameraCollectionTool();

    virtual const QString Name() const;

protected:
    virtual void AddExtraNewElementWizardPages( NewElementWizard* const wizard );
    virtual void SetToolSpecificConfigItems( WbConfig newElement,
                                             NewElementWizard& wizard );

private:
    virtual const QString GetSubSchemaDefaultFileName() const;

    static const WbSchema CreateCollectionSchema();
    static const WbSchema CreateElementSchema();

    CameraHardware& m_cameraHardware;
};

#endif // CAMERACOLLECTIONTOOL_H
