#Notes for Exersices

# 1
Only thing we have to change is the arguments inside the *printk* function
```bash
journalctl --since "10 minutes ago" | grep kernel
Nov 16 22:09:52 hparch kernel: usb 1-4: reset full-speed USB device number 3 using xhci_hcd
Nov 16 22:09:54 hparch kernel: Hi
Nov 16 22:10:13 hparch kernel: Bye
Nov 16 22:12:17 hparch kernel: Hello World I live in your distro now :)
Nov 16 22:12:40 hparch kernel: Sad to see you leave me :(
```