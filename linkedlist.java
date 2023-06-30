import java.util.*;

public class linkedlist {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        list l = new list();
        while (true) {
            int n = in.nextInt();
            if (n <= 0) {
                break;
            } else {
                l.insert(n);
            }
        }
        l.printlist();
    }
}

class list {
    Node head;

    class Node {
        int data;
        Node next;

        Node(int d) {
            data = d;
            next = null;
        }
    }

    void insert(int n) {
        Node newnode = new Node(n);
        Node last = head;
        if (head == null) {
            head = newnode;
            return;
        }
         
        else 
        {
            while (last.next != null) {
                last = last.next;
            }
            last.next = newnode;
        }
    }

    void printlist() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }
}
