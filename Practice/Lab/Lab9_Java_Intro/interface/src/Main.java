interface Line {
    int length = 0;
}

interface Polygon {
    abstract void getArea();
}

class Rectangle implements Line, Polygon {
    public void getArea() {}
}