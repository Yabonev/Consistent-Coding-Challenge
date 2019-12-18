## Задача 1

Да се дефинира функцията `void printAllSubstrings(char * word)`, която приема символен низ и намира всички поднизове на този символен низ.
```javascript
printAllSubstrings("a") -> a 
printAllSubstrings("ab") -> a b ab
printAllSubstrings("abc") -> a b c ab bc abc
printAllSubstring("abcd") -> a b c d ab bc cd abc bcd abcd
```

## Задача 2
Да се дефинира функцията `bool areRotationOfEachOther(char * first, char * second)`, която връща истина ако единият символен низ е ротация на другия.
```javascript
areRotationOfEachOther("123456","456123") -> true
areRotationOfEachOther("123456","234561") -> true
areRotationOfEachOther("abcd","cdab") -> true
areRotationOfEachOther("abcd","cdba") -> false
areRotationOfEachOther("abcd","abracadabra") -> false
```

