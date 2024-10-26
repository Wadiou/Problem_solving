package Test2;

class Point {
    private int x, y;

    public Point(int x, int y) throws Exception {
        if (x < 0 || y < 0) {
            throw new Exception("herewe are");

        }
        this.x = x;
        this.y = y;
    }

    public void affiche() {
        System.out.println("coordonnees : " + x + " " + y);
    }
}

class ErrConst extends Exception {
    public int abs, ord;

    ErrConst(int abs, int ord) {
        this.abs = abs;
        this.ord = ord;
        System.out.println("Erreur construction Point");
        System.out.println("coordonnees souhaitees : " + abs + " " + ord);
    }
}

public class p2 {
    public static void main(String[] args) {
        try {
            Point a = new Point(1, 4);
            a.affiche();

            a = new Point(-3, 5);
            a.affiche();
        } catch (ErrConst e) {

            System.exit(-1);
        } catch (Exception e) {
            System.out.println("default here" + e.getMessage());
        }
    }
}
