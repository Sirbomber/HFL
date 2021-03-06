#pragma once


// forward declare is needed since the other header isn't included yet
class PaneButton;
struct OP2Report;
struct OP2ReportVtbl;


class PaneReport
{
public:
	PaneReport();
	PaneReport(OP2Report *internalPtr);
	~PaneReport();

	virtual void Update();
	virtual void Initialize();
	virtual void Paint(RECT *updateRect, PaneGFXSurface gfxSurface);
	virtual int GetLinkedButtonId();

	void DrawTitle(RECT *updateRect, PaneGFXSurface gfxSurface, char *title);
	void CreateStdButtons(int numButtons, PaneButton *button1, char *button1Label, char *button1HelpText, PaneButton *button2, char *button2Label, char *button2HelpText, PaneButton *button3, char *button3Label, char *button3HelpText, PaneButton *button4, char *button4Label, char *button4HelpText);

	int GetCurrentPage();
	void SetCurrentPage(int pageNum);
	// todo: listcontrol stuff in the future

	OP2ReportVtbl *internalVtbl;
	OP2Report *internalRpt;
	int isInternalObj;
};
