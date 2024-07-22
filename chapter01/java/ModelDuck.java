
public class ModelDuck extends Duck {

    public ModelDuck() {
        flyBehavior = new FlyNoWay();        
    }

    @Override
    public void display() {
        System.out.println("I'm a model duck");
    }
}
