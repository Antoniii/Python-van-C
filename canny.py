import cv2

 
im = cv2.imread('img1.png')
edges = cv2.Canny(im,25,255,L2gradient=False)
cv2.imwrite('out-img1.png', edges)