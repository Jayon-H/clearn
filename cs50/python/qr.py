import qrcode

img = qrcode.make("https://jayon-h.github.io")
img.save("qr.png","PNG")