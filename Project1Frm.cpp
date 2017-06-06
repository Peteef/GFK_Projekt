///-----------------------------------------------------------------
///
/// @file      Project1Frm.cpp
/// @author    raf
/// Created:   2017-06-02 17:26:26
/// @section   DESCRIPTION
///            Project1Frm class implementation
///
///------------------------------------------------------------------

#include "Project1Frm.h"
#include <wx/dcbuffer.h>

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Project1Frm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Project1Frm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Project1Frm::OnClose)
	EVT_MOTION(Project1Frm::Project1FrmMouseMotion)
	EVT_LEFT_DOWN(Project1Frm::Project1FrmLeftDown)
	EVT_LEFT_UP(Project1Frm::Project1FrmLeftUP)
	EVT_TEXT_ENTER(ID_WXRICHTEXTCTRL1,Project1Frm::WxRichTextCtrl1Enter0)
	EVT_TOGGLEBUTTON(ID_WXTOGGLEBUTTON6,Project1Frm::WxToggleButton6Click)
	EVT_LISTBOX(ID_WXLISTBOX2,Project1Frm::WxListBox2Selected)
	EVT_LISTBOX_DCLICK(ID_WXLISTBOX2,Project1Frm::WxListBox2DoubleClicked)
	EVT_LISTBOX(ID_WXLISTBOX1,Project1Frm::WxListBox1Selected)
	EVT_LISTBOX_DCLICK(ID_WXLISTBOX1,Project1Frm::WxListBox1DoubleClicked)
	EVT_BUTTON(ID_WXBUTTON3,Project1Frm::WxButton3Click)
	EVT_TOGGLEBUTTON(ID_WXTOGGLEBUTTON5,Project1Frm::WxToggleButton5Click)
	EVT_TOGGLEBUTTON(ID_WXTOGGLEBUTTON4,Project1Frm::WxToggleButton4Click)
	EVT_TOGGLEBUTTON(ID_WXTOGGLEBUTTON3,Project1Frm::WxToggleButton3Click)
	EVT_TOGGLEBUTTON(ID_WXTOGGLEBUTTON2,Project1Frm::WxToggleButton2Click)
	EVT_TOGGLEBUTTON(ID_WXTOGGLEBUTTON1,Project1Frm::WxToggleButton1Click)
	
	EVT_UPDATE_UI(ID_WXPANEL1,Project1Frm::WxPanel1UpdateUI)
END_EVENT_TABLE()
////Event Table End

Project1Frm::Project1Frm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

Project1Frm::~Project1Frm()
{
}

void Project1Frm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxBoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	this->SetSizer(WxBoxSizer1);
	this->SetAutoLayout(true);

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(5, 129), wxSize(316, 186));
	WxPanel1->SetBackgroundColour(wxColour(_("WHITE")));
	WxBoxSizer1->Add(WxPanel1, 1, wxALIGN_LEFT | wxALIGN_RIGHT | wxALIGN_TOP | wxALIGN_BOTTOM | wxALIGN_CENTER | wxEXPAND | wxALL, 5);

	WxBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	WxBoxSizer1->Add(WxBoxSizer2, 0, wxALIGN_LEFT | wxALIGN_RIGHT | wxALIGN_TOP | wxALL, 5);

	WxBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer3, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("Zapisz"), wxPoint(5, 5), wxSize(115, 25), 0, wxDefaultValidator, _("WxButton1"));
	WxBoxSizer3->Add(WxButton1, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton2 = new wxButton(this, ID_WXBUTTON2, _("Wczytaj"), wxPoint(130, 5), wxSize(115, 25), 0, wxDefaultValidator, _("WxButton2"));
	WxBoxSizer3->Add(WxButton2, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer4, 0, wxALIGN_CENTER | wxALL, 5);

	WxToggleButton1 = new wxToggleButton(this, ID_WXTOGGLEBUTTON1, _("Odcinek"), wxPoint(5, 5), wxSize(75, 25), 0, wxDefaultValidator, _("WxToggleButton1"));
	WxBoxSizer4->Add(WxToggleButton1, 0, wxALIGN_CENTER | wxALL, 5);

	WxToggleButton2 = new wxToggleButton(this, ID_WXTOGGLEBUTTON2, _("Okrag"), wxPoint(90, 5), wxSize(75, 25), 0, wxDefaultValidator, _("WxToggleButton2"));
	WxBoxSizer4->Add(WxToggleButton2, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer5, 0, wxALIGN_CENTER | wxALL, 5);

	WxToggleButton3 = new wxToggleButton(this, ID_WXTOGGLEBUTTON3, _("Krzywa Bezier'a"), wxPoint(5, 5), wxSize(115, 25), 0, wxDefaultValidator, _("WxToggleButton3"));
	WxBoxSizer5->Add(WxToggleButton3, 0, wxALIGN_CENTER | wxALL, 5);

	WxToggleButton4 = new wxToggleButton(this, ID_WXTOGGLEBUTTON4, _("N-kat"), wxPoint(130, 5), wxSize(115, 25), 0, wxDefaultValidator, _("WxToggleButton4"));
	WxBoxSizer5->Add(WxToggleButton4, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer6, 0, wxALIGN_CENTER | wxALL, 5);

	WxToggleButton5 = new wxToggleButton(this, ID_WXTOGGLEBUTTON5, _("N-kat wpisany w okrag"), wxPoint(5, 5), wxSize(175, 25), 0, wxDefaultValidator, _("WxToggleButton5"));
	WxBoxSizer6->Add(WxToggleButton5, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer7, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton3 = new wxButton(this, ID_WXBUTTON3, _("Wybierz kolor"), wxPoint(5, 5), wxSize(175, 25), 0, wxDefaultValidator, _("WxButton3"));
	WxBoxSizer7->Add(WxButton3, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer8, 0, wxALIGN_CENTER | wxALL, 5);

	wxArrayString arrayStringFor_WxListBox1;
	WxListBox1 = new wxListBox(this, ID_WXLISTBOX1, wxPoint(5, 5), wxSize(142, 150), arrayStringFor_WxListBox1, wxLB_SINGLE);
	WxBoxSizer8->Add(WxListBox1, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer11, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("x = 0        "), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText2"));
	WxBoxSizer11->Add(WxStaticText2, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText3 = new wxStaticText(this, ID_WXSTATICTEXT3, _("y = 0       "), wxPoint(68, 5), wxDefaultSize, 0, _("WxStaticText3"));
	WxBoxSizer11->Add(WxStaticText3, 0, wxALIGN_CENTER | wxALL, 5);

	WxColourDialog1 =  new wxColourDialog(this);

	wxArrayString arrayStringFor_WxListBox2;
	WxListBox2 = new wxListBox(this, ID_WXLISTBOX2, wxPoint(606, 173), wxSize(121, 97), arrayStringFor_WxListBox2, wxLB_SINGLE);
	WxBoxSizer1->Add(WxListBox2, 0, wxALIGN_LEFT | wxALIGN_RIGHT | wxALIGN_TOP | wxALIGN_BOTTOM | wxEXPAND | wxALL, 5);

	WxToggleButton6 = new wxToggleButton(this, ID_WXTOGGLEBUTTON6, _("Prostokat"), wxPoint(175, 5), wxSize(75, 25), 0, wxDefaultValidator, _("WxToggleButton6"));
	WxBoxSizer4->Add(WxToggleButton6, 0, wxALIGN_CENTER | wxALL, 5);

	WxRichTextCtrl1 = new wxRichTextCtrl(this, ID_WXRICHTEXTCTRL1, _(""), wxPoint(157, 59), wxSize(88, 50), 0, wxDefaultValidator, _("WxRichTextCtrl1"));
	WxRichTextCtrl1->SetMaxLength(0);
	WxRichTextCtrl1->SetFocus();
	WxRichTextCtrl1->SetInsertionPointEnd();
	WxBoxSizer8->Add(WxRichTextCtrl1, 0, wxALIGN_CENTER | wxALL, 5);

	SetTitle(_("Project1"));
	SetIcon(wxNullIcon);
	
	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
	
	////GUI Items Creation End
	
	figure_array = new FigureArray();
	toggled_button=0;
	drawing = false;
	WxPanel1->Bind(wxEVT_MOTION, &Project1Frm::Panel_mouse_motion, this);
	WxPanel1->Bind(wxEVT_LEFT_DOWN, &Project1Frm::Project1FrmLeftDown, this);
	WxPanel1->Bind(wxEVT_LEFT_UP, &Project1Frm::Project1FrmLeftUP, this);
	//WxListBox1->Show(0);
	N=5;
	
}

void Project1Frm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * Project1FrmMouseMotion
 */
void Project1Frm::Project1FrmMouseMotion(wxMouseEvent& event)
{
    
}

/*
 * WxButton3Click
 */
void Project1Frm::WxButton3Click(wxCommandEvent& event)
{
	if (WxColourDialog1->ShowModal()==wxID_OK)
	{
        if(WxListBox1->IsEmpty())
        {
            line_color = WxColourDialog1->GetColourData();
            //this->SetTitle(wxT("is empty"));
        }
        else if(WxToggleButton1->GetValue() && WxListBox1->GetSelection() == 0)
            line_color = WxColourDialog1->GetColourData();
        else
        {
            if(WxListBox1->GetSelection() == 0)
                line_color = WxColourDialog1->GetColourData();
            else if(WxListBox1->GetSelection() == 1)
                fill_color = WxColourDialog1->GetColourData();
        }
    }
}

/*
 * WxToggleButton1Click
 */
void Project1Frm::WxToggleButton1Click(wxCommandEvent& event)
{
    if(WxToggleButton1->GetValue())
    {
        WxToggleButton2->SetValue(0);
        WxToggleButton3->SetValue(0);
        WxToggleButton4->SetValue(0);
        WxToggleButton5->SetValue(0);
        WxToggleButton6->SetValue(0);
    	wxString items[3]={"kolor lini","start","stop"};
    	WxListBox1->Clear();
        WxListBox1->InsertItems(3,items,0);
        toggled_button=1;
        fill_color.GetColour().Set(0,0,0,0);
    }
    else
        toggled_button=0;

}

/*
 * WxToggleButton2Click
 */
void Project1Frm::WxToggleButton2Click(wxCommandEvent& event)
{
    if(WxToggleButton2->GetValue())
    {
    	WxToggleButton1->SetValue(0);
        WxToggleButton3->SetValue(0);
        WxToggleButton4->SetValue(0);
        WxToggleButton5->SetValue(0);
        WxToggleButton6->SetValue(0);
    	wxString items[3]={"kolor lini","kolor wypelnienia","start"};
    	WxListBox1->Clear();
        WxListBox1->InsertItems(3,items,0);
        toggled_button=2;
        fill_color.GetColour().Set(0,0,0,0);
    }
    else
        toggled_button=0;
}

/*
 * WxListBox1Selected
 */
void Project1Frm::WxListBox1Selected(wxCommandEvent& event)
{
	// insert your code here
	/*wxString s;
	s += "Podaj ";
	s += WxListBox1->GetString(WxListBox1->GetSelection());
    
    if(WxListBox1->GetSelection()== 0 )
        s+=" r,g,b\nlub wybierz z palety";
    
    if(!WxToggleButton1->GetValue() && !WxToggleButton3->GetValue() && WxListBox1->GetSelection()== 1)
    {
        s+=" r,g,b\nlub wybierz z palety";
    }
    
	s += ":";
	WxStaticText1->SetLabel(s);
	Layout();
	*/
}

/*
 * WxToggleButton3Click
 */
void Project1Frm::WxToggleButton3Click(wxCommandEvent& event)
{
    if(WxToggleButton3->GetValue())
    {
    	WxToggleButton1->SetValue(0);
        WxToggleButton2->SetValue(0);
        WxToggleButton4->SetValue(0);
        WxToggleButton5->SetValue(0);
        WxToggleButton6->SetValue(0);
    	wxString items[5]={"kolor lini","start","stop", "p1", "p2"};
    	WxListBox1->Clear();
        WxListBox1->InsertItems(5,items,0);
        toggled_button=3;
        fill_color.GetColour().Set(0,0,0,0);
    }
    else
        toggled_button=0;
}

/*
 * WxToggleButton4Click
 */
void Project1Frm::WxToggleButton4Click(wxCommandEvent& event)
{
    if(WxToggleButton4->GetValue())
    {
    	WxToggleButton1->SetValue(0);
        WxToggleButton2->SetValue(0);
        WxToggleButton3->SetValue(0);
        WxToggleButton5->SetValue(0);
        WxToggleButton6->SetValue(0);
    	wxString items[5]={"kolor lini","kolor wypelnienia","N","przeklikaj punkty"};
    	WxListBox1->Clear();
        WxListBox1->InsertItems(5,items,0);
        toggled_button=4;
        fill_color.GetColour().Set(0,0,0,0);
        WxRichTextCtrl1->Show(1);
        Layout();
    }
    else
        toggled_button=0;
}

/*
 * WxToggleButton5Click
 */
void Project1Frm::WxToggleButton5Click(wxCommandEvent& event)
{
    if(WxToggleButton5->GetValue())
    {
    	WxToggleButton1->SetValue(0);
        WxToggleButton2->SetValue(0);
        WxToggleButton3->SetValue(0);
        WxToggleButton4->SetValue(0);
        WxToggleButton6->SetValue(0);
    	wxString items[4]={"kolor lini","kolor wypelnienia","srodek okregu","promien"};
    	WxListBox1->Clear();
        WxListBox1->InsertItems(4,items,0);
        toggled_button=5;
        fill_color.GetColour().Set(0,0,0,0);
    }
    else
        toggled_button=0;
}
/*
 * Project1FrmLeftDown
 */
void Project1Frm::Project1FrmLeftDown(wxMouseEvent& event)
{
    wxString str;
    str = wxString::Format("x = %d,  y = %d",event.m_x, event.m_y);
	this->SetTitle(str);
	WxPanel1->GetSize(&w,&h);
	clicked_point.x=event.m_x;
	clicked_point.y=event.m_y;
	switch(toggled_button)
	{
        case 1:
            {
                drawing = true;
                wxColour lcolor = line_color.GetColour();
                figure_array->AddLine(clicked_point.x - w/2, clicked_point.y - h/2, clicked_point.x - w/2, clicked_point.y - h/2, lcolor.Red(), lcolor.Green(), lcolor.Blue());
            }
            break;
        case 2:
            {
                drawing = true;
                wxColour lcolor = line_color.GetColour();
                wxColour fcolor = fill_color.GetColour();
                if (fcolor.Alpha() == 0)
                    figure_array->AddCircle(clicked_point.x - w/2, clicked_point.y - h/2, 0, lcolor.Red(), lcolor.Green(), lcolor.Blue(),-1,-1,-1);
                else
                    figure_array->AddCircle(clicked_point.x - w/2, clicked_point.y - h/2, 0, lcolor.Red(), lcolor.Green(), lcolor.Blue(),fcolor.Red(), fcolor.Green(), fcolor.Blue());
            }
            break;
        case 6:
            {
                drawing = true;
                wxColour lcolor = line_color.GetColour();
                wxColour fcolor = fill_color.GetColour();
                if (fcolor.Alpha() == 0)
                    figure_array->AddRectangle(clicked_point.x - w/2, clicked_point.y - h/2,clicked_point.x - w/2, clicked_point.y - h/2,lcolor.Red(), lcolor.Green(), lcolor.Blue(),-1,-1,-1);
                else
                    figure_array->AddRectangle(clicked_point.x - w/2, clicked_point.y - h/2,clicked_point.x - w/2, clicked_point.y - h/2,lcolor.Red(), lcolor.Green(), lcolor.Blue(),fcolor.Red(), fcolor.Green(), fcolor.Blue());
            }
            break;
    }
}

/*
 * Project1FrmLeftUP
 */
void Project1Frm::Project1FrmLeftUP(wxMouseEvent& event)
{
    drawing = false;
    Draw();
}

void Project1Frm::Draw()
{
    wxClientDC dc(WxPanel1);
    WxPanel1->GetSize(&w,&h);
    
    wxBufferedDC* dc2 = new wxBufferedDC(&dc);
    
    dc2->SetBackground(wxBrush(RGB(255,255,255)));
    dc2->Clear();
    dc2->SetDeviceOrigin(w/2,h/2);
    
    /*wxBitmap PanelBitmap=wxBitmap(w,h);
    wxMemoryDC dc2;
    dc2.SelectObject(PanelBitmap);
    dc2.SetBackground(wxBrush(RGB(255,255,255)));
    dc2.Clear();
    dc2.SetDeviceOrigin(w/2,h/2);*/
    
    std::vector<Figure*> figure_vector = figure_array->Get();
    int id;
    int* data;
    for(int i=0;i<figure_array->Size();i++)
    {
        data = figure_vector[i]->Get();
        id = data[0];
        switch(id)
        {
            case 1:
                {
                    wxColour lcolour(data[5],data[6],data[7]);
                    wxPen line_pen(lcolour);
                    dc2->SetPen(line_pen);
                    dc2->DrawLine(data[1],data[2],data[3],data[4]);
                }
                break;
            case 2:
                {
                    wxColour lcolour(data[4],data[5],data[6]);
                    wxPen line_pen(lcolour);
                    dc2->SetPen(line_pen);
                    if(data[7]!=-1)
                    {
                        wxColour fcolour(data[7],data[8],data[9]);
                        wxBrush fill_brush(fcolour);
                        dc2->SetBrush(fill_brush);
                    }
                    else
                        dc2->SetBrush(*wxTRANSPARENT_BRUSH);
                        
                    dc2->DrawCircle(data[1],data[2],data[3]);
                }
                break;
            case 3:
                {
                    wxColour lcolour(data[5],data[6],data[7]);
                    wxPen line_pen(lcolour);
                    dc2->SetPen(line_pen);
                    if(data[8]!=-1)
                    {
                        wxColour fcolour(data[8],data[9],data[10]);
                        wxBrush fill_brush(fcolour);
                        dc2->SetBrush(fill_brush);
                    }
                    else
                        dc2->SetBrush(*wxTRANSPARENT_BRUSH);
                    
                    dc2->DrawRectangle(data[1],data[2],data[3]-data[1],data[4]-data[2]);
                    
                }
                break;
        }
    }
    
    //dc2.SetDeviceOrigin(0,0);
    //WxPanel1->ClearBackground();
    //dc.Blit(0,0,w,h,&dc2,0,0);
    delete dc2;
}

void Project1Frm::Adjust_coordinates(int& x, int& y)
{
    WxPanel1->GetSize(&w,&h);
    x-=w/2;
    y-=h/2;
}

/*
 * WxPanel1UpdateUI
 */
void Project1Frm::WxPanel1UpdateUI(wxUpdateUIEvent& event)
{
	// insert your code here
	int w_1,h_1;
	WxPanel1->GetSize(&w_1,&h_1);
	if(w_1 != w || h_1 != h)
	{
        w=w_1;
        h=h_1;
        Draw();
    }
}

/*
 * WxListBox1DoubleClicked
 */
void Project1Frm::WxListBox1DoubleClicked(wxCommandEvent& event)
{
	// insert your code here
	WxListBox1->Deselect(WxListBox1->GetSelection());
}

/*
 * WxListBox2DoubleClicked
 */
void Project1Frm::WxListBox2DoubleClicked(wxCommandEvent& event)
{
	// insert your code here
	WxListBox2->Deselect(WxListBox2->GetSelection());
}

/*
 * WxListBox2Selected
 */
void Project1Frm::WxListBox2Selected(wxCommandEvent& event)
{
	// insert your code here
	
}
void Project1Frm::Panel_mouse_motion(wxMouseEvent& event)
{
    	// insert your code here
	wxString x,y;
    x = wxString::Format("x = %d",event.m_x);
    y = wxString::Format("y = %d",event.m_y);
    
    WxStaticText2->SetLabel(x);
    WxStaticText3->SetLabel(y);
    
    WxPanel1->GetSize(&w,&h);
    
    if(drawing)
    {
        int* data = (*figure_array)[figure_array->Size()-1]->Get();
        int id = data[0];
        switch(id)
        {
            case 1:
                data[3]=event.m_x-w/2;
                data[4]=event.m_y-h/2;
                break;
            case 2:
                data[3]=sqrt((data[1]-event.m_x+w/2)*(data[1]-event.m_x+w/2) + (data[2]-event.m_y+h/2)*(data[2]-event.m_y+h/2));
                break;
            case 3:
                data[3] = event.m_x-w/2;
                data[4] = event.m_y-h/2;
                wxString str;
                break;                
        }
        Draw();
    }
}

/*
 * WxToggleButton6Click
 */
void Project1Frm::WxToggleButton6Click(wxCommandEvent& event)
{
	if(WxToggleButton6->GetValue())
    {
    	WxToggleButton1->SetValue(0);
        WxToggleButton2->SetValue(0);
        WxToggleButton3->SetValue(0);
        WxToggleButton4->SetValue(0);
        WxToggleButton5->SetValue(0);
    	wxString items[4]={"kolor lini","kolor wypelnienia","p1","p2"};
    	WxListBox1->Clear();
        WxListBox1->InsertItems(4,items,0);
        toggled_button=6;
        fill_color.GetColour().Set(0,0,0,0);
    }
    else
        toggled_button=0;
}

/*
 * WxRichTextCtrl1BufferReset
 */
void Project1Frm::WxRichTextCtrl1BufferReset(wxRichTextEvent& event)
{
	// insert your code here
}

/*
 * WxRichTextCtrl1Enter0
 */
void Project1Frm::WxRichTextCtrl1Enter0(wxCommandEvent& event)
{
	// insert your code here
    WxRichTextCtrl1->Remove(WxRichTextCtrl1->GetLastPosition()-1,WxRichTextCtrl1->GetLastPosition());
    wxString s = WxRichTextCtrl1->GetLineText(0);
    sscanf(s.c_str(), "%d", &N);
}
