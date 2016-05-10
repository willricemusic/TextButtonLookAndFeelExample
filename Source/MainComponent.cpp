/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
    : submitButton ("Submit")
{
    setSize (100, 50);
    
    submitButton.setLookAndFeel (&customLookAndFeel);
    addAndMakeVisible (submitButton);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colour (Colours::black));
}

void MainContentComponent::resized()
{
    Rectangle<int> r = getLocalBounds().reduced (10);
    submitButton.setBounds (r);
}
