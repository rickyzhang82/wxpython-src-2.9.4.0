/////////////////////////////////////////////////////////////////////////////
// Name:        nativdlg.h
// Purpose:     Native Windows dialog sample
// Author:      Julian Smart
// Modified by:
// Created:     04/01/98
// RCS-ID:      $Id: nativdlg.h 64940 2010-07-13 13:29:13Z VZ $
// Copyright:   (c) Julian Smart
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

// Define a new application
class MyApp: public wxApp
{
  public:
    MyApp(void){};
    bool OnInit(void);
};

class MyFrame: public wxFrame
{
  public:
    wxWindow *panel;
    MyFrame(wxWindow *parent, const wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size);
    void OnQuit(wxCommandEvent& event);
    void OnTest1(wxCommandEvent& event);

 DECLARE_EVENT_TABLE()
};

class MyDialog : public wxDialog
{
  public:
    void OnOk(wxCommandEvent& event);
    void OnCancel(wxCommandEvent& event);

 DECLARE_EVENT_TABLE()
};

#define RESOURCE_QUIT       4
#define RESOURCE_TEST1      2

