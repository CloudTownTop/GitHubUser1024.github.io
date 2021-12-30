public class Calc {
    static {
        try {
            String[] cmd = {"calc"};
            Runtime.getRuntime().exec(cmd).waitFor();
        } catch (Exception e) {
        }
    }
}