/*
  ==============================================================================

    MyLookAndFeel.h
    Created: 10 May 2016 9:21:17pm
    Author:  Will Rice

  ==============================================================================
*/

#ifndef CUSTOMLOOKANDFEEL_H_INCLUDED
#define CUSTOMLOOKANDFEEL_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class CustomLookAndFeel     : public LookAndFeel_V3
{
public:
    CustomLookAndFeel() {}
    Font getTextButtonFont (TextButton&, int) override
    {
        return Font (10.0f);
    }
    
private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CustomLookAndFeel)
};

#endif  // CUSTOMLOOKANDFEEL_H_INCLUDED
