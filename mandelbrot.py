def mandelbrot(width, height, max_iter):
    for y in range(height):
        for x in range(width):
            zx, zy = 0, 0
            cX = (x - width / 4) * 4 / width
            cY = (y - height / 2) * 2 / height
            n = 0
            while zx * zx + zy * zy < 4 and n < max_iter:
                xtemp = zx * zx - zy * zy + cX
                zy, zx = 2.0 * zx * zy + cY, xtemp
                n += 1
            char = ' ' if n == max_iter else '*'
            print(char, end='')
        print()  

if __name__ == '__main__':
    mandelbrot(60, 30, 20)