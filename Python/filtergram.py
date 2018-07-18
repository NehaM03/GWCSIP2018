import filters

def main():
    filename = input("Enter the name of the image you would like to edit: ")
    filters.load_img(filename)
    #updated = filters.obamicon(img)
    #updated = filters.grayShades(img)

    #filters.save_img(updated, "recolored.jpeg")

main()
