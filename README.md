# INITIAL DEMON

**DO YOU LIKE ANIME? DO YOU LIKE MEMES? DO YOU OCCASSIONALLY PARTAKE IN AUDIO CREATION WHERE YOU DESPERATELY NEED AN ANIME-THEMED PLUGIN???** 

**DON’T LIE MY FELLOW ~~WEEBS~~ ANIME ENTHUSIASTS, WE KNOW YOU DO AND _BOY OH BOY_ DO WE HAVE THE PRODUCT FOR YOU!**

![alt text](https://i.imgur.com/fRybR1S.gif "Eto")

### /// INTRODUCING ///
### /// INITIAL DEMON ///

![alt text](https://i.imgur.com/cbV3Zus.png "Initial Demon")

## Table of Contents  
[Initial Demon Demostration Videos](#initialdemondemonstrationvideos)

[Initial Demon TLDR](#initialdemontldr)

[Installation Guide](#installation-guide)

[Initial Demon In-depth](#initial-demon-in-depth)

[Contributing](#contributing)

[License](#license)

<a name="initialdemondemonstrationvideos"/>
<a name="initialdemontldr"/>
<a name="installationguide"/>
<a name="initialdemonindepth"/>

## Initial Demon Demonstration Videos

### Song Demonstration (WORK IN PROGRESS)

![alt text](https://i.imgur.com/aKIrEBF.png "Coming Soon")

### White Noise Demonstration (WORK IN PROGRESS)

![alt text](https://i.imgur.com/aKIrEBF.png "Coming Soon")

## Initial Demon TLDR (WORK IN PROGRESS)

Initial Demon is a simple and intuitive audio plugin with an anime aesthetic. It utilises a 2-parameter IIR Filter and a 3-parameter Delay variation. Initial Demon was designed for use with a multitude of different instruments in mind, such as
* Synths
* Baritone Electric Guitars
* 7/8 String Electric Guitars
* Bass Guitars
* And anything else you want to put through it, it's completely up to you!

We created Initial Demon as a more demonic/demented version of Initial Delay, for use with darker and more ominous sounds. As such it features a darker aesthetic, as well as a cleaner futuristic UI appearance.

Initial Demon has full automation and save state capabilities for easy use within your favourite DAW! Initial Demon features installers for both Windows and Mac systems, as well as access to the JUCE project itself (please refer to license)

Initial Demon was inspired by the anime "Initial D" and it's internet memes, click the link to the Youtube video below to **_witness the majesty that is Initial D_** 

[![IMAGE ALT TEXT HERE](http://img.youtube.com/vi/fWhZWX3FnXg/0.jpg)](https://www.youtube.com/watch?v=fWhZWX3FnXg)

Initial Demon also features Eto from the anime "Tokyo Ghoul Re", click the link to the Youtube video below to **_witness the awesomeness that is Tokyo Ghoul Re_**

[![IMAGE ALT TEXT HERE](http://img.youtube.com/vi/R-NqoTydBYg/0.jpg)](https://www.youtube.com/watch?v=R-NqoTydBYg)

We created the plugin with the mindset of making a great-sounding plugin first and foremost, with a visually-appealing aesthetic following that. 

We wanted to release Initial Demon for free, but if you wish to donate it would be hugely appreciated! We are two university students from Wellington, New Zealand in our final year of a Bachelor of Commercial Music at Massey University. We will always keep this plug-in free, but feel free to throw us a nickel or two via the Paypal button below if you enjoy our work!


[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=YP29EFC3QEU4L)

Additionally, if you want to get in contact with us please refer to our personal websites:

- https://tgovers1998.wixsite.com/taylorgovers

- https://ethanzacharypunter.wixsite.com/studionani

We'd love to hear from you about our plug-in, whether it be recommendations, issues or just a nice message to us!

From the team behind **_Initial Demon_**, we really hope that you enjoy our plugin and make some awesome tunes with it!
Thank you!

-- Studio Nani --

## Installation Guide

For Mac users, we recommend cloning/downloading the repository to your computer and installing the plugin through the easy-to-use DMG installer. Simply mount the disk image/DMG (InitialDemon_MAC.dmg) and then open the .pkg file found inside. Follow the instructions within the .pkg installer and you'll be good to go!

For Windows users, we recommend downloading the repository to your computer and installing the plugin through the easy-to-use EXE installer (InitialDemon_WINDOWS.exe)

If using the JUCE project directly, please refer to a youtube guide or the JUCE website if you are unsure on how to begin! We recommend this [video by Miskat Music](https://www.youtube.com/watch?v=rGzSSNjbXlA "https://www.youtube.com/watch?v=rGzSSNjbXlA") or the [JUCE Tutorials Page](https://juce.com/learn/tutorials "https://juce.com/learn/tutorials").

Another great source of help we can recommend is [The Audio Programmer Youtube Page](https://www.youtube.com/channel/UCpKb02FsH4WH4X_2xhIoJ1A "https://www.youtube.com/channel/UCpKb02FsH4WH4X_2xhIoJ1A") 

## Initial Demon In-depth (WORK IN PROGRESS)

Initial Demon was primarily built with [Projucer](https://juce.com/ "https://juce.com/")/[XCode](https://developer.apple.com/xcode/ "https://developer.apple.com/xcode/") as a plugin suited specifically to those who maybe don’t know their way round plugins, but are wanting something cool and intuitive to add that extra “oomph!” to their work.

It utilises an always-active low-pass IIR filter and an optional delay. IIR filter stands for an Infinite Impulse Response filter, which is unique with how the decay never really reaches zero (to put it simply!). We choose to use this as we personally thought it sounded the best out of the different kinds of filters that we tested. 

The IIR filter has two parameters that you can change; the frequency Cutoff and the Q-Factor. 
* The Cuttoff knob changes the maximum frequency that the filter will let through (as a low-pass filter)
* The Q-Factor knob changes the resonance or **Q** of the filter

The Delay feature has three parameters that you can change; the Delay Time, Feedback and Mix. 
* The Delay Time knob changes the overall length of the Delay sample (ie how long the sample is that it delays)
* The Feedback knob changes how long the delayed audio repeats for
* The Mix knob adjusts the wet/dry mix of the delay and original audio

If you want to essentially “turn off” the delay, just turn the delay Time or Mix knob to its lowest value. 

## Contributing and Inspiration

Currently Initial Demon is not open to contribution, but this could change in the future!

Taylor Govers: Processor Editor, Repository/README/License Management, Assistant GUI Editor

Ethan Punter: GUI Editor, GUI Repository Management, Photoshop Editor

For this project, we had inspiration and were helped with code by this youtuber. They make awesome work so please check them out and support them!

[The Audio Programmer](https://www.youtube.com/channel/UCpKb02FsH4WH4X_2xhIoJ1A "https://www.youtube.com/channel/UCpKb02FsH4WH4X_2xhIoJ1A")

And of course, huge inspiration from the animes behind the meme [Initial D](https://myanimelist.net/anime/185/Initial_D_First_Stage "https://myanimelist.net/anime/185/Initial_D_First_Stage"), the creator [Shigeno Shuuichi](https://myanimelist.net/people/2357/Shuuichi_Shigeno "https://myanimelist.net/people/2357/Shuuichi_Shigeno") and the studio that created it [Gallop](https://myanimelist.net/anime/producer/36/Gallop "https://myanimelist.net/anime/producer/36/Gallop")  

as well as [Tokyo Ghoul](https://myanimelist.net/anime/22319/Tokyo_Ghoul "https://myanimelist.net/anime/22319/Tokyo_Ghoul"), the creator [Sui Ishida](https://myanimelist.net/people/15753/Sui_Ishida "https://myanimelist.net/people/15753/Sui_Ishida") and the studio that created it [Studio Pierrot](https://myanimelist.net/anime/producer/1/Studio_Pierrot "https://myanimelist.net/anime/producer/1/Studio_Pierrot")

## License (WORK IN PROGRESS)

[GNU GPLv3](https://github.com/TGovers/Initial_Demon/blob/master/LICENSE.txt)
