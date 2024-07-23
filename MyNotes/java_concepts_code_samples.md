Sorting the primitive array in java using arrays

```
 int[] arr = {5, 2, 8, 3, 1, 9};

        // Sorting the array
        Arrays.sort(arr);

```

In descending or custom comparators, which work only on boxed types of java

```
int[] arr = {5, 2, 8, 3, 1, 9};

        // Sorting the array in descending order
        Integer[] arrDesc = Arrays.stream(arr).boxed().toArray(Integer[]::new);
        Arrays.sort(arrDesc, Collections.reverseOrder());

        // Converting back to int array if needed
        arr = Arrays.stream(arrDesc).mapToInt(Integer::intValue).toArray();

        // Printing the sorted array
        System.out.println("Sorted array in descending order: " + Arrays.toString(arr));
```

Unbox back to a primitive int array:
If you need to convert back to a primitive int array, use 

```
Arrays.stream(arrDesc).mapToInt(Integer::intValue).toArray().
```

Interesting: 
The getOrDefault method is primarily found in the Map interface in Java, specifically within classes like HashMap, TreeMap, and LinkedHashMap. This method returns the value associated with the specified key, or a default value if the key is not present in the map.


```
public class Main {
    public static void main(String[] args) {
        Map<String, Map<String, Integer>> nestedMap = new HashMap<>();

        String outerKey = "Fruits";
        String innerKey = "Apple";

        nestedMap.computeIfAbsent(outerKey, k -> new HashMap<>()).put(innerKey, 1);
        nestedMap.getOrDefault(outerKey, new HashMap<>()).put(innerKey, nestedMap.get(outerKey).getOrDefault(innerKey, 0) + 1);

        System.out.println(nestedMap); // Output: {Fruits={Apple=2}}
    }
}



```



Java map interation

[Interating java map](https://stackoverflow.com/a/35558955)


Array copy for primitive int array

```
       int[] digits = {1, 2, 3, 4, 5};
        
        // Extend the array from the start
        int[] extended = new int[digits.length + 3]; // Adding 3 extra slots
        System.arraycopy(digits, 0, extended, 3, digits.length);

        extended[0] = 6;
        extended[1] = 7;
        extended[2] = 8;
        
        System.out.println(Arrays.toString(extended)); // [6, 7, 8, 1, 2, 3, 4, 5]



public static void arraycopy(Object src, int srcPos, Object dest, int destPos, int length)

```



String Pool
Java uses a special memory area called the string pool to store string literals. When a string literal is created, the JVM checks the pool to see if an identical string already exists. If it does, the JVM returns a reference to the existing string instead of creating a new one. This helps to save memory and improve performance.


```
String str = "Hello";
char[] charArray = str.toCharArray();
char ch = charArray[1]; // 'e'
charArray[1] = 'a'; // Now charArray is {'H', 'a', 'l', 'l', 'o'}

```

