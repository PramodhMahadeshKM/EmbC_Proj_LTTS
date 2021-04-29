
# Embedded C Programming with Continuous Integration and Code Quality 

## Description
The aim of this project is to turn on the Heater and sense the temperature in the environment of the passenger when he is seated on the seat and the Heater switch is turned on.

## Implementation
* The passenger's seating status and the Heater switch is shown using 2 switches.To indicate the success of this condition and to show Heater is ON, LED glows.
* The sensing of the temperature is depicted with the help of a potentiometer.
* The analaog value from pot is converted to digital depending on the given limits with respect to voltage in terms of temperature.
* The output from this ADC in terms of PWM is shown in the oscilloscope.
* The data in terms of temperature is transmitted with the help of USART and shown in the Serial Monitor.

## Working in Action
### ON
![ON](https://github.com/PramodhMahadeshKM/EmbC_Proj_LTTS/blob/master/simulation/ON.png)
### OFF
![OFF](https://github.com/PramodhMahadeshKM/EmbC_Proj_LTTS/blob/master/simulation/OFF.png)

### Continous Integration and Code Quality
|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/PramodhMahadeshKM/EmbC_Proj_LTTS/actions/workflows/compile.yml/badge.svg)](https://github.com/PramodhMahadeshKM/EmbC_Proj_LTTS/actions/workflows/compile.yml)|[![Cppcheck](https://github.com/PramodhMahadeshKM/EmbC_Proj_LTTS/actions/workflows/CodeQulaity.yml/badge.svg)](https://github.com/PramodhMahadeshKM/EmbC_Proj_LTTS/actions/workflows/CodeQulaity.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/decac9e726c5428c8eea1493c929dede)](https://www.codacy.com/gh/PramodhMahadeshKM/EmbC_Proj_LTTS/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=PramodhMahadeshKM/EmbC_Proj_LTTS&amp;utm_campaign=Badge_Grade)|
