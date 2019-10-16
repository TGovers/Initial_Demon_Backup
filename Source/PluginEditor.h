/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class AnimatedComponent : public Component, public Timer
{
public:
	void paint(Graphics& g) override;
	void rotateImage();
	Image A1 = ImageCache::getFromMemory(BinaryData::A1_png, BinaryData::A1_pngSize);
	Image A2 = ImageCache::getFromMemory(BinaryData::A2_png, BinaryData::A2_pngSize);
	Image A3 = ImageCache::getFromMemory(BinaryData::A3_png, BinaryData::A3_pngSize);
	Image A4 = ImageCache::getFromMemory(BinaryData::A4_png, BinaryData::A4_pngSize);
	Image A5 = ImageCache::getFromMemory(BinaryData::A5_png, BinaryData::A5_pngSize);
	Image A6 = ImageCache::getFromMemory(BinaryData::A6_png, BinaryData::A6_pngSize);
	Image A7 = ImageCache::getFromMemory(BinaryData::A7_png, BinaryData::A7_pngSize);
	Image A8 = ImageCache::getFromMemory(BinaryData::A8_png, BinaryData::A8_pngSize);
	Image A9 = ImageCache::getFromMemory(BinaryData::A9_png, BinaryData::A9_pngSize);
	Image A10 = ImageCache::getFromMemory(BinaryData::A10_png, BinaryData::A10_pngSize);
	Image A11 = ImageCache::getFromMemory(BinaryData::A11_png, BinaryData::A11_pngSize);
	Image A12 = ImageCache::getFromMemory(BinaryData::A12_png, BinaryData::A12_pngSize);
	Image A13 = ImageCache::getFromMemory(BinaryData::A13_png, BinaryData::A13_pngSize);
	Image A14 = ImageCache::getFromMemory(BinaryData::A14_png, BinaryData::A14_pngSize);
	Image A15 = ImageCache::getFromMemory(BinaryData::A15_png, BinaryData::A15_pngSize);
	Image A16 = ImageCache::getFromMemory(BinaryData::A16_png, BinaryData::A16_pngSize);
	Image A17 = ImageCache::getFromMemory(BinaryData::A17_png, BinaryData::A17_pngSize);
	Image A18 = ImageCache::getFromMemory(BinaryData::A18_png, BinaryData::A18_pngSize);
	Image A19 = ImageCache::getFromMemory(BinaryData::A19_png, BinaryData::A19_pngSize);
	Image A20 = ImageCache::getFromMemory(BinaryData::A20_png, BinaryData::A20_pngSize);
	Image A21 = ImageCache::getFromMemory(BinaryData::A21_png, BinaryData::A21_pngSize);
	Image A23 = ImageCache::getFromMemory(BinaryData::A23_png, BinaryData::A23_pngSize);
	Image A24 = ImageCache::getFromMemory(BinaryData::A24_png, BinaryData::A24_pngSize);
	Image A25 = ImageCache::getFromMemory(BinaryData::A25_png, BinaryData::A25_pngSize);
	Image A26 = ImageCache::getFromMemory(BinaryData::A26_png, BinaryData::A26_pngSize);
	Image images[26] = { A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12 ,A13, A14, A15, A16, A17, A18, A19, A20, A21, A23, A24, A25, A26};

	int currentIndex;
	Image currentImage;

	AnimatedComponent();
	//~AnimatedComponent();

	void timerCallback() override;


};

class OtherLookAndFeel : public LookAndFeel_V4
{
public:
	
	Image img1 = ImageCache::getFromMemory(BinaryData::DemonKnob_png, BinaryData::DemonKnob_pngSize);
	
	void drawRotarySlider(Graphics &g, int x, int y, int width, int height, float sliderPos, float rotaryStartAngle, float rotaryEndAngle, Slider &slider) override
	{
		if (img1.isValid())
		{
			const double rotation = (slider.getValue()
				- slider.getMinimum())
				/ (slider.getMaximum()
					- slider.getMinimum());

			const int frames = img1.getHeight() / img1.getWidth();
			const int frameId = (int)ceil(rotation * ((double)frames - 1.0));
			const float radius = jmin(width / 2.0f, height / 2.0f);
			const float centerX = x + width * 0.5f;
			const float centerY = y + height * 0.5f;
			const float rx = centerX - radius - 1.0f;
			const float ry = centerY - radius;

			g.drawImage(img1,
				(int)rx,
				(int)ry,
				2 * (int)radius,
				2 * (int)radius,
				0,
				frameId*img1.getWidth(),
				img1.getWidth(),
				img1.getWidth());
		}
		
		
		
	}
		
};


class Initial_demonAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    Initial_demonAudioProcessorEditor (Initial_demonAudioProcessor&);
    ~Initial_demonAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:

    AnimatedComponent BigboyAnimation;
    
    juce::Image backGround;
    
    OtherLookAndFeel otherLookAndFeel;
   // OtherLookAndFeel2 otherLookAndFeel2;
   // OtherLookAndFeel3 otherLookAndFeel3;
    
    Slider filterCutoffDial;
    Slider filterResDial;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> filterCutoffValue;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> filterResValue;
    
    Label filterCutoffLabel;
    Label filterResLabel;
    
    Slider delayTimeDial;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> delayTimeValue;
    Label delayTimeLabel;
    
 //   Slider delayEnablerDial;
//    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> delayEnablerValue;
//    Label delayEnablerLabel;
    
   // ShapeButton delayEnablerButton;
    //std::unique_ptr<AudioProcessorValueTreeState::ButtonAttachment> delayEnableAttachment;
  //  ScopedPointer<AudioProcessorValueTreeState::ButtonAttachment> delayEnableValue;
    
    Slider mixSlider;
    Label mixLabel;
    
    Slider delayMixDial;
    Slider delayFeedbackDial;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> delayMixValue;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> delayFeedbackValue;
    
    Label delayMixLabel;
    Label delayFeedbackLabel;
    
    
    
 //   std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> mixAttachment;
    
 //   void sliderValueChanged(Slider * slider) override;
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Initial_demonAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Initial_demonAudioProcessorEditor)
};
