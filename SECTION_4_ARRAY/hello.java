public class hello {
    public static void main(String[] args) {
        hello h = new hello();
        System.out.println(h.hashCode());
        h=null;
        // calling garbage collector    
        System.gc();
        System.out.println("End of garbage collection");
    }
    protected void finalize()
    {
        System.out.println("Finallize method is called");
    }
}
