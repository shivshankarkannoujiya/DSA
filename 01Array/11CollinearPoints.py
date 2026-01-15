# Approach:1 Slope Method

def isCollinearPoints(x1, x2, x3, y1, y2, y3):
    if((y2 - y1)*(x3 - x2)==(y3 - y2)*(x2 - x1)):
        return True
    else:
        return False

def are_collinearPoints(x1, x2, x3, y1, y2, y3):
    if x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2) != 0:
        return False
    else:
        return True


if __name__ == "__main__":
    x1, x2, x3, y1, y2, y3 = 1,1,1,6,0,9
    isCollinear = are_collinearPoints(x1, x2, x3, y1, y2, y3)

    if isCollinear:
        print("Given points are colliinear")
    else:
        print("Given points are non-collinear ")
