import React from 'react'

function QuizLogic() {

    // 1. Palindrome Check
    function isPalindrome(str) {
        return str === str.split('').reverse().join('');
    }

    function isPalindrome(str) {
        let reversed = '';
        for (let i = str.length - 1; i >= 0; i--) {
            reversed += str[i];
        }
        return str === reversed;
    }
    

    // 2. Fibonacci Sequence
    function fibonacci(n) {
        let a = 0, b = 1;
        for (let i = 0; i < n; i++) {
            console.log(a);
            let temp = a;
            a = b;
            b = temp + b;
        }
    }

    function fibonacci(n) {
        let a = 0, b = 1;
        for (let i = 0; i < n; i++) {
            console.log(a);
            let temp = a;
            a = b;
            b = temp + b;
        }
    }
    

    // 3. Prime Number Check
    function isPrime(num) {
        if (num < 2) return false;
        for (let i = 2; i <= Math.sqrt(num); i++) {
            if (num % i === 0) return false;
        }
        return true;
    }

    function isPrime(num) {
        if (num <= 1) return false;
        for (let i = 2; i <= num / 2; i++) {
            if (num % i === 0) {
                return false;
            }
        }
        return true;
    }
    

    // 4. Factorial Calculation
    function factorial(n) {
        if (n === 0) return 1;
        let result = 1;
        for (let i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }

    function factorial(n) {
        let result = 1;
        for (let i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
    

    // 5. Anagram Check
    function areAnagrams(str1, str2) {
        return str1.split('').sort().join('') === str2.split('').sort().join('');
    }

    function areAnagrams(str1, str2) {
        if (str1.length !== str2.length) return false;
    
        let sorted1 = '';
        let sorted2 = '';
    
        for (let i = 0; i < str1.length; i++) {
            sorted1 += str1[i];
            sorted2 += str2[i];
        }
    
        let sortedStr1 = '';
        let sortedStr2 = '';
        
        for (let i = 0; i < str1.length; i++) {
            let minIndex1 = i;
            for (let j = i + 1; j < str1.length; j++) {
                if (sorted1[j] < sorted1[minIndex1]) {
                    minIndex1 = j;
                }
            }
            sortedStr1 += sorted1[minIndex1];
            sorted1 = sorted1.slice(0, minIndex1) + sorted1.slice(minIndex1 + 1);
            
            let minIndex2 = i;
            for (let j = i + 1; j < str2.length; j++) {
                if (sorted2[j] < sorted2[minIndex2]) {
                    minIndex2 = j;
                }
            }
            sortedStr2 += sorted2[minIndex2];
            sorted2 = sorted2.slice(0, minIndex2) + sorted2.slice(minIndex2 + 1);
        }
    
        return sortedStr1 === sortedStr2;
    }
    

    // 6. Reverse a String
    function reverseString(str) {
        return str.split('').reverse().join('');
    }

    function reverseString(str) {
        let reversed = '';
        for (let i = str.length - 1; i >= 0; i--) {
            reversed += str[i];
        }
        return reversed;
    }
    

    // 7. Array Deduplication
    function removeDuplicates(arr) {
        return [...new Set(arr)];
    }

    function removeDuplicates(arr) {
        let uniqueArr = [];
        for (let i = 0; i < arr.length; i++) {
            let isDuplicate = false;
            for (let j = 0; j < uniqueArr.length; j++) {
                if (arr[i] === uniqueArr[j]) {
                    isDuplicate = true;
                    break;
                }
            }
            if (!isDuplicate) {
                uniqueArr.push(arr[i]);
            }
        }
        return uniqueArr;
    }    

    // 8. Find the Missing Number
    function findMissingNumber(arr, n) {
        const total = (n * (n + 1)) / 2;
        const sum = arr.reduce((acc, num) => acc + num, 0);
        return total - sum;
    }
    function findMissingNumber(arr, n) {
        let total = 0;
        for (let i = 1; i <= n; i++) {
            total += i;
        }
    
        let sum = 0;
        for (let i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
    
        return total - sum;
    }    

    // 9. Sum of Digits
    function sumOfDigits(num) {
        return num.toString().split('').reduce((sum, digit) => sum + Number(digit), 0);
    }

    function sumOfDigits(num) {
        let sum = 0;
        while (num > 0) {
            sum += num % 10;
            num = Math.floor(num / 10);
        }
        return sum;
    }    

    // 10. Find Largest Number in Array
    function findLargest(arr) {
        return Math.max(...arr);
    }

    function findLargest(arr) {
        let largest = arr[0];
        for (let i = 1; i < arr.length; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }
        return largest;
    }    

    // 11. Check for Balanced Parentheses
    function isBalanced(str) {
        const stack = [];
        for (let char of str) {
            if (char === '(') stack.push('(');
            else if (char === ')') {
                if (stack.pop() !== '(') return false;
            }
        }
        return stack.length === 0;
    }

    function isBalanced(str) {
        let stack = [];
        for (let i = 0; i < str.length; i++) {
            if (str[i] === '(') {
                stack.push('(');
            } else if (str[i] === ')') {
                if (stack.length === 0) {
                    return false;
                }
                stack.pop();
            }
        }
        return stack.length === 0;
    }   

    // 12. Find All Divisors of a Number
    function findDivisors(num) {
        let divisors = [];
        for (let i = 1; i <= num; i++) {
            if (num % i === 0) divisors.push(i);
        }
        return divisors;
    }

    function findDivisors(num) {
        let divisors = [];
        for (let i = 1; i <= num; i++) {
            if (num % i === 0) {
                divisors.push(i);
            }
        }
        return divisors;
    }    

    // 13. Remove Vowels from a String
    function removeVowels(str) {
        return str.replace(/[aeiouAEIOU]/g, '');
    }

    function removeVowels(str) {
        let result = '';
        for (let i = 0; i < str.length; i++) {
            if ('aeiouAEIOU'.indexOf(str[i]) === -1) {
                result += str[i];
            }
        }
        return result;
    }
    

    // 14. Find the Intersection of Two Arrays
    function intersection(arr1, arr2) {
        return arr1.filter(value => arr2.includes(value));
    }

    function intersection(arr1, arr2) {
        let result = [];
        for (let i = 0; i < arr1.length; i++) {
            for (let j = 0; j < arr2.length; j++) {
                if (arr1[i] === arr2[j]) {
                    result.push(arr1[i]);
                }
            }
        }
        return result;
    }
    

    // 15. Flatten an Array
    function flattenArray(arr) {
        return arr.flat();
    }

    function flattenArray(arr) {
        let result = [];
        for (let i = 0; i < arr.length; i++) {
            if (Array.isArray(arr[i])) {
                for (let j = 0; j < arr[i].length; j++) {
                    result.push(arr[i][j]);
                }
            } else {
                result.push(arr[i]);
            }
        }
        return result;
    }
    

    // 16. Convert a Number to Roman Numerals
    function toRoman(num) {
        const values = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1];
        const symbols = ["M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"];
        
        let result = '';
        for (let i = 0; i < values.length; i++) {
            while (num >= values[i]) {
                result += symbols[i];
                num -= values[i];
            }
        }
        return result;
    }

    function toRoman(num) {
        let result = '';
        let romanNumerals = [['I', 'IV', 'V', 'IX'], ['X', 'XL', 'L', 'XC'], ['C', 'CD', 'D', 'CM'], ['M']];
        let digits = num.toString().split('');
        let len = digits.length;
    
        for (let i = 0; i < len; i++) {
            let digit = Number(digits[i]);
            if (digit > 0) {
                let placeValue = len - i - 1;
                if (placeValue === 3) result += 'M'.repeat(digit);
                else if (placeValue === 2) result += romanNumerals[placeValue][digit - 1];
                else result += romanNumerals[placeValue][digit];
            }
        }
        return result;
    }
    

    // 17. Count Vowels in a String
    function countVowels(str) {
        return str.split('').filter(char => 'aeiouAEIOU'.includes(char)).length;
    }

    function countVowels(str) {
        let count = 0;
        for (let i = 0; i < str.length; i++) {
            if ('aeiouAEIOU'.indexOf(str[i]) !== -1) {
                count++;
            }
        }
        return count;
    }
    

    // 18. Find the Second Largest Element in an Array
    function secondLargest(arr) {
        let first = -Infinity, second = -Infinity;
        for (let num of arr) {
            if (num > first) {
                second = first;
                first = num;
            } else if (num > second && num < first) {
                second = num;
            }
        }
        return second;
    }

    function secondLargest(arr) {
        let largest = -Infinity;
        let second = -Infinity;
        for (let i = 0; i < arr.length; i++) {
            if (arr[i] > largest) {
                second = largest;
                largest = arr[i];
            } else if (arr[i] > second && arr[i] !== largest) {
                second = arr[i];
            }
        }
        return second;
    }
    

    // 19. Sort an Array of Strings by Length
    function sortStringsByLength(arr) {
        return arr.sort((a, b) => a.length - b.length);
    }

    function sortStringsByLength(arr) {
        for (let i = 0; i < arr.length - 1; i++) {
            for (let j = i + 1; j < arr.length; j++) {
                if (arr[i].length > arr[j].length) {
                    let temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        return arr;
    }

    // 20. Check if a String Contains Only Digits
    function isNumeric(str) {
        return /^\d+$/.test(str);
    }

    function isNumeric(str) {
        for (let i = 0; i < str.length; i++) {
            if (str[i] < '0' || str[i] > '9') {
                return false;
            }
        }
        return true;
    }

    return (
        <>
            <div>
                Palindrome Component called....
            </div>
        </>
    )
}

export default QuizLogic
