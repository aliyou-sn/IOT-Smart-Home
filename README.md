# IOT Smart Home

<p align="center">
    <a href="" rel="noopener">
        <img width=200px height=200px src = "https://www.qualityimprint.com/cdn/shop/products/Q143911-wifi-smart-plugs-with-logo-1_large.jpg?v=1570048495" alt="Smart Socket">
    </a>
</p>

<h3 align="center">Smart Socket v1.0</h3>



IOT based Smart socket that monitors electricity consumption of the socket outlet and remote control with home assistant.The total power consumption per hour, voltage level, and current are displayed on an OLED display, and are sent to home assistant via MQTT protocol

## Features

1. Provive realtime power readings
2. Constant wifi connection
3. Inbuit MQTT discovery assistant
4. remote control of the power outlet
5. Works with Home assistant

## Screenshots

3D model:
<a href="">
        <img width=1000px height=600px src = "https://github.com/aliyou-sn/Smart-Socket/blob/main/images/socket3d.png" alt="Smart Socket">
    </a>

Schematics:

<a href="">
        <img width=1000px height=600px src = "https://github.com/aliyou-sn/Smart-Socket/blob/main/images/Schematic_Isocket.png" alt="Smart Socket">
    </a>
PCB:

<a href="">
        <img width=1000px height=600px src = "https://github.com/aliyou-sn/Smart-Socket/blob/main/images/PCB3D.png" alt="Smart Socket">
    </a>

Home assistant discovery:


<a href="">
        <img width=1000px height=600px src = "https://github.com/aliyou-sn/Smart-Socket/blob/main/images/HA.png">
    </a>


## Hardware Requirements

* ESP32
* ACS712 Current sensor
* HLK-5M05
* 2P Screw terminal
* SSD1306 OLED
* 5V coil Relay
* 1N4001 relay
* 1K resistor x2
* BC572 Transistor
* LED
