///-----------------------------------------------------------------
///
/// @file      Project1Frm.h
/// @author    raf
/// Created:   2017-06-02 17:26:26
/// @section   DESCRIPTION
///            Project1Frm class declaration
///
///------------------------------------------------------------------

#ifndef __PROJECT1FRM_H__
#define __PROJECT1FRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/filedlg.h>
#include <wx/colordlg.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/stattext.h>
#include <wx/listbox.h>
#include <wx/tglbtn.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/sizer.h>
////Header Include End

#include "FigureArray.h"
#include "Circle.h"
#include "Line.h"
#include <cstring>

////Dialog Style Start
#undef Project1Frm_STYLE
#define Project1Frm_STYLE wxCAPTION | wxRESIZE_BORDER | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxMAXIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

using namespace std;
class Project1Frm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
		void Project1FrmMouseMotion(wxMouseEvent& event);
	public:
		Project1Frm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Project1"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Project1Frm_STYLE);
		virtual ~Project1Frm();
		void WxButton3Click(wxCommandEvent& event);
		void WxToggleButton1Click(wxCommandEvent& event);
		void WxToggleButton2Click(wxCommandEvent& event);
		void WxListBox1Selected(wxCommandEvent& event);
		void WxToggleButton3Click(wxCommandEvent& event);
		void WxToggleButton4Click(wxCommandEvent& event);
		void WxToggleButton5Click(wxCommandEvent& event);
		void WxRichTextCtrl1Enter(wxCommandEvent& event);
		void Project1FrmLeftDown(wxMouseEvent& event);
		void Project1FrmLeftUP(wxMouseEvent& event);
		void Draw();
		void Adjust_coordinates(int& x, int& y);
		void Project1FrmSize(wxSizeEvent& event);
		void WxPanel1UpdateUI(wxUpdateUIEvent& event);
		void WxListBox1DoubleClicked(wxCommandEvent& event);
		void WxListBox2DoubleClicked(wxCommandEvent& event);
		void WxListBox2Selected(wxCommandEvent& event);
		void Panel_mouse_motion(wxMouseEvent& event);
		void WxToggleButton6Click(wxCommandEvent& event);
		void WxRichTextCtrl1BufferReset(wxRichTextEvent& event);
		void WxRichTextCtrl1Enter0(wxCommandEvent& event);
		void Panel_left_up(wxMouseEvent& event);
		void Panel_left_down(wxMouseEvent& event);
		void WxRichTextCtrl1Enter1(wxCommandEvent& event);
		void WxButton4Click(wxCommandEvent& event);
		int Bezier_value(int* points, int n, double t);
		int Newton_symbol(int n, int k);
		void WxButton1Click(wxCommandEvent& event);
		void WxButton2Click(wxCommandEvent& event);
		
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxFileDialog *WxOpenFileDialog1;
		wxFileDialog *WxSaveFileDialog1;
		wxColourDialog *WxColourDialog1;
		wxListBox *WxListBox2;
		wxButton *WxButton4;
		wxBoxSizer *WxBoxSizer9;
		wxStaticText *WxStaticText3;
		wxStaticText *WxStaticText2;
		wxBoxSizer *WxBoxSizer11;
		wxRichTextCtrl *WxRichTextCtrl1;
		wxStaticText *WxStaticText1;
		wxBoxSizer *WxBoxSizer10;
		wxListBox *WxListBox1;
		wxBoxSizer *WxBoxSizer8;
		wxButton *WxButton3;
		wxBoxSizer *WxBoxSizer7;
		wxToggleButton *WxToggleButton5;
		wxBoxSizer *WxBoxSizer6;
		wxToggleButton *WxToggleButton4;
		wxToggleButton *WxToggleButton3;
		wxBoxSizer *WxBoxSizer5;
		wxToggleButton *WxToggleButton6;
		wxToggleButton *WxToggleButton2;
		wxToggleButton *WxToggleButton1;
		wxBoxSizer *WxBoxSizer4;
		wxButton *WxButton2;
		wxButton *WxButton1;
		wxBoxSizer *WxBoxSizer3;
		wxBoxSizer *WxBoxSizer2;
		wxPanel *WxPanel1;
		wxBoxSizer *WxBoxSizer1;
		////GUI Control Declaration End
		
		wxColourData fill_color;
		wxColourData line_color;
		wxString entered_data;
		int toggled_button;
		wxPoint clicked_point;
		bool drawing;
		bool edit;
		bool drag;
		
		FigureArray* figure_array;
		std::vector<wxPoint> points;
		int w;
		int h;
		int N;
		int click_counter;
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXLISTBOX2 = 1075,
			ID_WXBUTTON4 = 1081,
			ID_WXSTATICTEXT3 = 1074,
			ID_WXSTATICTEXT2 = 1073,
			ID_WXRICHTEXTCTRL1 = 1085,
			ID_WXSTATICTEXT1 = 1084,
			ID_WXLISTBOX1 = 1068,
			ID_WXBUTTON3 = 1056,
			ID_WXTOGGLEBUTTON5 = 1054,
			ID_WXTOGGLEBUTTON4 = 1052,
			ID_WXTOGGLEBUTTON3 = 1051,
			ID_WXTOGGLEBUTTON6 = 1077,
			ID_WXTOGGLEBUTTON2 = 1049,
			ID_WXTOGGLEBUTTON1 = 1048,
			ID_WXBUTTON2 = 1045,
			ID_WXBUTTON1 = 1044,
			ID_WXPANEL1 = 1002,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
			
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

/*string operator+(string l, string r)
{
    return l+r;
}   */

#endif
