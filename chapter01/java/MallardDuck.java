
public class MallardDuck extends Duck {

    public MallardDuck() {
        flyBehavior = new FlyWithWings();
    }

    @Override
    public void display() {
        System.out.println("I'm a real Mallard Duck");
    }

    @Override
    public void swim() {
        System.out.println("All ducks float, even mallard ducks!");

    }
}
