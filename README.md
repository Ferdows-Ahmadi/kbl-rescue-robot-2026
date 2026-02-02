# KBL Rescue - TS-900 Tracked Rescue Robot (2026)

![KBL Rescue Banner](media/banner-placeholder.png)
> Open-source, educational tracked rescue robot for disaster-response scenarios and student competitions.

## Team
KBL Rescue is a small independent student robotics team led by Ahmad Ferdows Ahmadi (computer science student).
We build a tracked rescue robot based on the SZDoit TS-900 chassis for rough terrain and collapsed-structure simulations.

## Competitions
- RoboCup Rescue Robot League 2026 (Incheon, South Korea)
- TEKNOFEST Turkey
- TAC Challenge Norway
- RoboNation

## Project Goals
- Rugged navigation on uneven terrain
- Victim detection (thermal + visual)
- Mapping and localization (SLAM)
- Modular payload bay for research sensors

## Hardware

### Base Chassis: SZDoit TS-900 (Commercial)
Why we chose it:
- Shock-absorbing tracked suspension for rough terrain
- Metal frame for durability and payload capacity
- Compatible with Arduino/Raspberry Pi integration

Placeholder specs (verify and update with measured values):
- Approx size: 550 x 280 x 110 mm [Update with measured dimensions]
- Approx weight: 3.6 kg (listing-dependent)
- Approx design load: 5 kg (listing-dependent)
- Materials: aluminum alloy frame, plastic tracks
- Motors: 9V/12V DC motors with encoders (listing-dependent)

Example product listing (non-official):
- https://uquid.com/shop/product/szdoit-4wd-metal-large-tracked-tank-chassis-kit-shock-absorbing-crawler-robot-high-torque-motor-heavy-load-diy-4-drive-platform-color-gold-with-9v-motor-iRPoTDWVDBwup
[Add Amazon/AliExpress link if preferred]

### CAD/Blueprints
No official CAD/STEP/STL files are publicly available from the manufacturer. We will measure the chassis and create our own mounts, plates, and accessories.

### Planned Custom Mods (Our Future STEP/STL)
- Sensor mast and camera/LiDAR mounts
- Top plate with modular pattern (M3/M4)
- Electronics enclosure + battery bay
- Front bumper and tow point
- Quick-swap payload tray

### Reference Models and Similar Tracked Platforms
Use these for inspiration and mechanical concepts:
- HowToMechatronics (fully 3D printed tank): https://howtomechatronics.com/projects/fully-3d-printed-tank-tracked-robot-platform/
- Domechy DZ01 tracked robot project: https://domechy.com/projects/dz01-diy-3d-printed-tracked-mobile-robot/
- GrabCAD tank track model: https://grabcad.com/library/tank-track-2
- GrabCAD tracked tread assembly tutorial: https://grabcad.com/tutorials/robotic-tank-tread-assembly-fusion-360-tutorial-tracked-robot-part-2
- Sketchfab tracked robot example: https://sketchfab.com/3d-models/builder-tracked-robot-171a8ad07bc74f67af520ac8c67ae06f
- Printables RC tracked robot by Floppy Lab: [Add Printables link]

## Software Status
| Subsystem | Stack | Status |
| --- | --- | --- |
| Low-level motor control | Arduino/C++ | Placeholder |
| High-level autonomy | Python | Placeholder |
| Robotics middleware | ROS 2 | Planned |
| Perception | OpenCV + sensors | Planned |

## Repository Structure
```
hardware/
  ts900-reference.md
  bom.md
  wiring-diagram-placeholder.txt
src/
  arduino/arduino-sketch.ino
  python/main.py
docs/
  team-overview.md
media/
  README.md
```

## Setup

### Clone
```
git clone https://github.com/[Your GitHub username]/kbl-rescue-robot-2026.git
cd kbl-rescue-robot-2026
```

### Python (if used)
```
python -m venv .venv
.venv\Scripts\activate
pip install -r requirements.txt
```

### Arduino
- Open `src/arduino/arduino-sketch.ino` in Arduino IDE
- Select board and port
- Upload

## Contributing
We welcome contributions from students, mentors, and the community.
See `CONTRIBUTING.md` for guidelines.

## Sponsors and Acknowledgments
This project is open-source and educational (non-commercial). We are open to hardware/electronics sponsorships and in-kind support.
Special thanks to GitHub Education for supporting student teams.

## License
MIT License. See `LICENSE`.

