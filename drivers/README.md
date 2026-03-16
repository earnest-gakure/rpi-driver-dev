# Raspberry Pi 5 Driver Development Projects

## 📁 Directory Structure
```
drivers/
├── chapter3/          # Basic kernel modules
│   ├── lab3.1_helloworld/
│   └── lab3.2_parameters/
├── chapter4/          # Character drivers
│   ├── lab4.1_char_manual/
│   ├── lab4.2_char_class/
│   └── lab4.3_char_misc/
└── chapter5/          # Platform drivers (upcoming)
```

## 🚀 Quick Commands

### Build a specific lab:
```bash
cd drivers/chapter4/lab4.3_char_misc
make clean
make
make deploy
```

### Build app for a lab:
```bash
cd drivers/chapter4/lab4.3_char_misc/apps
make clean
make
```

## 📚 Lab Index

### Chapter 3: The Simplest Drivers
- **lab3.1_helloworld** - Basic hello world module
  - Demonstrates: module_init/exit, pr_info
- **lab3.2_parameters** - Module with parameters
  - Demonstrates: module_param, sysfs parameters

### Chapter 4: Character Drivers
- **lab4.1_char_manual** - Manual device creation
  - Demonstrates: register_chrdev_region, cdev, mknod
  - Major: 202 (hardcoded)
- **lab4.2_char_class** - Automatic device creation
  - Demonstrates: alloc_chrdev_region, class_create, device_create
  - Major: Dynamic allocation
- **lab4.3_char_misc** - Misc framework (recommended)
  - Demonstrates: misc_register (simplest method)
  - Major: 10 (misc devices)

### Chapter 5: Platform Drivers
- Coming soon...

## 🎯 Learning Path

1. Start with Chapter 3 to understand module basics
2. Move to Chapter 4 to learn user-kernel communication
3. Progress to Chapter 5 for actual hardware control

## 📝 Notes

- All drivers use kernel 6.6.78 for Raspberry Pi 5
- Cross-compiled from x86_64 Ubuntu to aarch64
- Deployed via SSH/SCP to Pi

## 🔧 Troubleshooting

**If compilation fails:**
```bash
# Make sure kernel source path is correct
ls ~/rpi-driver-dev/linux
```

**If deployment fails:**
```bash
# Check SSH connection
ssh pi@192.168.1.123

# Check Pi directories exist
ls ~/chapter4/lab4.3/
```
