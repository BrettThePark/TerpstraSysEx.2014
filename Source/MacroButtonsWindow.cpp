/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "MacroButtonsWindow.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MacroButtonsWindow::MacroButtonsWindow ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (btnEnableMacroButtons = new ToggleButton ("btnEnableMacroButtons"));
    btnEnableMacroButtons->setButtonText (TRANS("Enable Macro Buttons"));
    btnEnableMacroButtons->addListener (this);

    addAndMakeVisible (lblMacroButtonsInfo = new Label ("lblMacroButtonsInfo",
                                                        TRANS("When the corresponding macro button is pressed, the selected key mapping file will be sent to the keyboard.")));
    lblMacroButtonsInfo->setFont (Font (15.00f, Font::plain));
    lblMacroButtonsInfo->setJustificationType (Justification::centredLeft);
    lblMacroButtonsInfo->setEditable (false, false, false);
    lblMacroButtonsInfo->setColour (TextEditor::textColourId, Colours::black);
    lblMacroButtonsInfo->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (lblButton1 = new Label ("lblButton1",
                                               TRANS("1")));
    lblButton1->setFont (Font (15.00f, Font::plain));
    lblButton1->setJustificationType (Justification::centredLeft);
    lblButton1->setEditable (false, false, false);
    lblButton1->setColour (TextEditor::textColourId, Colours::black);
    lblButton1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textMacroFile1 = new TextEditor ("textMacroFile1"));
    textMacroFile1->setMultiLine (false);
    textMacroFile1->setReturnKeyStartsNewLine (false);
    textMacroFile1->setReadOnly (false);
    textMacroFile1->setScrollbarsShown (true);
    textMacroFile1->setCaretVisible (true);
    textMacroFile1->setPopupMenuEnabled (true);
    textMacroFile1->setText (String());

    addAndMakeVisible (btnFileSelectMacro1 = new TextButton ("btnFileSelectMacro1"));
    btnFileSelectMacro1->setButtonText (TRANS("..."));
    btnFileSelectMacro1->addListener (this);

    drawable1 = Drawable::createFromImageData (BinaryData::TopEdgeButton_png, BinaryData::TopEdgeButton_pngSize);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (428, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

MacroButtonsWindow::~MacroButtonsWindow()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    btnEnableMacroButtons = nullptr;
    lblMacroButtonsInfo = nullptr;
    lblButton1 = nullptr;
    textMacroFile1 = nullptr;
    btnFileSelectMacro1 = nullptr;
    drawable1 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MacroButtonsWindow::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xffbad0de));

    g.setColour (Colours::black);
    jassert (drawable1 != 0);
    if (drawable1 != 0)
        drawable1->drawWithin (g, Rectangle<float> (12, 20, 100, 46),
                               RectanglePlacement::stretchToFit, 1.000f);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MacroButtonsWindow::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    btnEnableMacroButtons->setBounds (136, 24, 150, 24);
    lblMacroButtonsInfo->setBounds (8, 80, 440, 48);
    lblButton1->setBounds (8, 136, 31, 24);
    textMacroFile1->setBounds (48, 136, 150, 24);
    btnFileSelectMacro1->setBounds (208, 136, 32, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MacroButtonsWindow::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == btnEnableMacroButtons)
    {
        //[UserButtonCode_btnEnableMacroButtons] -- add your button handler code here..
        //[/UserButtonCode_btnEnableMacroButtons]
    }
    else if (buttonThatWasClicked == btnFileSelectMacro1)
    {
        //[UserButtonCode_btnFileSelectMacro1] -- add your button handler code here..
        //[/UserButtonCode_btnFileSelectMacro1]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MacroButtonsWindow" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="428" initialHeight="400">
  <BACKGROUND backgroundColour="ffbad0de">
    <IMAGE pos="12 20 100 46" resource="BinaryData::TopEdgeButton_png" opacity="1"
           mode="0"/>
  </BACKGROUND>
  <TOGGLEBUTTON name="btnEnableMacroButtons" id="9e31c84073a54686" memberName="btnEnableMacroButtons"
                virtualName="" explicitFocusOrder="0" pos="136 24 150 24" buttonText="Enable Macro Buttons"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <LABEL name="lblMacroButtonsInfo" id="199c7576a5017f09" memberName="lblMacroButtonsInfo"
         virtualName="" explicitFocusOrder="0" pos="8 80 440 48" edTextCol="ff000000"
         edBkgCol="0" labelText="When the corresponding macro button is pressed, the selected key mapping file will be sent to the keyboard."
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="lblButton1" id="20c692b045b913d5" memberName="lblButton1"
         virtualName="" explicitFocusOrder="0" pos="8 136 31 24" edTextCol="ff000000"
         edBkgCol="0" labelText="1" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="textMacroFile1" id="b9bc5baf677ed902" memberName="textMacroFile1"
              virtualName="" explicitFocusOrder="0" pos="48 136 150 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="btnFileSelectMacro1" id="23cc77cbad6653d7" memberName="btnFileSelectMacro1"
              virtualName="" explicitFocusOrder="0" pos="208 136 32 24" buttonText="..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]