
interface vechileone{

    int speed = 200;
    public void distance();
}

interface vechiletwo{
    int distance = 200;
    public void speed();
}

class MulInheritance implements vechileone,vechiletwo{

    public void distance(){
        int dist = speed * 10;
        System.out.print("distance is "+dist);
    }

    public void speed(){

    }
    
    public static void main(String[] args){

        MulInheritance m = new MulInheritance();
        m.distance();

    }
}