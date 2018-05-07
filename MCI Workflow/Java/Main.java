import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

/**
 * Program created on 4/17/2018
 */

public class Main {


    private static int lineCount;

    public static void main(String[] args) throws InterruptedException {

        /* get file paths */

        System.out.print("File In? ");
        Scanner in = new Scanner(System.in);
        String fileIn = in.nextLine();
        System.out.print("DEPRECATED? ");
        String fileOut = in.nextLine();

        try (BufferedReader br = new BufferedReader(new FileReader(fileIn))) {

            String line;

            while ((line = br.readLine()) != null) {
                lineCount++;
                char[] lineCharArray = line.toCharArray(); //Go char-by-char through each line
                for (int i = 0; i < lineCharArray.length; i++) {
                    if (lineCharArray[i] != '.' && (lineCharArray[i] < '0' || lineCharArray[i] > '9')) { //Does the line have the correct character(s)?
                        System.out.println("There is junk on this line. "+ lineCount +" Manual fixing is required because UTF-8 is screwy.");
                        System.out.println("Please delete: " + line);
                        Thread.sleep(1000);
                        break;
                    }
                }
                if (line.split("\\.").length > 3) {
                    System.out.println("The Arduino put together a bad string of data on line: " + lineCount + " Manual fixing is required because UTF-8 is....once again, screwy.");
                    System.out.println("Please delete: " + line);
                    Thread.sleep(1000);
                    break;
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}