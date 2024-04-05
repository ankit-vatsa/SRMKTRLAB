import java.util.*;

public class CodeGeneratorForIf {
    public static void main(String[] args) {
        // Example input: if(x>5){y=x*2}
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter if condition:");      
        String condition= sc.nextLine();  
        System.out.println("Enter action:");      
        String action= sc.nextLine();  


        // Generate code for the if statement
        String generatedCode = generateIfCode(condition, action);
        System.out.println("Generated code:");
        System.out.println(generatedCode);
    }

    public static String generateIfCode(String condition, String action) {
        StringBuilder codeBuilder = new StringBuilder();
        // Add if statement
        codeBuilder.append("if (").append(condition).append(") {\n");
        // Add the action inside the if block
        codeBuilder.append("\t").append(action).append(";\n");
        // Close the if block
        codeBuilder.append("}");
        return codeBuilder.toString();
    }
}
