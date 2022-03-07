class Example{

    String name;
    Example(String name){
        this.name = name;
    }

    public String toString(){
        return this.name;
    }

    public static void main(String[] args){
        Example ex = new Example("Saroj");
        System.out.println(ex);
    }
}