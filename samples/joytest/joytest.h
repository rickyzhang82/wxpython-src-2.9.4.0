/////////////////////////////////////////////////////////////////////////////
// Name:        joytest.cpp
// Purpose:     Joystick sample
// Author:      Julian Smart
// Modified by:
// Created:     04/01/98
// RCS-ID:      $Id: joytest.h 64940 2010-07-13 13:29:13Z VZ $
// Copyright:   (c) Julian Smart
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

// Define a new application
class MyApp: public wxApp
{
public:
    bool OnInit();

    // Joystick max values
    int     m_minX;
    int     m_minY;
    int     m_maxX;
    int     m_maxY;

#if wxUSE_SOUND
    wxSound  m_fire;
#endif // wxUSE_SOUND
};

DECLARE_APP(MyApp)

class MyCanvas: public wxScrolledWindow
{
public:
    MyCanvas(wxWindow *parent, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize);
    ~MyCanvas();
    void OnJoystickEvent(wxJoystickEvent& event);

    wxJoystick* m_stick;
    DECLARE_EVENT_TABLE()
};

class MyFrame: public wxFrame
{
public:
    MyCanvas *canvas;
    MyFrame(wxFrame *parent, const wxString& title,
        const wxPoint& pos, const wxSize& size, const long style);
    ~MyFrame(){};
    void OnActivate(wxActivateEvent& event);
    void OnQuit(wxCommandEvent& event);

DECLARE_EVENT_TABLE()
};

#define JOYTEST_QUIT        1
