/***************************************************************
 * Name:      SchedulerApp.h
 * Purpose:   Defines Application Class
 * Author:    Adam Spivack ()
 * Created:   2016-05-13
 * Copyright: Adam Spivack ()
 * License:
 **************************************************************/

#ifndef SCHEDULERAPP_H
#define SCHEDULERAPP_H

#include <wx/app.h>

class SchedulerApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // SCHEDULERAPP_H
