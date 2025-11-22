# Voice-Manually-Controlled-Home-Devices
Built a voice-controlled home automation system using ESP32, a 2-channel relay, and Sinric Pro. Allows control of a bulb and fan through Alexa/Google Assistant using Wi-Fi and cloud integration. Demonstrates simple, low-cost IoT-based smart home automation.
📌 Overview

This project showcases a Voice-Controlled Home Automation System built using the ESP32 Wi-Fi microcontroller, 2-channel relay module, and the Sinric Pro IoT platform. The system allows you to control a bulb and fan using voice commands via Alexa or Google Assistant.

The main goal of this project is to create a low-cost, reliable, and expandable home automation setup ideal for IoT beginners and enthusiasts.

✨ Features

🎙 Voice control using Alexa/Google Assistant

🌐 Cloud communication through Sinric Pro

⚡ Real-time ON/OFF switching

🔌 Control of AC appliances using a relay

📶 Wi-Fi-enabled ESP32 system

🧩 Scalable design for adding more devices

🧰 Components Used

ESP32 Development Board

2-Channel Relay Module

Bulb (AC Load)

Fan (AC Load)

Sinric Pro IoT Platform

Arduino IDE

🛠 Working Principle

ESP32 connects to your Wi-Fi network and the Sinric Pro cloud.

Appliances (bulb & fan) are connected to the relay module.

Voice commands such as:

“Alexa, turn ON the light”

“Alexa, turn OFF the fan”

Voice assistant → Sinric Pro cloud → ESP32 → Relay activation.

Relay switches the appliances ON/OFF instantly.
