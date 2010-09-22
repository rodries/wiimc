/****************************************************************************
 * libwiigui
 *
 * Tantric 2009
 *
 * gui_filebrowser.cpp
 *
 * GUI class definitions
 ***************************************************************************/

#include "gui.h"
#include "filebrowser.h"

GuiFileBrowser::GuiFileBrowser(int w, int s)
{
	width = w;
	height = s*32;
	size = s;
	numEntries = 0;
	selectedItem = 0;
	selectable = true;
	listChanged = true; // trigger an initial list update
	focus = 0; // allow focus

	trigA = new GuiTrigger;
	trigA->SetSimpleTrigger(-1, WPAD_BUTTON_A | WPAD_CLASSIC_BUTTON_A, PAD_BUTTON_A);

	trigHeldA = new GuiTrigger;
	trigHeldA->SetHeldTrigger(-1, WPAD_BUTTON_A | WPAD_CLASSIC_BUTTON_A, PAD_BUTTON_A);

	bgBrowseEntry = new GuiImageData(bg_entry_png);
	bgBrowseEntryOver = new GuiImageData(bg_entry_over_png);
	iconFolder = new GuiImageData(icon_folder_png);
	iconFolderChecked = new GuiImageData(icon_folder_checked_png);
	iconFile = new GuiImageData(icon_file_png);
	iconFileChecked = new GuiImageData(icon_file_checked_png);
	iconCheck = new GuiImageData(icon_check_png);
	iconPlay = new GuiImageData(icon_play_png);
	iconSD = new GuiImageData(icon_sd_png);
	iconUSB = new GuiImageData(icon_usb_png);
	iconDVD = new GuiImageData(icon_dvd_png);
	iconSMB = new GuiImageData(icon_smb_png);
	iconFTP = new GuiImageData(icon_ftp_png);

	scrollbarTop = new GuiImageData(scrollbar_top_png);
	scrollbarMid = new GuiImageData(scrollbar_mid_png);
	scrollbarBottom = new GuiImageData(scrollbar_bottom_png);
	scrollbarTopImg = new GuiImage(scrollbarTop);
	scrollbarTopImg->SetParent(this);
	scrollbarTopImg->SetAlignment(ALIGN_RIGHT, ALIGN_TOP);
	scrollbarTopImg->SetPosition(-30, 35);
	scrollbarMidImg = new GuiImage(scrollbarMid);
	scrollbarMidImg->SetParent(this);
	scrollbarMidImg->SetAlignment(ALIGN_RIGHT, ALIGN_TOP);
	scrollbarMidImg->SetPosition(-30, 55);
	scrollbarMidImg->SetTileVertical((s*32-112)/16);
	scrollbarBottomImg = new GuiImage(scrollbarBottom);
	scrollbarBottomImg->SetParent(this);
	scrollbarBottomImg->SetAlignment(ALIGN_RIGHT, ALIGN_TOP);
	scrollbarBottomImg->SetPosition(-30, height-57);

	arrowDown = new GuiImageData(arrow_down_png);
	arrowDownImg = new GuiImage(arrowDown);
	arrowDownOver = new GuiImageData(arrow_down_over_png);
	arrowDownOverImg = new GuiImage(arrowDownOver);
	arrowUp = new GuiImageData(arrow_up_png);
	arrowUpImg = new GuiImage(arrowUp);
	arrowUpOver = new GuiImageData(arrow_up_over_png);
	arrowUpOverImg = new GuiImage(arrowUpOver);
	scrollbarBox = new GuiImageData(scrollbar_box_png);
	scrollbarBoxImg = new GuiImage(scrollbarBox);
	scrollbarBoxOver = new GuiImageData(scrollbar_box_over_png);
	scrollbarBoxOverImg = new GuiImage(scrollbarBoxOver);

	arrowUpBtn = new GuiButton(arrowUpImg->GetWidth(), arrowUpImg->GetHeight());
	arrowUpBtn->SetParent(this);
	arrowUpBtn->SetImage(arrowUpImg);
	arrowUpBtn->SetImageOver(arrowUpOverImg);
	arrowUpBtn->SetAlignment(ALIGN_RIGHT, ALIGN_TOP);
	arrowUpBtn->SetPosition(-30, 4);
	arrowUpBtn->SetSelectable(false);
	arrowUpBtn->SetClickable(false);
	arrowUpBtn->SetHoldable(true);
	arrowUpBtn->SetTrigger(trigHeldA);

	arrowDownBtn = new GuiButton(arrowDownImg->GetWidth(), arrowDownImg->GetHeight());
	arrowDownBtn->SetParent(this);
	arrowDownBtn->SetImage(arrowDownImg);
	arrowDownBtn->SetImageOver(arrowDownOverImg);
	arrowDownBtn->SetAlignment(ALIGN_RIGHT, ALIGN_BOTTOM);
	arrowDownBtn->SetPosition(-30, -8);
	arrowDownBtn->SetSelectable(false);
	arrowDownBtn->SetClickable(false);
	arrowDownBtn->SetHoldable(true);
	arrowDownBtn->SetTrigger(trigHeldA);

	scrollbarBoxBtn = new GuiButton(scrollbarBoxImg->GetWidth(), scrollbarBoxImg->GetHeight());
	scrollbarBoxBtn->SetParent(this);
	scrollbarBoxBtn->SetImage(scrollbarBoxImg);
	scrollbarBoxBtn->SetImageOver(scrollbarBoxOverImg);
	scrollbarBoxBtn->SetAlignment(ALIGN_RIGHT, ALIGN_TOP);
	scrollbarBoxBtn->SetPosition(-30, 8);
	scrollbarBoxBtn->SetMinY(8);
	scrollbarBoxBtn->SetMaxY(height-128);
	scrollbarBoxBtn->SetSelectable(false);
	scrollbarBoxBtn->SetClickable(false);
	scrollbarBoxBtn->SetHoldable(true);
	scrollbarBoxBtn->SetTrigger(trigHeldA);
	
	// hide scrollbar until we have sufficient entries
	scrollbarTopImg->SetVisible(false);
	scrollbarMidImg->SetVisible(false);
	scrollbarBottomImg->SetVisible(false);
	arrowUpBtn->SetVisible(false);
	arrowDownBtn->SetVisible(false);
	scrollbarBoxBtn->SetVisible(false);
	arrowUpBtn->SetState(STATE_DISABLED);
	arrowDownBtn->SetState(STATE_DISABLED);
	scrollbarBoxBtn->SetState(STATE_DISABLED);

	for(int i=0; i<size; i++)
	{
		MakeEntry(i);
	}
}

GuiFileBrowser::~GuiFileBrowser()
{
	delete arrowUpBtn;
	delete arrowDownBtn;
	delete scrollbarBoxBtn;

	delete scrollbarTopImg;
	delete scrollbarMidImg;
	delete scrollbarBottomImg;
	delete arrowDownImg;
	delete arrowDownOverImg;
	delete arrowUpImg;
	delete arrowUpOverImg;
	delete scrollbarBoxImg;
	delete scrollbarBoxOverImg;

	delete bgBrowseEntry;
	delete bgBrowseEntryOver;
	delete iconFolder;
	delete iconFolderChecked;
	delete iconFile;
	delete iconFileChecked;
	delete iconCheck;
	delete iconPlay;
	delete iconSD;
	delete iconUSB;
	delete iconDVD;
	delete iconSMB;
	delete iconFTP;
	delete scrollbarTop;
	delete scrollbarMid;
	delete scrollbarBottom;
	delete arrowDown;
	delete arrowDownOver;
	delete arrowUp;
	delete arrowUpOver;
	delete scrollbarBox;
	delete scrollbarBoxOver;

	delete trigA;
	delete trigHeldA;

	for(int i=0; i<size; i++)
	{
		delete fileListText[i];
		delete fileList[i];
		delete fileListBg[i];
		delete fileListBgOver[i];
		delete fileListIcon[i];
	}
}

void GuiFileBrowser::MakeEntry(int i)
{
	fileListText[i] = new GuiText(NULL, 18, (GXColor){255, 255, 255, 0xff});
	fileListText[i]->SetAlignment(ALIGN_LEFT, ALIGN_MIDDLE);
	fileListText[i]->SetPosition(32,-2);
	fileListText[i]->SetMaxWidth(width-120);

	fileListBg[i] = new GuiImage(bgBrowseEntry);
	fileListBg[i]->SetTile(width/16);
	fileListBg[i]->SetPosition(-30, 0);

	fileListBgOver[i] = new GuiImage(bgBrowseEntryOver);
	fileListBgOver[i]->SetTile(width/16);
	fileListBgOver[i]->SetPosition(-30, -2);

	fileListIcon[i] = new GuiImage;
	fileListIcon[i]->SetPosition(0, -2);

	fileList[i] = new GuiButton(width-92, 32);
	fileList[i]->SetParent(this);
	fileList[i]->SetLabel(fileListText[i]);
	fileList[i]->SetImage(fileListBg[i]);
	fileList[i]->SetImageOver(fileListBgOver[i]);
	fileList[i]->SetIcon(fileListIcon[i]);
	fileList[i]->SetPosition(30,32*i);
	fileList[i]->SetTrigger(trigA);
	fileList[i]->SetVisible(false);
	fileList[i]->SetState(STATE_DISABLED);
}

void GuiFileBrowser::SetFocus(int f)
{
	focus = f;

	for(int i=0; i<size; i++)
		fileList[i]->ResetState();

	if(f == 1)
		fileList[selectedItem]->SetState(STATE_SELECTED);
}

void GuiFileBrowser::ResetState()
{
	state = STATE_DEFAULT;
	stateChan = -1;
	selectedItem = 0;

	for(int i=0; i<size; i++)
		fileList[i]->ResetState();
}

void GuiFileBrowser::TriggerUpdate()
{
	listChanged = true;
}

void GuiFileBrowser::SetRightCutoff()
{
	for(int i=0; i<size; i++)
	{
		fileListBg[i]->SetTile(width/16-1); 
		fileListBgOver[i]->SetTile(width/16-1); 
	}
}

void GuiFileBrowser::ChangeSize(int newsize)
{
	if(newsize == size)
		return;
	
	if(newsize < size)
	{
		for(int i=newsize; i<size; i++)
		{
			delete fileListText[i];
			delete fileList[i];
			delete fileListBg[i];
			delete fileListBgOver[i];
			delete fileListIcon[i];
		}
	}
	else
	{
		for(int i=size; i<newsize; i++)
			MakeEntry(i);
	}
	size = newsize;
	height = size*32;
	scrollbarMidImg->SetTileVertical((size*32-112)/16);
	scrollbarBottomImg->SetPosition(-30, height-57);
	scrollbarBoxBtn->SetMaxY(height-128);
	listChanged = true;
}

void GuiFileBrowser::Draw()
{
	if(!this->IsVisible())
		return;

	for(int i=0; i<size; ++i)
		fileList[i]->Draw();

	scrollbarTopImg->Draw();
	scrollbarMidImg->Draw();
	scrollbarBottomImg->Draw();
	arrowUpBtn->Draw();
	arrowDownBtn->Draw();
	scrollbarBoxBtn->Draw();
	this->UpdateEffects();
}

void GuiFileBrowser::Update(GuiTrigger * t)
{
	if(state == STATE_DISABLED || !t)
		return;

	int position = 0;
	int positionWiimote = 0;

	arrowUpBtn->Update(t);
	arrowDownBtn->Update(t);
	scrollbarBoxBtn->Update(t);

	// move the file listing to respond to wiimote cursor movement
	if(scrollbarBoxBtn->GetState() == STATE_HELD &&
		scrollbarBoxBtn->GetStateChan() == t->chan &&
		t->wpad->ir.valid &&
		browser.numEntries > size
		)
	{
		scrollbarBoxBtn->SetPosition(0,0);
		positionWiimote = t->wpad->ir.y - 60 - scrollbarBoxBtn->GetTop();

		if(positionWiimote < scrollbarBoxBtn->GetMinY())
			positionWiimote = scrollbarBoxBtn->GetMinY();
		else if(positionWiimote > scrollbarBoxBtn->GetMaxY())
			positionWiimote = scrollbarBoxBtn->GetMaxY();

		browser.pageIndex = (positionWiimote * browser.numEntries)/float(height-110) - selectedItem;

		if(browser.pageIndex <= 0)
		{
			browser.pageIndex = 0;
		}
		else if(browser.pageIndex+size >= browser.numEntries)
		{
			browser.pageIndex = browser.numEntries-size;
		}
		listChanged = true;
		focus = false;
	}

	if(arrowDownBtn->GetState() == STATE_HELD && arrowDownBtn->GetStateChan() == t->chan)
	{
		t->wpad->btns_d |= WPAD_BUTTON_DOWN;
		if(!this->IsFocused())
			((GuiWindow *)this->GetParent())->ChangeFocus(this);
	}
	else if(arrowUpBtn->GetState() == STATE_HELD && arrowUpBtn->GetStateChan() == t->chan)
	{
		t->wpad->btns_d |= WPAD_BUTTON_UP;
		if(!this->IsFocused())
			((GuiWindow *)this->GetParent())->ChangeFocus(this);
	}

	if(t->Right())
	{
		if(browser.pageIndex < browser.numEntries && browser.numEntries > size)
		{
			browser.pageIndex += size;
			if(browser.pageIndex+size >= browser.numEntries)
				browser.pageIndex = browser.numEntries-size;
			listChanged = true;
		}
	}
	else if(t->Left())
	{
		if(browser.pageIndex > 0)
		{
			browser.pageIndex -= size;
			if(browser.pageIndex < 0)
				browser.pageIndex = 0;
			listChanged = true;
		}
	}
	else if(t->Down())
	{
		if(browser.pageIndex + selectedItem + 1 < browser.numEntries)
		{
			if(selectedItem == size-1)
			{
				// move list down by 1
				++browser.pageIndex;
				listChanged = true;
			}
			else if(fileList[selectedItem+1]->IsVisible())
			{
				fileList[selectedItem]->ResetState();
				fileList[++selectedItem]->SetState(STATE_SELECTED, -1);
			}
		}
	}
	else if(t->Up())
	{
		if(selectedItem == 0 &&	browser.pageIndex + selectedItem > 0)
		{
			// move list up by 1
			--browser.pageIndex;
			listChanged = true;
		}
		else if(selectedItem > 0)
		{
			fileList[selectedItem]->ResetState();
			fileList[--selectedItem]->SetState(STATE_SELECTED, -1);
		}
	}

	if(listChanged || numEntries != browser.numEntries)
	{
		if(browser.numEntries > size)
		{
			scrollbarTopImg->SetVisible(true);
			scrollbarMidImg->SetVisible(true);
			scrollbarBottomImg->SetVisible(true);
			arrowUpBtn->SetVisible(true);
			arrowDownBtn->SetVisible(true);
			scrollbarBoxBtn->SetVisible(true);

			if(arrowUpBtn->GetState() == STATE_DISABLED)
			{
				arrowUpBtn->SetState(STATE_DEFAULT);
				arrowDownBtn->SetState(STATE_DEFAULT);
				scrollbarBoxBtn->SetState(STATE_DEFAULT);
			}
		}
		else
		{
			scrollbarTopImg->SetVisible(false);
			scrollbarMidImg->SetVisible(false);
			scrollbarBottomImg->SetVisible(false);
			arrowUpBtn->SetVisible(false);
			arrowDownBtn->SetVisible(false);
			scrollbarBoxBtn->SetVisible(false);
			arrowUpBtn->SetState(STATE_DISABLED);
			arrowDownBtn->SetState(STATE_DISABLED);
			scrollbarBoxBtn->SetState(STATE_DISABLED);
		}
	}

	for(int i=0; i<size; ++i)
	{
		if(listChanged || numEntries != browser.numEntries)
		{
			if(browser.pageIndex+i < browser.numEntries)
			{
				if(fileList[i]->GetState() == STATE_DISABLED)
					fileList[i]->SetState(STATE_DEFAULT);

				fileList[i]->SetVisible(true);

				fileListText[i]->SetText(browserList[browser.pageIndex+i].displayname);

				switch(browserList[browser.pageIndex+i].icon)
				{
					case ICON_FOLDER:
						fileListIcon[i]->SetImage(iconFolder);
						break;
					case ICON_FOLDER_CHECKED:
						fileListIcon[i]->SetImage(iconFolderChecked);
						break;
					case ICON_FILE:
						fileListIcon[i]->SetImage(iconFile);
						break;
					case ICON_FILE_CHECKED:
						fileListIcon[i]->SetImage(iconFileChecked);
						break;
					case ICON_CHECK:
						fileListIcon[i]->SetImage(iconCheck);
						break;
					case ICON_PLAY:
						fileListIcon[i]->SetImage(iconPlay);
						break;
					case ICON_SD:
						fileListIcon[i]->SetImage(iconSD);
						break;
					case ICON_USB:
						fileListIcon[i]->SetImage(iconUSB);
						break;
					case ICON_DVD:
						fileListIcon[i]->SetImage(iconDVD);
						break;
					case ICON_SMB:
						fileListIcon[i]->SetImage(iconSMB);
						break;
					case ICON_FTP:
						fileListIcon[i]->SetImage(iconFTP);
						break;
					default:
						fileListIcon[i]->SetImage(NULL);
						break;
				}
			}
			else
			{
				fileList[i]->SetVisible(false);
				fileList[i]->SetState(STATE_DISABLED);
			}
		}

		if(i != selectedItem && fileList[i]->GetState() == STATE_SELECTED)
			fileList[i]->ResetState();
		else if(focus && i == selectedItem && fileList[i]->GetState() == STATE_DEFAULT)
			fileList[selectedItem]->SetState(STATE_SELECTED, -1);
		
		if(!(t->wpad->btns_h & WPAD_BUTTON_DOWN) && !(t->wpad->btns_h & WPAD_BUTTON_UP))
		{
			int currChan = t->chan;
			if(t->wpad->ir.valid && !fileList[i]->IsInside(t->wpad->ir.x, t->wpad->ir.y))
				t->chan = -1;
			fileList[i]->Update(t);
			t->chan = currChan;

			// override state chan
			if(fileList[i]->GetStateChan() != -1)
				fileList[i]->SetStateChan(-1);
		}

		if(fileList[i]->GetState() == STATE_SELECTED)
		{
			selectedItem = i;
			browser.selIndex = browser.pageIndex + i;
		}

		if(selectedItem == i)
			fileListText[i]->SetScroll(SCROLL_HORIZONTAL);
		else
			fileListText[i]->SetScroll(SCROLL_NONE);
	}

	// update the location of the scroll box based on the position in the file list
	if(positionWiimote > 0)
	{
		position = positionWiimote; // follow wiimote cursor
		scrollbarBoxBtn->SetPosition(-30,position+30);
	}
	else if(listChanged || numEntries != browser.numEntries)
	{
		if(float((browser.pageIndex<<1))/(float(size)) < 1.0)
			position = scrollbarBoxBtn->GetMinY();
		else if(browser.pageIndex+size >= browser.numEntries)
			position = scrollbarBoxBtn->GetMaxY();
		else
			position = scrollbarBoxBtn->GetMinY() + (scrollbarBoxBtn->GetMaxY()-scrollbarBoxBtn->GetMinY()) * ((browser.pageIndex + size/2.0) / (float)browser.numEntries);

		if(position < scrollbarBoxBtn->GetMinY())
			position = scrollbarBoxBtn->GetMinY();
		else if(position > scrollbarBoxBtn->GetMaxY())
			position = scrollbarBoxBtn->GetMaxY();

		scrollbarBoxBtn->SetPosition(-30, position+30);
	}

	listChanged = false;
	numEntries = browser.numEntries;

	if(updateCB)
		updateCB(this);
}