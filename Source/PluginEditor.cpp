/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"





AnimatedComponent::AnimatedComponent() {
	currentIndex = 0;
	currentImage = images[currentIndex];
	Timer::startTimer(90);
}

void AnimatedComponent::timerCallback()
{
	DBG("in timer callback");
	rotateImage();
	repaint();
}


void AnimatedComponent::paint(juce::Graphics &g)
{
	//DBG(currentIndex);
	g.drawImageAt(currentImage, 0, 0);
}

void AnimatedComponent::rotateImage() {

	if (currentIndex < 24) {
		currentIndex++;
		currentImage = images[currentIndex];
	}
	else if (currentIndex >= 24) {//8
		currentIndex = 0;
		currentImage = images[currentIndex];
	}
	DBG(currentIndex);
}
//==============================================================================
Initial_demonAudioProcessorEditor::Initial_demonAudioProcessorEditor (Initial_demonAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    
    addAndMakeVisible(BigboyAnimation);
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setOpaque(true);
    setSize (530, 418);
    
    filterCutoffDial.setTextBoxStyle(Slider::NoTextBox, false, 0, 0);
    filterCutoffDial.setSliderStyle(Slider::SliderStyle::RotaryVerticalDrag);
    filterCutoffDial.setNumDecimalPlacesToDisplay(0);
    filterCutoffDial.setSize(45, 45);
    
    // dont change these two
    //filterCutoffDial.addListener(this);
    addAndMakeVisible(filterCutoffDial);
    
    filterResDial.setTextBoxStyle(Slider::NoTextBox, false, 0, 0);
	filterResDial.setSliderStyle(Slider::SliderStyle::RotaryVerticalDrag);
    filterResDial.setSize(45, 45);
    filterResDial.setTextValueSuffix("Q");
    
    // dont change these two
    //filterResDial.addListener(this);
    addAndMakeVisible(filterResDial);
    
    // dont change these two
    filterCutoffValue = new AudioProcessorValueTreeState::SliderAttachment (processor.mState, "cutoff", filterCutoffDial);
    filterResValue = new AudioProcessorValueTreeState::SliderAttachment (processor.mState, "resonance", filterResDial);
    
    filterCutoffDial.setLookAndFeel(&otherLookAndFeel);
    filterResDial.setLookAndFeel(&otherLookAndFeel);
    
    addAndMakeVisible(filterCutoffLabel);
    // filterCutoffLabel.setText("Cutoff Freq", dontSendNotification);
    mixLabel.attachToComponent(&filterCutoffDial, false);
    
    addAndMakeVisible(filterResLabel);
    //filterResLabel.setText("Q", dontSendNotification);
    filterResLabel.attachToComponent(&filterResDial, false);
    
    
    delayTimeDial.setTextBoxStyle(Slider::NoTextBox, false, 0, 0);
    delayTimeDial.setSliderStyle(Slider::SliderStyle::RotaryVerticalDrag);
    delayTimeDial.setSize(45, 45);
    
 //   delayTimeDial.addListener(this);
    addAndMakeVisible(delayTimeDial);
    
    delayMixDial.setTextBoxStyle(Slider::NoTextBox, false, 0, 0);
    delayMixDial.setSliderStyle(Slider::SliderStyle::RotaryVerticalDrag);
    delayMixDial.setSize(45, 45);
    
  //  delayMixDial.addListener(this);
    addAndMakeVisible(delayMixDial);
    
    delayFeedbackDial.setTextBoxStyle(Slider::NoTextBox, false, 0 ,0);
    delayFeedbackDial.setSliderStyle(Slider::SliderStyle::RotaryVerticalDrag);
    delayFeedbackDial.setSize(45, 45);
    
   // delayFeedbackDial.addListener(this);
    addAndMakeVisible(delayFeedbackDial);
    
    delayMixDial.setTextBoxStyle(Slider::NoTextBox, false, 0 ,0);
    delayMixDial.setSliderStyle(Slider::SliderStyle::RotaryVerticalDrag);
    delayMixDial.setSize(45, 45);

    //delayMixDial.addListener(this);
    addAndMakeVisible(delayMixDial);
   
    delayTimeDial.setLookAndFeel(&otherLookAndFeel);
    delayMixDial.setLookAndFeel(&otherLookAndFeel);
    delayFeedbackDial.setLookAndFeel(&otherLookAndFeel);
    
    delayTimeValue = new AudioProcessorValueTreeState::SliderAttachment (processor.mState, "delayTime", delayTimeDial);
    delayMixValue = new AudioProcessorValueTreeState::SliderAttachment (processor.mState, "mix", delayMixDial);
    delayFeedbackValue = new AudioProcessorValueTreeState::SliderAttachment (processor.mState, "feedback", delayFeedbackDial);
}

Initial_demonAudioProcessorEditor::~Initial_demonAudioProcessorEditor()
{
}

//==============================================================================
void Initial_demonAudioProcessorEditor::paint (Graphics& g)
{

}

void Initial_demonAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    
    filterCutoffDial.setBounds(341, getHeight() - 392, 80, 80);
	filterResDial.setBounds(403.5, getHeight() - 392, 80, 80);
    
    delayTimeDial.setBounds(343, getHeight()-333, 80, 80);
    delayMixDial.setBounds(463.96, getHeight() - 332, 80, 80);
    delayFeedbackDial.setBounds(404, getHeight() - 332, 80, 80);
	BigboyAnimation.setBounds(getLocalBounds());
    
    
}

/*void SeperatedDelayTestAudioProcessorEditor::sliderValueChanged(Slider* slider)
{
    if (slider == &mixSlider)
    {
        // dont change any of this void function
        // get the value on the current slider, pass to audio processor
        processor.mixLevel.setTargetValue(mixSlider.getValue());
        
    }
    
    if (slider == &filterCutoffDial)
     {
     
     // get the value on the current slider, pass to audio processor
     processor.freqLevel.setTargetValue(filterCutoffDial.getValue());
     
     }
     
     if (slider == &filterResDial)
     {
     
     // get the value on the current slider, pass to audio processor
     processor.resLevel.setTargetValue(filterResDial.getValue());
     
     }
    
}*/

