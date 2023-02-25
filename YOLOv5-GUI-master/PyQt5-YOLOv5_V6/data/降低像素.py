from PIL import Image
import os


if __name__ == '__main__':
    root = 'E:\大三上\深度学习\yolov5-master\my_datas\images\\test'
    savedir = 'E:\YOLOv5-GUI-master\PyQt5-YOLOv5_V6\data\image_resize'
    max_size = 1080
    dir = os.listdir(root)
    for i in dir:
        image = Image.open(root + '\\' +i)
        h, w = image.size
        k = image
        if h > max_size or w > max_size:
            if w > h:
                scal = max_size / w
                nw = max_size
                nh = int(scal * h)
                k = image.resize((nh,nw), Image.ANTIALIAS)
            else:
                scal = max_size / h
                nw = int(scal * w)
                nh = max_size
                k = image.resize((nh, nw), Image.ANTIALIAS)
        k.save(savedir + "\\" +i)