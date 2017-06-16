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
#include <cstdlib>

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
	EVT_LISTBOX(ID_WXLISTBOX2,Project1Frm::WxListBox2Selected)
	EVT_LISTBOX_DCLICK(ID_WXLISTBOX2,Project1Frm::WxListBox2DoubleClicked)
	EVT_BUTTON(ID_WXBUTTON4,Project1Frm::WxButton4Click)
	EVT_TEXT_ENTER(ID_WXRICHTEXTCTRL1,Project1Frm::WxRichTextCtrl1Enter1)
	EVT_LISTBOX(ID_WXLISTBOX1,Project1Frm::WxListBox1Selected)
	EVT_LISTBOX_DCLICK(ID_WXLISTBOX1,Project1Frm::WxListBox1DoubleClicked)
	EVT_BUTTON(ID_WXBUTTON3,Project1Frm::WxButton3Click)
	EVT_TOGGLEBUTTON(ID_WXTOGGLEBUTTON5,Project1Frm::WxToggleButton5Click)
	EVT_TOGGLEBUTTON(ID_WXTOGGLEBUTTON4,Project1Frm::WxToggleButton4Click)
	EVT_TOGGLEBUTTON(ID_WXTOGGLEBUTTON3,Project1Frm::WxToggleButton3Click)
	EVT_TOGGLEBUTTON(ID_WXTOGGLEBUTTON6,Project1Frm::WxToggleButton6Click)
	EVT_TOGGLEBUTTON(ID_WXTOGGLEBUTTON2,Project1Frm::WxToggleButton2Click)
	EVT_TOGGLEBUTTON(ID_WXTOGGLEBUTTON1,Project1Frm::WxToggleButton1Click)
	EVT_BUTTON(ID_WXBUTTON2,Project1Frm::WxButton2Click)
	EVT_BUTTON(ID_WXBUTTON1,Project1Frm::WxButton1Click)
	
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

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(5, 151), wxSize(316, 186));
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

	WxToggleButton6 = new wxToggleButton(this, ID_WXTOGGLEBUTTON6, _("Prostokat"), wxPoint(175, 5), wxSize(75, 25), 0, wxDefaultValidator, _("WxToggleButton6"));
	WxBoxSizer4->Add(WxToggleButton6, 0, wxALIGN_CENTER | wxALL, 5);

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

	WxBoxSizer10 = new wxBoxSizer(wxVERTICAL);
	WxBoxSizer8->Add(WxBoxSizer10, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("Podaj N\ni wcisnij enter"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText1"));
	WxBoxSizer10->Add(WxStaticText1, 0, wxALIGN_CENTER | wxALL, 5);

	WxRichTextCtrl1 = new wxRichTextCtrl(this, ID_WXRICHTEXTCTRL1, _(""), wxPoint(25, 34), wxSize(89, 49), 0, wxDefaultValidator, _("WxRichTextCtrl1"));
	WxRichTextCtrl1->SetMaxLength(0);
	WxRichTextCtrl1->AppendText(_("5"));
	WxRichTextCtrl1->SetFocus();
	WxRichTextCtrl1->SetInsertionPointEnd();
	WxBoxSizer10->Add(WxRichTextCtrl1, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer11, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("x = 0        "), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText2"));
	WxBoxSizer11->Add(WxStaticText2, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText3 = new wxStaticText(this, ID_WXSTATICTEXT3, _("y = 0       "), wxPoint(68, 5), wxDefaultSize, 0, _("WxStaticText3"));
	WxBoxSizer11->Add(WxStaticText3, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer9, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton4 = new wxButton(this, ID_WXBUTTON4, _("Usuñ"), wxPoint(5, 5), wxSize(75, 25), 0, wxDefaultValidator, _("WxButton4"));
	WxBoxSizer9->Add(WxButton4, 0, wxALIGN_CENTER | wxALL, 5);

	wxArrayString arrayStringFor_WxListBox2;
	WxListBox2 = new wxListBox(this, ID_WXLISTBOX2, wxPoint(653, 196), wxSize(180, 97), arrayStringFor_WxListBox2, wxLB_SINGLE);
	WxBoxSizer1->Add(WxListBox2, 0, wxALIGN_LEFT | wxALIGN_RIGHT | wxALIGN_TOP | wxALIGN_BOTTOM | wxEXPAND | wxALL, 5);

	WxColourDialog1 =  new wxColourDialog(this);

	WxSaveFileDialog1 =  new wxFileDialog(this, _("Choose a file"), _(""), _(""), _("*.*"), wxFD_SAVE);

	WxOpenFileDialog1 =  new wxFileDialog(this, _("Choose a file"), _(""), _(""), _("*.*"), wxFD_OPEN);

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
	edit=false;
	drag=false;
	WxPanel1->Bind(wxEVT_MOTION, &Project1Frm::Panel_mouse_motion, this);
	WxPanel1->Bind(wxEVT_LEFT_DOWN, &Project1Frm::Panel_left_down, this);
	WxPanel1->Bind(wxEVT_LEFT_UP, &Project1Frm::Panel_left_up, this);
	//WxListBox1->Show(0);
	N=5;
	click_counter = -1;

	
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
        /*if(WxListBox1->IsEmpty())
        {
            line_color = WxColourDialog1->GetColourData();
            //this->SetTitle(wxT("is empty"));
        }*/
        if(WxToggleButton1->GetValue() && WxListBox1->GetSelection() == 0)
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
        edit=false;
        WxToggleButton2->SetValue(0);
        WxToggleButton3->SetValue(0);
        WxToggleButton4->SetValue(0);
        WxToggleButton5->SetValue(0);
        WxToggleButton6->SetValue(0);
        //WxScrollBar1->Disable();
    	wxString items[1]={"kolor lini"};
    	WxListBox1->Clear();
        WxListBox1->InsertItems(1,items,0);
        toggled_button=1;
        fill_color.GetColour().Set(0,0,0,0);
        Draw();
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
        edit=false;
    	WxToggleButton1->SetValue(0);
        WxToggleButton3->SetValue(0);
        WxToggleButton4->SetValue(0);
        WxToggleButton5->SetValue(0);
        WxToggleButton6->SetValue(0);
        //WxScrollBar1->Disable();
    	wxString items[2]={"kolor lini","kolor wypelnienia"};
    	WxListBox1->Clear();
        WxListBox1->InsertItems(2,items,0);
        toggled_button=2;
        fill_color.GetColour().Set(0,0,0,0);
        Draw();
    }
    else
        toggled_button=0;
}

/*
 * WxListBox1Selected
 */
void Project1Frm::WxListBox1Selected(wxCommandEvent& event)
{

}

/*
 * WxToggleButton3Click
 */
void Project1Frm::WxToggleButton3Click(wxCommandEvent& event)
{
    if(WxToggleButton3->GetValue())
    {
        edit=false;
    	WxToggleButton1->SetValue(0);
        WxToggleButton2->SetValue(0);
        WxToggleButton4->SetValue(0);
        WxToggleButton5->SetValue(0);
        WxToggleButton6->SetValue(0);
        //WxScrollBar1->Disable();
    	wxString items[1]={"kolor lini"};
    	WxListBox1->Clear();
        WxListBox1->InsertItems(1,items,0);
        toggled_button=3;
        fill_color.GetColour().Set(0,0,0,0);
        Draw();
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
        edit=false;
    	WxToggleButton1->SetValue(0);
        WxToggleButton2->SetValue(0);
        WxToggleButton3->SetValue(0);
        WxToggleButton5->SetValue(0);
        WxToggleButton6->SetValue(0);
        //WxScrollBar1->Disable();
    	wxString items[5]={"kolor lini","kolor wypelnienia"};
    	WxListBox1->Clear();
        WxListBox1->InsertItems(2,items,0);
        toggled_button=4;
        fill_color.GetColour().Set(0,0,0,0);
        WxRichTextCtrl1->Show(1);
        Layout();
        Draw();
        click_counter=0;
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
        //WxScrollBar1->Disable();
    	wxString items[2]={"kolor lini","kolor wypelnienia"};
    	WxListBox1->Clear();
        WxListBox1->InsertItems(2,items,0);
        toggled_button=5;
        fill_color.GetColour().Set(0,0,0,0);
        edit=false;
        Draw();
    }
    else
        toggled_button=0;
}
/*
 * Project1FrmLeftDown
 */
void Project1Frm::Project1FrmLeftDown(wxMouseEvent& event)
{
}

/*
 * Project1FrmLeftUP
 */
void Project1Frm::Project1FrmLeftUP(wxMouseEvent& event)
{
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
    if(!edit)
        WxListBox2->Clear();
    for(int i=0;i<figure_array->Size();i++)
    {
        data = figure_vector[i]->Get();
        id = data[0];
        string str;
        int a;
        char b[10], c[10];
        switch(id)
        {
            case 1:
                {
                    str="Line (";
                    a=data[1];
                    itoa(a, b, 10);
                    str+= string(b) + ", ";
                    a=data[2];
                    itoa(a, c, 10);
                    str+=string(c)+")";
                    
                    wxColour lcolour(data[5],data[6],data[7]);
                    wxPen line_pen(lcolour);
                    if(edit && WxListBox2->GetSelection()==i)
                        line_pen.SetWidth(3);
                    dc2->SetPen(line_pen);
                    dc2->DrawLine(data[1],data[2],data[3],data[4]);
                    
                    //edycja
                    if(edit && WxListBox2->GetSelection()==i)
                    {
                        wxPen pomPen(wxColour(255, 0, 0));
                        dc2->SetPen(pomPen);
                        dc2->SetBrush(*wxTRANSPARENT_BRUSH);
                        dc2->DrawCircle(data[1], data[2], 10);
                        dc2->DrawCircle(data[3], data[4], 10);
                        dc2->DrawCircle((data[1]+data[3])/2, (data[2]+data[4])/2, 10);
                        dc2->SetBrush(*wxRED_BRUSH);
                        dc2->DrawCircle(data[1], data[2], 2);
                        dc2->DrawCircle(data[3], data[4], 2);
                        dc2->DrawCircle((data[1]+data[3])/2, (data[2]+data[4])/2, 2);
                    }
                }
                break;
            case 2:
                {
                    str="Circle (";
                    a=data[1];
                    itoa(a, b, 10);
                    str+= string(b) + ", ";
                    a=data[2];
                    itoa(a, c, 10);
                    str+=string(c)+")";
                    
                    wxColour lcolour(data[4],data[5],data[6]);
                    wxPen line_pen(lcolour);
                    if(edit && WxListBox2->GetSelection()==i)
                        line_pen.SetWidth(3);

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
                    
                    //edycja
                    if(edit && WxListBox2->GetSelection()==i)
                    {
                        wxPen pomPen(wxColour(255, 0, 0));
                        dc2->SetPen(pomPen);
                        dc2->SetBrush(*wxTRANSPARENT_BRUSH);
                        dc2->DrawCircle(data[1], data[2], 10);
                        dc2->DrawCircle(data[1]+data[3], data[2], 10);
                        dc2->SetBrush(*wxRED_BRUSH);
                        dc2->DrawCircle(data[1]+data[3], data[2], 2);
                        dc2->DrawCircle(data[1], data[2], 2);
                    }
                }
                break;
            case 3:
                {
                    str="Rectangle (";
                    a=data[1];
                    itoa(a, b, 10);
                    str+= string(b) + ", ";
                    a=data[2];
                    itoa(a, c, 10);
                    str+=string(c)+")";
                    
                    wxColour lcolour(data[5],data[6],data[7]);
                    wxPen line_pen(lcolour);
                    if(edit && WxListBox2->GetSelection()==i)
                        line_pen.SetWidth(3);
                        
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
                    
                    //edycja
                    if(edit && WxListBox2->GetSelection()==i)
                    {
                        wxPen pomPen(wxColour(255, 0, 0));
                        dc2->SetPen(pomPen);
                        dc2->SetBrush(*wxTRANSPARENT_BRUSH);
                        dc2->DrawCircle(data[1], data[2], 10);
                        dc2->DrawCircle(data[3], data[4], 10);
                        dc2->DrawCircle((data[1]+data[3])/2, (data[2]+data[4])/2, 10);
                        dc2->SetBrush(*wxRED_BRUSH);
                        dc2->DrawCircle(data[3], data[4], 2);
                        dc2->DrawCircle(data[1], data[2], 2);
                        dc2->DrawCircle((data[1]+data[3])/2, (data[2]+data[4])/2, 2);
                    }
                }
                break;
            case 4:
            {
                int n = data[1];
                str="Polygon (";
                a=data[2];
                itoa(a, b, 10);
                str+= string(b) + ", ";
                a=data[3];
                itoa(a, c, 10);
                str+=string(c)+")";
                
                wxColour lcolour(data[2*n+2],data[2*n+3],data[2*n+4]);
                wxPen line_pen(lcolour);
                if(edit && WxListBox2->GetSelection()==i)
                        line_pen.SetWidth(3);
                    
                dc2->SetPen(line_pen);
                if(data[2*n+5]!=-1)
                {
                    wxColour fcolour(data[2*n+5],data[2*n+6],data[2*n+7]);
                    wxBrush fill_brush(fcolour);
                    dc2->SetBrush(fill_brush);
                }
                else
                    dc2->SetBrush(*wxTRANSPARENT_BRUSH);
                
                wxPoint points[n];
                for(int i=0;i<n;i++)
                {
                    points[i].x = data[(i+1)*2];
                    points[i].y = data[(i+1)*2+1];
                }
                dc2->DrawPolygon(n,points);
                //edycja
                if(edit && WxListBox2->GetSelection()==i)
                {
                    wxPen pomPen(wxColour(255, 0, 0));
                    dc2->SetPen(pomPen);
                    
                    int x=0, y=0;
                    for (int i=0; i<n; i++)
                    {
                        dc2->SetBrush(*wxTRANSPARENT_BRUSH);
                        dc2->DrawCircle(data[2*i+2], data[2*i+3], 10);
                        dc2->SetBrush(*wxRED_BRUSH);
                        dc2->DrawCircle(data[2*i+2], data[2*i+3], 2);
                        x+=data[2*i+2];
                        y+=data[2*i+3];
                    }
                    dc2->SetBrush(*wxTRANSPARENT_BRUSH);
                    dc2->DrawCircle(x/n, y/n, 10);
                    dc2->SetBrush(*wxRED_BRUSH);
                    dc2->DrawCircle(x/n, y/n, 2);
                }
                
            }
            break;
            case 5:
            {
                int n = data[1];
                str="CPolygon (";
                a=data[2];
                itoa(a, b, 10);
                str+= string(b) + ", ";
                a=data[3];
                itoa(a, c, 10);
                str+=string(c)+")";
                
                wxColour lcolour(data[2*n+2],data[2*n+3],data[2*n+4]);
                wxPen line_pen(lcolour);
                if(edit && WxListBox2->GetSelection()==i)
                        line_pen.SetWidth(3);
                
                    
                dc2->SetPen(line_pen);
                if(data[2*n+5]!=-1)
                {
                    wxColour fcolour(data[2*n+5],data[2*n+6],data[2*n+7]);
                    wxBrush fill_brush(fcolour);
                    dc2->SetBrush(fill_brush);
                }
                else
                    dc2->SetBrush(*wxTRANSPARENT_BRUSH);
                
                wxPoint points[n];
                for(int i=0;i<n;i++)
                {
                    points[i].x = data[(i+1)*2];
                    points[i].y = data[(i+1)*2+1];
                }
                dc2->DrawPolygon(n,points);

                //edycja
                if(edit && WxListBox2->GetSelection()==i)
                {
                    wxPen pomPen(wxColour(255, 0, 0));
                    dc2->SetPen(pomPen);
                    dc2->SetBrush(*wxTRANSPARENT_BRUSH);
                    dc2->DrawCircle(data[2], data[3], 10);
                    dc2->DrawCircle(data[2*n+8], data[2*n+9], 10);
                    
                    dc2->SetBrush(*wxRED_BRUSH);
                    dc2->DrawCircle(data[2], data[3], 2);
                    dc2->DrawCircle(data[2*n+8], data[2*n+9], 2);
                }
            }
            break;
            case 6:
            {
                str="Bezier (";
                a=data[2];
                itoa(a, b, 10);
                str+= string(b) + ", ";
                a=data[3];
                itoa(a, c, 10);
                str+=string(c)+")";
                
                const int n=data[1];
                wxColour lcolour(data[2*n+2],data[2*n+3],data[2*n+4]);
                wxPen line_pen(lcolour);
                //edycja
                if(edit && WxListBox2->GetSelection()==i)
                {
                    wxPen pomPen(wxColour(255, 0, 0));
                    dc2->SetPen(pomPen);
                    dc2->SetBrush(*wxTRANSPARENT_BRUSH);
                    
                    int x=0, y=0;
                    for (int i=0; i<n; i++)
                    {
                        dc2->DrawCircle(data[2*i+2], data[2*i+3], 10);
                        x+=data[2*i+2];
                        y+=data[2*i+3];
                    }
                    dc2->DrawCircle(x/n, y/n, 10);
                }
                
                dc2->SetPen(line_pen);
                int x_table[n];
                int y_table[n];
                for(int i=0;i<n;i++)
                {
                    x_table[i] = data[2 * (i+1)];
                    y_table[i] = data[2 * (i+1) + 1];
                }
                
                double krok = 0.0005;
                double t = 0;
                while(t<=1)
                {
                    dc2->DrawPoint(Bezier_value(x_table,n-1,t),Bezier_value(y_table,n-1,t));
                    t+=krok;
                }
                dc2->SetPen(*wxRED_PEN);
                dc2->SetBrush(*wxRED_BRUSH);
                
                    
                //edycja
                if(edit && WxListBox2->GetSelection()==i)
                {
                    for(int i=0;i<n;i++)
                        dc2->DrawCircle(x_table[i],y_table[i],2);
                    
                    line_pen.SetWidth(3);
                    wxPen pomPen(wxColour(255, 0, 0));
                    dc2->SetPen(pomPen);
                    dc2->SetBrush(*wxTRANSPARENT_BRUSH);
                    
                    int x=0, y=0;
                    for (int i=0; i<n; i++)
                    {
                        dc2->DrawCircle(data[2*i+2], data[2*i+3], 10);
                        x+=data[2*i+2];
                        y+=data[2*i+3];
                    }
                    dc2->DrawCircle(x/n, y/n, 10);
                }
            }
            break;
        }
        if(!edit)
            WxListBox2->Append(str);
    }
    if(!points.empty())
    {
        dc2->SetPen(*wxRED_PEN);
        dc2->SetBrush(*wxRED_BRUSH);
        for(int i=0;i<points.size();i++)
            dc2->DrawCircle(points[i].x, points[i].y,2);
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
    /*if(edit)
    {
        WxScrollBar1->Show(true);
        WxButton4->Show(true);
    }
    else
    {
        WxScrollBar1->Show(false);
        WxButton4->Show(false);
    }*/
    wxString str;
    if(WxListBox2->GetSelection()!=wxNOT_FOUND)
    {
        str = wxString("Edycja");
        //this->SetTitle(str);
        edit=true;
    }
    else
    {
        str = wxString("Rysowanie");
        //this->SetTitle(str);
        edit=false;
    }
    
    if(!WxToggleButton4->GetValue())
        click_counter = -1;
        
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
    WxToggleButton1->SetValue(0);
    WxToggleButton2->SetValue(0);
    WxToggleButton3->SetValue(0);
    WxToggleButton4->SetValue(0);
    WxToggleButton5->SetValue(0);
    WxToggleButton6->SetValue(0);
    WxListBox1->Clear();
    //WxScrollBar1->Enable();
    Draw();
	
}
void Project1Frm::Panel_mouse_motion(wxMouseEvent& event)
{
    	// insert your code here
	wxString x,y;
    x = wxString::Format("x = %d",event.m_x-w/2);
    y = wxString::Format("y = %d",event.m_y-h/2);
    
    WxStaticText2->SetLabel(x);
    WxStaticText3->SetLabel(y);
    
    WxPanel1->GetSize(&w,&h);
    
    if(drawing && !edit)
    {
        int* data = (*figure_array)[figure_array->Size()-1]->Get();
        int id = data[0];
        switch(id)
        {
        case 1:
            data[3]=event.m_x-w/2;
            data[4]=event.m_y-h/2;
            Draw();
            break;
        case 2:
            data[3]=sqrt((data[1]-event.m_x+w/2)*(data[1]-event.m_x+w/2) + (data[2]-event.m_y+h/2)*(data[2]-event.m_y+h/2));
            Draw();
            break;
        case 3:
            data[3] = event.m_x-w/2;
            data[4] = event.m_y-h/2;
            Draw();
            break;    
        case 5:
            int n = data[1];
            int r = sqrt((data[2 * n + 8]-event.m_x+w/2)*(data[2 * n + 8]-event.m_x+w/2) + (data[2 * n + 9]-event.m_y+h/2)*(data[2 * n + 9]-event.m_y+h/2));
            data[2 * n + 10] = r;
            double angle = 0;
        	int step = 360.0 / n;
            for(int i = 1; i <=n; i++)
        	{
        		data[2 * i] = r * cos(angle * (3.1415 / 180)) + data[2 * n + 8];
        		data[2 * i + 1] = r * sin(angle * (3.1415 / 180)) + data[2 * n + 9];
        		angle += step;
        	}
        	Draw();
        	break;
        }
        //Draw();
    }
    if (drag)
    {
        int* data = (*figure_array)[WxListBox2->GetSelection()]->Get(), *points;
        int id = data[0], n=data[1], x=0, y=0;
        switch(id)
        {
        case 1:
            points = new int[4];
            points[0]=data[1];
            points[1]=data[2];
            points[2]=data[3];
            points[3]=data[4];
            if ((event.m_x-w/2> (data[1]+data[3])/2-10) && (event.m_x-w/2< (data[1]+data[3])/2+10)
                && (event.m_y-h/2 < (data[2]+data[4])/2+10) && (event.m_y-h/2 > (data[2]+data[4])/2-10))
            {
                for (int i=0; i<2; i++)
                {
                    data[2*i+1]+=event.m_x-w/2-(points[0]+points[2])/2;
                    data[2*i+2]+=event.m_y-h/2-(points[1]+points[3])/2;
                }
            }
            for (int i=0; i<2; i++)
            {
                if ((event.m_x-w/2>data[2*i+1]-10)&&(event.m_x-w/2<data[2*i+1]+10)&&(event.m_y-h/2>data[2*i+2]-10)&&(event.m_y-h/2<data[2*i+2]+10))
                {
                    data[2*i+1]=event.m_x-w/2;
                    data[2*i+2]=event.m_y-h/2;
                    break;
                }
            }
            
            break;
        case 2:
            points = new int[3];
            points[0]=data[1];
            points[1]=data[2];
            points[2]=data[3];
            if ((event.m_x - w/2 > data[1]-10) && (event.m_x - w/2 < data[1]+10) 
                && (event.m_y - h/2> data[2]-10) && (event.m_y - h/2< data[2]+10))
            {
                data[1]+=event.m_x-w/2-points[0];
                data[2]+=event.m_y-h/2-points[1];
                break;
            }
            if (
                (  
                    sqrt(
                        (event.m_x-w/2-data[1]) * 
                        (event.m_x-w/2-data[1]) + 
                        (event.m_y-h/2-data[2]) * 
                        (event.m_y-h/2-data[2]) 
                        )
                    > data[3]-10) 
                && 
                (  
                    sqrt(
                        (event.m_x-w/2-data[1]) * 
                        (event.m_x-w/2-data[1]) + 
                        (event.m_y-h/2-data[2]) * 
                        (event.m_y-h/2-data[2]) 
                        )
                    < data[3]+10)
                )
            {
                data[3]+=sqrt((event.m_x-w/2-points[0])*(event.m_x-w/2-points[0])+(event.m_y-h/2-points[1])*(event.m_y-h/2-points[1]))-data[3];
                break;
            }
            break;
        case 3:
            points = new int[4];
            points[0]=data[1];
            points[1]=data[2];
            points[2]=data[3];
            points[3]=data[4];
            if ((event.m_x-w/2> (data[1]+data[3])/2-10) && (event.m_x-w/2< (data[1]+data[3])/2+10)
                && (event.m_y-h/2 < (data[2]+data[4])/2+10) && (event.m_y-h/2 > (data[2]+data[4])/2-10))
            {
                for (int i=0; i<2; i++)
                {
                    data[2*i+1]+=event.m_x-w/2-(points[0]+points[2])/2;
                    data[2*i+2]+=event.m_y-h/2-(points[1]+points[3])/2;
                }
            }
            for (int i=0; i<2; i++)
            {
                if ((event.m_x-w/2>data[2*i+1]-10)&&(event.m_x-w/2<data[2*i+1]+10)&&(event.m_y-h/2>data[2*i+2]-10)&&(event.m_y-h/2<data[2*i+2]+10))
                {
                    data[2*i+1]=event.m_x-w/2;
                    data[2*i+2]=event.m_y-h/2;
                    break;
                }
            }
            break;
        case 4:
            points=new int[2*n];
            for (int i=0; i<n; i++)
            {
                points[2*i]=data[2*i+2];
                points[2*i+1]=data[2*i+3];
            }
            for (int i=0; i<n; i++)
            {
                if ((event.m_x-w/2>data[2*i+2]-10)&&(event.m_x-w/2<data[2*i+2]+10)&&(event.m_y-h/2>data[2*i+3]-10)&&(event.m_y-h/2<data[2*i+3]+10))
                {
                    data[2*i+2]=event.m_x-w/2;
                    data[2*i+3]=event.m_y-h/2;
                }
                x+=data[2*i+2];
                y+=data[2*i+3];
            }
            if ((event.m_x - w/2> (x)/n-10) && (event.m_x - w/2< (x)/n+10)
                 && (event.m_y - h/2 < (y)/n+10) && (event.m_y - h/2 > (y)/n-10))
            {
                for (int i=0; i<n; i++)
                {
                    data[2*i+2]+=event.m_x-w/2-x/n;
                    data[2*i+3]+=event.m_y-h/2-y/n;
                }
            }
            break;
        
        case 5:
            points = new int[2];
            if ((event.m_x - w/2 > data[2*n+8]-10) && (event.m_x - w/2 < data[2*n+8]+10) 
                && (event.m_y - h/2> data[2*n+9]-10) && (event.m_y - h/2< data[2*n+9]+10))
            {
                for (int i=0; i<n; i++)
                {
                    data[2*i+2]+=event.m_x-w/2-data[2*n+8];
                    data[2*i+3]+=event.m_y-h/2-data[2*n+9];
                }
                data[2*n+8]=event.m_x-w/2;
                data[2*n+9]=event.m_y-h/2;
                
            }
            if (
                (  
                    sqrt(
                        (event.m_x-w/2-data[2*n+8]) * 
                        (event.m_x-w/2-data[2*n+8]) + 
                        (event.m_y-h/2-data[2*n+9]) * 
                        (event.m_y-h/2-data[2*n+9]) 
                        )
                    > data[2*n+10]-10) 
                && 
                (  
                    sqrt(
                        (event.m_x-w/2-data[2*n+8]) * 
                        (event.m_x-w/2-data[2*n+8]) + 
                        (event.m_y-h/2-data[2*n+9]) * 
                        (event.m_y-h/2-data[2*n+9]) 
                        )
                    < data[2*n+10]+10)
                )
            {
                
	            data[2*n+10]=sqrt((event.m_x-w/2-data[2*n+8])*(event.m_x-w/2-data[2*n+8])+(event.m_y-h/2-data[2*n+9])*(event.m_y-h/2-data[2*n+9]));
	            
                double angle = 0;
            	int step = 360.0 / n;
                for(int i = 1; i <=n; i++)
            	{
            		data[2 * i] = data[2 * n + 10] * cos(angle * (3.1415 / 180)) + data[2 * n + 8];
            		data[2 * i + 1] = data[2 * n + 10] * sin(angle * (3.1415 / 180)) + data[2 * n + 9];
            		angle += step;
            	}
            }
            break;
        
        case 6:
            points = new int[2];
            for (int i=0; i<n; i++)
            {
                if ((event.m_x - w/2 > data[2*i+2]-10) && (event.m_x - w/2 < data[2*i+2]+10) && (event.m_y - h/2> data[2*i+3]-10) && (event.m_y - h/2< data[2*i+3]+10))
                {
                    data[2*i+2]=event.m_x-w/2;
                    data[2*i+3]=event.m_y-h/2;
                }
                x+=data[2*i+2];
                y+=data[2*i+3];
            }
            if ((event.m_x - w/2> x/n-10) && (event.m_x - w/2< x/n+10)
                 && (event.m_y - h/2 < y/n+10) && (event.m_y - h/2 > y/n-10))
            {
                for (int i=0; i<n; i++)
                {
                    data[2*i+2]+=event.m_x-w/2-x/n;
                    data[2*i+3]+=event.m_y-h/2-y/n;
                }
            }
            break;
        }
        Draw();
        delete [] points;
    }
    
}

/*
 * WxToggleButton6Click
 */
void Project1Frm::WxToggleButton6Click(wxCommandEvent& event)
{
	if(WxToggleButton6->GetValue())
    {
        edit=false;
    	WxToggleButton1->SetValue(0);
        WxToggleButton2->SetValue(0);
        WxToggleButton3->SetValue(0);
        WxToggleButton4->SetValue(0);
        WxToggleButton5->SetValue(0);
    	wxString items[2]={"kolor lini","kolor wypelnienia"};
    	WxListBox1->Clear();
        WxListBox1->InsertItems(2,items,0);
        toggled_button=6;
        fill_color.GetColour().Set(0,0,0,0);
        Draw();
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


void Project1Frm::Panel_left_up(wxMouseEvent& event)
{
    drawing = false;
    drag = false;
    Draw();
}

void Project1Frm::Panel_left_down(wxMouseEvent& event)
{
	WxPanel1->GetSize(&w,&h);
	clicked_point.x=event.m_x;
	clicked_point.y=event.m_y;
	if(!edit)
    	switch(toggled_button)
    	{
        case 1:
            {
            drawing = true;
            edit = false;
            wxColour lcolor = line_color.GetColour();
            figure_array->AddLine(clicked_point.x - w/2, clicked_point.y - h/2, clicked_point.x - w/2, clicked_point.y - h/2, lcolor.Red(), lcolor.Green(), lcolor.Blue());
            
            //edycja
            //if(WxListBox2->GetSelection()==i)
            //    WxListBox2->Deselect(WxListBox2->GetSelection());
                
        
            break;
        }
        
        case 2:
            {
            drawing = true;
            edit = false;
            wxColour lcolor = line_color.GetColour();
            wxColour fcolor = fill_color.GetColour();
            if (fcolor.Alpha() == 0)
                figure_array->AddCircle(clicked_point.x - w/2, clicked_point.y - h/2, 0, lcolor.Red(), lcolor.Green(), lcolor.Blue(),-1,-1,-1);
            else
                figure_array->AddCircle(clicked_point.x - w/2, clicked_point.y - h/2, 0, lcolor.Red(), lcolor.Green(), lcolor.Blue(),fcolor.Red(), fcolor.Green(), fcolor.Blue());
                
            //edycja
            //if(WxListBox2->GetSelection()==i)
            //    WxListBox2->Deselect(WxListBox2->GetSelection());
                

            break;
        }
        case 3:
            {
                edit = false;
                if (points.size() < N)
                {
                    points.push_back(wxPoint(clicked_point.x - w/2,clicked_point.y - h/2));
                }
                if(points.size()*2 == 2*N)
                {
                    points.push_back(wxPoint(clicked_point.x - w/2,clicked_point.y - h/2));
                    wxColour lcolor = line_color.GetColour();
                    int coords[2*N];
                    for(int i = 0; i < N; i++)
                    {
                        coords[2*i] = points[i].x;
                        coords[2*i+1] = points[i].y;
                    }
                    figure_array->AddBCurve(coords, N, lcolor.Red(), lcolor.Green(), lcolor.Blue());
                    points.clear();
                    toggled_button = 0;
                    WxToggleButton3->SetValue(0);
                }
            }
            break;
        case 4:
        {
            edit = false;
            if(click_counter == 0)
            {
                wxColour lcolor = line_color.GetColour();
                wxColour fcolor = fill_color.GetColour();
                int coords[2*N];
                for(int i = 0; i < N; i++)
                {
                    coords[2*i] = clicked_point.x - w/2;
                    coords[2*i+1] = clicked_point.y - h/2;
                }
                if (fcolor.Alpha() == 0)
                    figure_array->AddPolygon(coords, N, lcolor.Red(), lcolor.Green(), lcolor.Blue(),-1,-1,-1);
                else
                    figure_array->AddPolygon(coords, N, lcolor.Red(), lcolor.Green(), lcolor.Blue(),fcolor.Red(), fcolor.Green(), fcolor.Blue());
                
                click_counter++;
                points.push_back(wxPoint(clicked_point.x - w/2,clicked_point.y - h/2));
            }
            else if(click_counter == N-1)
            {
                int* data = (*figure_array)[figure_array->Size()-1]->Get();
                data[(click_counter+1)*2] = clicked_point.x - w/2;
                data[(click_counter+1)*2+1] = clicked_point.y - h/2;
                click_counter=-1;
                toggled_button=0;
                WxToggleButton4->SetValue(0);
                points.clear();
            }
            else if(click_counter < N-1 && click_counter > 0)
            {
                int* data = (*figure_array)[figure_array->Size()-1]->Get();
                data[(click_counter+1)*2] = clicked_point.x - w/2;
                data[(click_counter+1)*2+1] = clicked_point.y - h/2;
                click_counter++;
                points.clear();
            }

            }
            break;
        case 5:
            /*drawing_cpolygon = true;
            edit = false;*/
            {
                drawing = true;
                edit = false;
                wxColour lcolor = line_color.GetColour();
                wxColour fcolor = fill_color.GetColour();
                if (fcolor.Alpha() == 0)
                    figure_array->AddCPolygon(clicked_point.x-w/2,clicked_point.y-h/2,1,N, lcolor.Red(), lcolor.Green(), lcolor.Blue(),-1,-1,-1);
                else
                    figure_array->AddCPolygon(clicked_point.x-w/2,clicked_point.y-h/2,1,N, lcolor.Red(), lcolor.Green(), lcolor.Blue(),fcolor.Red(), fcolor.Green(), fcolor.Blue());
            }
            break;
        case 6:
            {
                drawing = true;
                edit=false;
                wxColour lcolor = line_color.GetColour();
                wxColour fcolor = fill_color.GetColour();
                if (fcolor.Alpha() == 0)
                    figure_array->AddRectangle(clicked_point.x - w/2, clicked_point.y - h/2,clicked_point.x - w/2, clicked_point.y - h/2,lcolor.Red(), lcolor.Green(), lcolor.Blue(),-1,-1,-1);
                else
                    figure_array->AddRectangle(clicked_point.x - w/2, clicked_point.y - h/2,clicked_point.x - w/2, clicked_point.y - h/2,lcolor.Red(), lcolor.Green(), lcolor.Blue(),fcolor.Red(), fcolor.Green(), fcolor.Blue());
                    
                //edycja
                //if(WxListBox2->GetSelection()==i)
                //    WxListBox2->Deselect(WxListBox2->GetSelection());
                    
            }
            break;
        }
        
    if(WxListBox2->GetSelection()!=wxNOT_FOUND)
    {
        edit=true;

    }  
    if (edit)
    {
        this->SetTitle(wxString("Edycja"));
        int* data = (*figure_array)[WxListBox2->GetSelection()]->Get();
        int id=data[0], n=data[1], x=0, y=0;
        switch(id)
        {
        case 1:
            for (int i=0; i<2; i++)
            {
                if ((clicked_point.x - w/2 > data[2*i+1]-10) && (clicked_point.x - w/2 < data[2*i+1]+10) && (clicked_point.y - h/2> data[2*i+2]-10) && (clicked_point.y - h/2< data[2*i+2]+10))
                {
                    this->SetTitle(wxString::Format("Przesuwanie punktu %d", i));
                    drag=true;
                    break;
                }
            }
            if ((clicked_point.x - w/2> (data[1]+data[3])/2-10) && (clicked_point.x - w/2< (data[1]+data[3])/2+10)
                 && (clicked_point.y - h/2 < (data[2]+data[4])/2+10) && (clicked_point.y - h/2 > (data[2]+data[4])/2-10))
            {
                this->SetTitle(wxString("Przesuwanie srodka"));
                drag=true;
            }
            break;
        case 2:
            if ((clicked_point.x - w/2 > data[1]-10) && (clicked_point.x - w/2 < data[1]+10) 
                && (clicked_point.y - h/2> data[2]-10) && (clicked_point.y - h/2< data[2]+10))
            {
                this->SetTitle(wxString::Format("Przesuwanie œrodka"));
                drag=true;
                break;
            }
            if (
                (  
                    sqrt(
                        (clicked_point.x-w/2-data[1]) * 
                        (clicked_point.x-w/2-data[1]) + 
                        (clicked_point.y-h/2-data[2]) * 
                        (clicked_point.y-h/2-data[2]) 
                        )
                    > data[3]-10) 
                && 
                (  
                    sqrt(
                        (clicked_point.x-w/2-data[1]) * 
                        (clicked_point.x-w/2-data[1]) + 
                        (clicked_point.y-h/2-data[2]) * 
                        (clicked_point.y-h/2-data[2]) 
                        )
                    < data[3]+10)
                )
            {
                this->SetTitle(wxString::Format("Zmienianie promienia"));
                drag=true;
                break;
            }
            break;
        case 3:
            for (int i=0; i<2; i++)
            {
                if ((clicked_point.x - w/2 > data[2*i+1]-10) && (clicked_point.x - w/2 < data[2*i+1]+10) && (clicked_point.y - h/2> data[2*i+2]-10) && (clicked_point.y - h/2< data[2*i+2]+10))
                {
                    this->SetTitle(wxString::Format("Przesuwanie punktu %d", i));
                    drag=true;
                    break;
                }
            }
            if ((clicked_point.x - w/2> (data[1]+data[3])/2-10) && (clicked_point.x - w/2< (data[1]+data[3])/2+10)
                 && (clicked_point.y - h/2 < (data[2]+data[4])/2+10) && (clicked_point.y - h/2 > (data[2]+data[4])/2-10))
            {
                this->SetTitle(wxString("Przesuwanie srodka"));
                drag=true;
            }
            break;
        
        case 4:
            for (int i=0; i<n; i++)
            {
                if ((clicked_point.x - w/2 > data[2*i+2]-10) && (clicked_point.x - w/2 < data[2*i+2]+10) && (clicked_point.y - h/2> data[2*i+3]-10) && (clicked_point.y - h/2< data[2*i+3]+10))
                {
                    this->SetTitle(wxString::Format("Przesuwanie punktu %d", i));
                    drag=true;
                    break;
                }
                x+=data[2*i+2];
                y+=data[2*i+3];
            }
            if ((clicked_point.x - w/2> (x)/n-10) && (clicked_point.x - w/2< (x)/n+10)
                 && (clicked_point.y - h/2 < (y)/n+10) && (clicked_point.y - h/2 > (y)/n-10))
            {
                this->SetTitle(wxString("Przesuwanie srodka"));
                drag=true;
            }
            break;
        
        case 5:
            if ((clicked_point.x - w/2 > data[2*n+8]-10) && (clicked_point.x - w/2 < data[2*n+8]+10) 
                && (clicked_point.y - h/2> data[2*n+9]-10) && (clicked_point.y - h/2< data[2*n+9]+10))
            {
                this->SetTitle(wxString::Format("Przesuwanie œrodka"));
                drag=true;
                break;
            }
            if (
                (  
                    sqrt(
                        (clicked_point.x-w/2-data[2*n+8]) * 
                        (clicked_point.x-w/2-data[2*n+8]) + 
                        (clicked_point.y-h/2-data[2*n+9]) * 
                        (clicked_point.y-h/2-data[2*n+9]) 
                        )
                    > data[2*n+10]-10) 
                && 
                (  
                    sqrt(
                        (clicked_point.x-w/2-data[2*n+8]) * 
                        (clicked_point.x-w/2-data[2*n+8]) + 
                        (clicked_point.y-h/2-data[2*n+9]) * 
                        (clicked_point.y-h/2-data[2*n+9]) 
                        )
                    < data[2*n+10]+10)
                )
            {
                this->SetTitle(wxString::Format("Zmienianie promienia"));
                drag=true;
                break;
            }
            break;
        
        case 6:
            for (int i=0; i<n; i++)
            {
                if ((clicked_point.x - w/2 > data[2*i+2]-10) && (clicked_point.x - w/2 < data[2*i+2]+10) && (clicked_point.y - h/2> data[2*i+3]-10) && (clicked_point.y - h/2< data[2*i+3]+10))
                {
                    this->SetTitle(wxString::Format("Przesuwanie punktu %d", i));
                    drag=true;
                    break;
                    
                }
                x+=data[2*i+2];
                y+=data[2*i+3];
            }
            if ((clicked_point.x - w/2> x/n-10) && (clicked_point.x - w/2< x/n+10)
                 && (clicked_point.y - h/2 < y/n+10) && (clicked_point.y - h/2 > y/n-10))
            {
                this->SetTitle(wxString("Przesuwanie srodka"));
                drag=true;
            }
            break;
        }
                
    }
      
}

/*
 * WxRichTextCtrl1Enter1
 */
void Project1Frm::WxRichTextCtrl1Enter1(wxCommandEvent& event)
{
    WxRichTextCtrl1->Remove(WxRichTextCtrl1->GetLastPosition()-1,WxRichTextCtrl1->GetLastPosition());
    wxString s = WxRichTextCtrl1->GetLineText(0);
    sscanf(s.c_str(), "%d", &N);
    click_counter = -1;
}

int Project1Frm::Bezier_value(int* points, int n, double t)
{
    double sum = 0;
    for(int i=0;i<=n;i++)
    {
        sum+=points[i]*pow((1-t),n-i)*pow(t,i)*Newton_symbol(n,i);
    }
    return sum;
}

int Project1Frm::Newton_symbol(int n, int k)
{
    if (k==0 || k==n)
        return 1;
    
    return Newton_symbol(n-1, k-1) + Newton_symbol(n-1, k);
}

/*
 * WxButton4Click
 */
void Project1Frm::WxButton4Click(wxCommandEvent& event)
{
	if (WxListBox2->GetSelection()!=wxNOT_FOUND)
	{
        if(figure_array->Drop(WxListBox2->GetSelection()))
        {
            this->SetTitle(wxString::Format("Blad usuwania: %d", WxListBox2->GetSelection()));
            return;
        }
        else if (WxListBox2->GetSelection())
        {
            WxListBox2->SetSelection(WxListBox2->GetSelection()-1);
            WxListBox2->Delete(WxListBox2->GetSelection()+1);
        }
        else 
            WxListBox2->Delete(0);
    }
    Draw();
}



/*
 * WxButton1Click
 */
void Project1Frm::WxButton1Click(wxCommandEvent& event)
{
	// insert your code here
	wxString wxpath;
    WxSaveFileDialog1->SetWildcard("array vector graphics files (*.avg)|*.avg");
	if (WxSaveFileDialog1->ShowModal()==wxID_OK)
	{
        wxpath = WxSaveFileDialog1->GetPath();
        
	   std::string path = std::string(wxpath.mb_str());
	   figure_array->SaveToFile(path);
    }
}

/*
 * WxButton2Click
 */
void Project1Frm::WxButton2Click(wxCommandEvent& event)
{
	// insert your code here
	wxString wxpath;
    WxOpenFileDialog1->SetWildcard("array vector graphics files (*.avg)|*.avg");
	if (WxOpenFileDialog1->ShowModal()==wxID_OK)
	{
        wxpath=WxOpenFileDialog1->GetPath();
        
	   std::string path = std::string(wxpath.mb_str());
	   
       delete figure_array;
	   figure_array = new FigureArray();
	   figure_array->LoadFromFile(path);
	   
	   Draw();
    }
}
