# 🔊 Voice-Controlled Home Automation System

### *IoT | ESP32 | Sinric Pro | Smart Home Automation*

## 📌 Project Overview

This project demonstrates a **voice-controlled smart home automation system** built using the **ESP32 microcontroller**, **2-channel relay module**, and **Sinric Pro IoT platform**.
The system enables seamless control of a **bulb** and **fan** using **voice commands** through **Amazon Alexa or Google Assistant**.

The goal of this project is to create a **cost-effective, scalable, and cloud-connected** home automation solution that can be extended to multiple appliances.

---

## 🎯 Key Objectives

* Enable hands-free control of home appliances
* Integrate ESP32 with Sinric Pro cloud services
* Build a reliable Wi-Fi based IoT system
* Demonstrate real-time automation using voice assistants

---

## ✨ Features

* 🎤 **Voice Control** (Alexa / Google Assistant)
* 🌐 **Cloud Integration** via Sinric Pro
* ⚡ **Instant ON/OFF response**
* 🔌 **AC appliance control** using a relay
* 📶 **Wireless communication** over Wi-Fi
* 📱 **Mobile app support** through Sinric Pro
* 🧩 **Scalable system**—add more devices easily

---

## 🧰 Hardware Components

| Component                  | Description                          |
| -------------------------- | ------------------------------------ |
| **ESP32**                  | Main Wi-Fi enabled microcontroller   |
| **2-Channel Relay Module** | Switches AC loads like bulb/fan      |
| **Bulb (AC Load)**         | Output device                        |
| **Fan (AC Load)**          | Output device                        |
| **Sinric Pro**             | IoT cloud platform for voice control |
| **Arduino IDE**            | Programming environment              |

---

## 🛠 System Workflow

1. ESP32 connects to Wi-Fi and registers with Sinric Pro cloud.
2. The user issues a voice command like:

   * *“Alexa, turn on the light”*
   * *“Alexa, turn off the fan”*
3. Cloud service forwards this command to the ESP32.
4. ESP32 triggers the appropriate relay channel.
5. Relay switches the appliance **ON/OFF**.
6. Status updates are reflected on the app and voice assistant.

---

## ⚙️ System Architecture

```
Voice Command  
      ↓  
Alexa / Google Assistant  
      ↓  
Sinric Pro Cloud Platform  
      ↓  
ESP32 Microcontroller  
      ↓  
2-Channel Relay Module  
      ↓  
Bulb / Fan (AC Loads)
```

---

## 🔌 Circuit Overview

* ESP32 GPIO pins control relay IN1 and IN2
* Relay COM–NO terminals connected to AC appliances
* ESP32 powered via USB or 5V supply
* AC mains powers bulb & fan



---

## 📸 Applications

* Smart home automation
* IoT-based energy saving
* Remote control for elderly or differently-abled users
* Home/office automation prototypes

---

## 📍 Results & Performance

* Instant voice response with minimal latency
* Stable cloud and Wi-Fi communication
* Smooth operation with both Alexa and mobile app
* Reliable AC load switching via relay module

---

## 🧠 Skills & Technologies

* ESP32 programming (C/C++)
* IoT cloud integration (Sinric Pro)
* Relay-based switching
* Voice assistant automation
* Wi-Fi communication protocols
* Smart home system design

---

## 🚀 Future Enhancements

* Support for more appliances (4/8 channel relay)
* Sensor-based automation (temperature, PIR, LDR)
* Custom mobile dashboard
* Real-time energy monitoring
* Full-room smart home setup

---

## 📝 Conclusion

This project successfully transforms basic home appliances into **intelligent, voice-controlled devices** using the ESP32 and Sinric Pro.
It is a practical, scalable, and beginner-friendly introduction to IoT-based smart home automation systems.



