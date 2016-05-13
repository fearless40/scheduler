/***************************************************************
 * Name:      SchedulerApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Adam Spivack ()
 * Created:   2016-05-13
 * Copyright: Adam Spivack ()
 * License:
 **************************************************************/

#include "SchedulerApp.h"

//(*AppHeaders
#include "SchedulerMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(SchedulerApp);

bool SchedulerApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
        SchedulerFrame* Frame = new SchedulerFrame(0);
        Frame->Show();
        SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
