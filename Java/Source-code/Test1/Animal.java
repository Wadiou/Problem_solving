public class Animal {
    private int id;

    public Animal(int id) {
        this.id = id;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true; // Check reference equality
        if (obj == null || getClass() != obj.getClass()) return false; // Check null and class type

        Animal animal = (Animal) obj;
        return id == animal.id; // Compare id field
    }

    @Override
    public int hashCode() {
        return Integer.hashCode(id);
    }

    // Getters, setters, and other methods
}

 class Dog extends Animal {
    private String name;
    private int age;

    public Dog(int id, String name, int age) {
        super(id);
        this.name = name;
        this.age = age;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true; // Check reference equality
        if (obj == null || getClass() != obj.getClass()) return false; // Check null and class type

        if (!super.equals(obj)) return false; // Call superclass's equals method

        Dog dog = (Dog) obj; // Cast obj to Dog

        // Compare subclass-specific fields
        if (age != dog.age) return false;
        return name != null ? name.equals(dog.name) : dog.name == null;
    }

    @Override
    public int hashCode() {
        int result = super.hashCode(); // Call superclass's hashCode method
        result = 31 * result + (name != null ? name.hashCode() : 0);
        result = 31 * result + age;
        return result;
    }

    // Getters, setters, and other methods
}
