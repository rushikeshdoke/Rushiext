Question 1====>

import java.util.*;

class Employee{
    String name;
    
    public Employee(String name){
        this.name=name;
    }
    
    public String getName(){
        return name;
    }
}

class Device{
    String type;
    
    public Device(String type){
        this.type=type;
    }
    
    public static void getDeviceEmployeeCount( Map<Employee,List<Device>> map){
        for(Map.Entry<Employee,List<Device>> entry:map.entrySet()){
            Employee name=entry.getKey();
            List<Device> list=entry.getValue();
            
            System.out.println(name.getName()+" ===>"+list.size());
        }
    }
}
class Main {
    public static void main(String[] args) {
        Employee e1=new Employee("Rushi");
        Employee e2=new Employee("Tejas");
        Employee e3=new Employee("Rana");
        
        Device d1=new Device("Laptop");
        Device d2=new Device("Charger");
        Device d3=new Device("Mouse");
        
        List<Device> list1=new ArrayList<>();
        list1.add(d1);
        list1.add(d2);
        list1.add(d3);
        
        List<Device> list2=new ArrayList<>();
        list2.add(d1);
        list2.add(d2);
        
        List<Device> list3=new ArrayList<>();
        list3.add(d1);
        
        Map<Employee,List<Device>> map=new HashMap<>();
        map.put(e1,list1);
        map.put(e2,list2);
        map.put(e3,list3);
        
        Device.getDeviceEmployeeCount(map);
        
    }
}


Output:-
Rana ===>1
Rushi ===>3
Tejas ===>2


Question 2=========>

import java.util.*;

class Customers {
    String name;
    List<String> services;
    
    public Customers( String name,List<String> services){
        this.name=name;
        this.services=services;
    }
    
    public static void getCustomersCountPerServices(List<Customers> list){
        Map<String,Integer> map=new HashMap<>();
        
        for(Customers cust:list){
            for(String serv:cust.services){
                map.put(serv,map.getOrDefault(serv,0)+1);
            }
        }
        
        for(Map.Entry<String,Integer> entry:map.entrySet()){
            System.out.println(entry.getKey()+"====>"+entry.getValue());
        }
    }
}
class Main {
    public static void main(String[] args) {
        List<String> list1=new ArrayList<>();
        list1.add("Internet");
        
        List<String> list2=new ArrayList<>();
        list2.add("Cable");
        
        List<String> list3=new ArrayList<>();
        list3.add("Internet");
        list3.add("Cable");
        
        Customers c1=new Customers("Rushi",list1);
        Customers c2=new Customers("Tejas",list2);
        Customers c3=new Customers("Rana",list3);
        Customers c4=new Customers("Manya",list1);
        
        List<Customers> list=new ArrayList<>();
        list.add(c1);
        list.add(c2);
        list.add(c3);
        list.add(c4);
        
        Customers.getCustomersCountPerServices(list);
        
    }
}

Output:-

Cable====>2
Internet====>3


Ouestion 3======>

import java.util.*;

class Customer{
    int id;
    String name;
    int age;
    String email;
    
    public Customer(int id,String name,int age,String email){
        this.id=id;
        this.name=name;
        this.age=age;
        this.email=email;
    }
    
    public int getId(){
        return id;
    }
    
     public String getName(){
        return name;
    }
    
     public int getAge(){
        return age;
    }
    
     public String getEmail(){
        return email;
    }
    
    public static Customer findCustomerByEmail(List<Customer> customers, String email){
        Customer c=null;
        for(Customer cust:customers){
            if(cust.email.equals(email)){
                  c=cust;
                
            }
        }
        return c;
    }
}
class Main {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        Customer c1= new Customer(1,"Rushi",22,"rushi123@gmail.com");
        Customer c2= new Customer(2,"Tejas",20,"tejas123@gmail.com");
        Customer c3= new Customer(3,"Rana",15,"rana123@gmail.com");
        
        List<Customer> list=new ArrayList<>();
        list.add(c1);
        list.add(c2);
        list.add(c3);
        System.out.println("Enter email: ");
        String email=sc.nextLine();
        
        Customer result=Customer.findCustomerByEmail(list,email);
        if(result==null){
             System.out.println("User Not Found...!");
        }
        else{
            System.out.println(result.getId()+" "+result.getName()+" "+result.getAge());
        }
    }
}

Output:-
1)
Enter email: 
rushi123@gmail.com
1 Rushi 22

2)
Enter email: 
rnt@123
User Not Found...!


Question 4======>

import java.util.*;

class Customers {
    String name;
    List<String> services;
    
    public Customers( String name,List<String> services){
        this.name=name;
        this.services=services;
    }
    
    public String getName(){
        return name;
    }
    public  List<String> getServices(){
        return services;
    }
    
    public static void getCustomersHaveMoreThanTwoServices(List<Customers> list){
        Map<String,Integer> map=new HashMap<>();
        
        for(Customers cust:list){
           if(cust.getServices().size()>2){
               System.out.println(cust.getName());
           }
        }
    }
}
class Main {
    public static void main(String[] args) {
        List<String> list1=new ArrayList<>();
        list1.add("Internet");
        
        List<String> list2=new ArrayList<>();
        list2.add("Cable");
        list2.add("EMI");
        list2.add("Ensurance");
        
        List<String> list3=new ArrayList<>();
        list3.add("Internet");
        list3.add("Cable");
        list3.add("Data");
        
        Customers c1=new Customers("Rushi",list1);
        Customers c2=new Customers("Tejas",list2);
        Customers c3=new Customers("Rana",list3);
        Customers c4=new Customers("Manya",list1);
        
        List<Customers> list=new ArrayList<>();
        list.add(c1);
        list.add(c2);
        list.add(c3);
        list.add(c4);
        
        Customers.getCustomersHaveMoreThanTwoServices(list);
        
    }
}

Output:-

Tejas
Rana


Question 5=====>


import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string: ");
        String str=sc.nextLine();
        
        str=str.toLowerCase();
        
        Map<Character,Integer> map=new HashMap<>();
        
        for(Character ch:str.toCharArray()){
            if(ch!=' '){
            map.put(ch,map.getOrDefault(ch,0)+1);
            }
        }
        
        for(Map.Entry<Character,Integer> entry:map.entrySet()){
            System.out.println(entry.getKey()+"  "+entry.getValue());
        }
        
    }
}


Output:-

Enter the string: 
Good Boy

b  1
d  1
g  1
y  1
o  3



Question 6====>

import java.util.*;

class Employee{
    private int id;
    private String name;
    
    public void setId(int id){
        this.id=id;
    }
    
    public int getId(){
        return  id;
    }
    
     public void setName(String name){
        this.name=name;
    }
    
    public String getName(){
        return name;
    }
    
    public void displayInfo(){
        System.out.println(id+" "+name);
    }
    
    public void displayInfo(String message){
         System.out.println(id+" "+name+" "+message);
    }
}
class Main {
    public static void main(String[] args) {
        Employee e=new Employee();
        e.setId(1);
        e.setName("Rushi");
        
        e.displayInfo();
         e.displayInfo("I AM Happy");
    }
}

Output:-

1 Rushi
1 Rushi I AM Happy

