from PIL import Image
#this python file will be accessed from the filtergram.py file

def load_img(filename):
    im = Image.open(filename)
    show_img(im)
    obamicon(im)
    grayShades(im)
    invert(im)
    #return im

def show_img(im):
    im.show()

'''def save_img(im, filename):
    im.save(filename, "jpeg")'''

def obamicon(im):
    #Load the pixel data from im
    pixels = im.getdata()
    #create a list to hold the new image pixel data`
    new_pixels = []

    #define color constants to use for recoloring
    darkBlue = (0, 51, 76)
    red = (217,26,35)
    lightBlue = (112, 150, 158)
    yellow = (252, 227, 166)

    #Process the pixels in the Image
    for p in pixels:
        #Pixel intensity = R value + G value + B value
        intensity = p[0] +p[1] + p[2]

        if intensity <182:
            new_pixels.append(darkBlue)
        elif intensity >= 182 and intensity <364:
            new_pixels.append(red)
        elif intensity >= 364 and intensity <546:
            new_pixels.append(lightBlue)
        elif intensity >= 546:
            new_pixels.append(yellow)

    #Save the filtered pixels as a new Image
    newim = Image.new("RGB", im.size)
    newim.putdata(new_pixels)
    show_img(newim)
    return newim

def avg_pixel(pixel):
    new_pixels = []
    avg = (pixel[0]+pixel[1]+pixel[2]) // 3 #this will find the average to make a gray shade
    new_pixels.append(avg)
    return (avg,avg,avg)

def grayShades(im):
    pixels = im.getdata()
    new_pixels = []

    for p in pixels:
        new_p = avg_pixel(p)
        new_pixels.append(new_p)

    newim = Image.new("RGB", im.size)
    newim.putdata(new_pixels)
    show_img(newim)
    return newim

def invert(im):
    pixels = im.getdata()
    new_pixels = []
    for p in pixels:
        new_r = 255-p[0]
        new_g = 255-p[1]
        new_b = 255-p[2]
        new_pixels.append((new_r, new_g, new_b))

    newim = Image.new("RGB", im.size)
    newim.putdata(new_pixels)
    show_img(newim)
    return newim
