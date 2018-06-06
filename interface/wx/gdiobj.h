/////////////////////////////////////////////////////////////////////////////
// Name:        gdiobj.h
// Purpose:     interface of wxGDIObject
// Author:      wxWidgets team
// RCS-ID:      $Id: gdiobj.h 64940 2010-07-13 13:29:13Z VZ $
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

/**
    @class wxGDIObject

    This class allows platforms to implement functionality to optimise GDI
    objects, such as wxPen, wxBrush and wxFont. On Windows, the underling GDI
    objects are a scarce resource and are cleaned up when a usage count goes to
    zero. On some platforms this class may not have any special functionality.

    Since the functionality of this class is platform-specific, it is not
    documented here in detail.

    @library{wxcore}
    @category{gdi}

    @see wxPen, wxBrush, wxFont
*/
class wxGDIObject : public wxObject
{
public:
    /**
        Default constructor.
    */
    wxGDIObject();
};
