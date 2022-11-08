x, y, w, h = map(int, input().split())
width = x if x < w - x else w - x
height = y if y < h - y else h - y
print(width if width < height else height)