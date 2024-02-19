# C_projects
## qsort.c 
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


## Labirint1.c
### Task Description

The objective of this program is to navigate through a 2D maze represented by a grid. The maze contains open pathways and blocked cells. The program must find a path from the starting point to a specific target cell within the maze.

#### Program Flow:

1. Initialize a 2D array representing the maze.
2. Check if the starting cell is accessible. If not, handle the error.
3. Start exploring the maze using a recursive function.
4. If the target cell is reached, mark the path and return success.
5. Explore neighboring cells recursively until the target is found or all paths are exhausted.

#### Function Descriptions:

- `proverka()`: Recursively explores the maze to find the target cell.

- `begin_v()`: Searches for the target cell's column index in the specified rows of the maze.

- `begin_h()`: Searches for the target cell's row index in the specified columns of the maze.

#### Output:

- If a path to the target cell is found, print the path.
- If no path is found, print an appropriate message.

#### Notes:

- The program assumes that there is always a valid path from the starting point to the target cell.

### Further Improvements:

- Error handling can be extended to cover more scenarios such as invalid maze configurations.
- Additional optimizations can be made to improve the efficiency of the maze traversal algorithm.
