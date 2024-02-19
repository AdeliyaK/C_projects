# C_projects
## For qsort.c 
### Task Description

#### Book Structure
Create a structure named `Book` with the following attributes:
- **Title**: Up to 150 characters.
- **Author**: Up to 100 characters.
- **Number of Pages**.
- **Price**.

#### Array Generation
Generate an array of `COUNT` (preprocessor constant) books. Populate the array with automatically generated random data.

#### Constraints for Random Data
Ensure the following constraints for randomly generated data:
- **Title** and **Author Name**: Between 10 and 20 characters, containing only lowercase and uppercase Latin letters.
- **Number of Pages**: Between 5 and 2000.
- **Price**: Between -1.00 and 1000.00.

#### Sorting
Sort the array by:
1. Alphabetical order of the **Title** - ASC/DESC.
2. Alphabetical order of the **Author** - ASC/DESC.
3. **Number of Pages** - ASC/DESC.
4. **Price** - ASC/DESC.

Use the `qsort()` function for sorting.

#### Output
Display the sorted data in a suitable format.
