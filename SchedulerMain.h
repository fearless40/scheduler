/***************************************************************
 * Name:      SchedulerMain.h
 * Purpose:   Defines Application Frame
 * Author:    Adam Spivack ()
 * Created:   2016-05-13
 * Copyright: Adam Spivack ()
 * License:
 **************************************************************/

#ifndef SCHEDULERMAIN_H
#define SCHEDULERMAIN_H

//(*Headers(SchedulerFrame)
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class SchedulerFrame: public wxFrame
{
    public:

        SchedulerFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~SchedulerFrame();

    private:

        //(*Handlers(SchedulerFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(SchedulerFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(SchedulerFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // SCHEDULERMAIN_H
