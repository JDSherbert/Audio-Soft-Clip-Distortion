![image](https://github.com/JDSherbert/Audio-Soft-Clip-Distortion/assets/43964243/73ee52dc-d94a-47aa-882f-05fbca96f46d)

# Audio: Soft Clip Distortion

<!-- Header Start -->
<a href = "https://learn.microsoft.com/en-us/cpp/cpp-language"> <img height="40" img width="40" src="https://cdn.simpleicons.org/c++"> </a>
<img align="right" alt="Stars Badge" src="https://img.shields.io/github/stars/jdsherbert/Audio-Soft-Clip-Distortion?label=%E2%AD%90"/>
<img align="right" alt="Forks Badge" src="https://img.shields.io/github/forks/jdsherbert/Audio-Soft-Clip-Distortion?label=%F0%9F%8D%B4"/>
<img align="right" alt="Watchers Badge" src="https://img.shields.io/github/watchers/jdsherbert/Audio-Soft-Clip-Distortion?label=%F0%9F%91%81%EF%B8%8F"/>
<img align="right" alt="Issues Badge" src="https://img.shields.io/github/issues/jdsherbert/Audio-Soft-Clip-Distortion?label=%E2%9A%A0%EF%B8%8F"/>
<img align="right" src="https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Fgithub.com%2FJDSherbert%2FAudio-Soft-Clip-Distortion%2Fhit-counter%2FREADME&count_bg=%2379C83D&title_bg=%23555555&labelColor=0E1128&title=🔍&style=for-the-badge">
<!-- Header End --> 

-----------------------------------------------------------------------

<a href=""> 
  <img align="left" alt="Audio Processing" src="https://img.shields.io/badge/Audio%20Processing-black?style=for-the-badge&logo=audacity&logoColor=white&color=black&labelColor=black"> </a>
  
<a href="https://choosealicense.com/licenses/mit/"> 
  <img align="right" alt="License" src="https://img.shields.io/badge/License%20:%20MIT-black?style=for-the-badge&logo=mit&logoColor=white&color=black&labelColor=black"> </a>
  
<br></br>

-----------------------------------------------------------------------
## Overview
Audio distortion is an intentional modification of an audio signal to alter its waveform, introducing non-linearities and harmonic content that was not present in the original signal. Distortion can be applied for various artistic, creative, or practical reasons in music production, sound design, and audio processing.

### Types of Audio Distortion

#### Clipping Distortion 
Clipping distortion occurs when the amplitude of a signal exceeds the maximum allowed value, causing the waveform to "clip" or get cut off at a certain level. Introduces harmonics, resulting in a more aggressive, gritty sound. It's normally used in guitar distortion pedals, rock music, and some electronic music genres.

#### Waveshaping Distortion
Waveshaping involves modifying the shape of the audio waveform using non-linear functions. Can produce a wide range of tonal variations, from subtle warmth to extreme fuzziness. Mostly used in various musical genres for creative sound shaping and experimentation.

#### Saturation Distortion
Saturation is a form of distortion that simulates the characteristics of analog saturation, where the signal is driven into the nonlinear region of a device. Adds harmonics, compression, and a warm, vintage feel to the sound. You'll normally see it applied to commonly applied to vocals, drums, and entire mixes in both music production and audio mastering.

#### Modulation Distortion:
Modulation distortion involves the use of modulation effects, such as ring modulation or frequency modulation, to alter the frequency content of the audio signal. It can produce metallic, robotic, or frequency-shifted sounds. It's also often used in experimental music, electronic genres, and sound design.

### Clipping

![image](https://github.com/JDSherbert/Audio-Soft-Clip-Distortion/assets/43964243/977b31c0-0aca-4114-a84d-8b31591b484f)


### Hard Clip vs Soft Clip

![image](https://github.com/JDSherbert/Audio-Soft-Clip-Distortion/assets/43964243/b16984dc-806c-4939-864e-a320b489be88)


The distortion effect implemented in the provided C++ code is a basic form of soft clipping. Soft clipping is a non-linear process that rounds off the peaks of a waveform smoothly, resulting in a more gradual distortion compared to hard clipping.

In the code, the tanh function is used to apply soft clipping to each audio sample in the buffer. The tanh function produces a smooth, sigmoidal curve, which introduces a gentle distortion when applied to the audio signal. This type of distortion is often used in audio effects to create warm, saturated tones or simulate the characteristics of analog equipment.



-----------------------------------------------------------------------

