#include <stdio.h>

int main()
{
    // 1D array
    printf("1D array\n");

    int arr[2] = {1, 2};

    for (int single = 0; single < 2; single++)
    {
        printf("%d\n", arr[single]);
    }

    printf("\n");

    // 2D array     

    printf("2D array\n");

    int arr2[2][2] = {{1, 2},
                      {3, 4}};

    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            printf("%d\n", arr2[row][column]);
        }
    }

    printf("\n");

    // 3D array

    printf("3D array\n");
    int arr3[2][2][2] = {
        //  arr3[no. of blocks][no. of rows per block][no. of columns per row]
        // Block 1
        {
            {1, 2},
            {3, 4}},
        // Block 2
        {{5, 6},
         {7, 8}}

    };

    for (int block = 0; block < 2; block++)
    {
        for (int row = 0; row < 2; row++)
        {
            for (int column = 0; column < 2; column++)
            {
                printf("%d\n", arr3[block][row][column]);
            }
        }
    }

    printf("\n");

    printf("4D array\n");

    // 4D array

    int arr4[2][2][2][2] = {
        // arr4[no. of Building][no. of blocks][no. of rows per block][no. of columns per row]

        // Building 1
        {
            // Block 1
            {{1, 2},
             {3, 4}},

            // Block 2
            {{5, 6},
             {7, 8}}},

        // Building 2
        {
            // Block 1
            {{9, 10},
             {11, 12}},

            // Block 2
            {{13, 14},
             {15, 16}}}};
    for (int building = 0; building < 2; building++)
    {
        for (int block = 0; block < 2; block++)
        {
            for (int row = 0; row < 2; row++)
            {
                for (int column = 0; column < 2; column++)
                {
                    printf("%d\n", arr4[building][block][row][column]);
                }
            }
        }
    }
    printf("\n");

    // 5D array
    printf("5D array\n");

    int arr5[2][2][2][2][2] = {
        // arr5 = [no. of societies][no. of buildings][no. of blocks][no. of rows per block][no. of columns per row]

        // Society 1
        {
            // Building 1
            {
                // Block 1
                {{1, 2},
                 {3, 4}},

                // Block 2
                {{5, 6},
                 {7, 8}}},

            // Building 2
            {
                // Block 1
                {{9, 10},
                 {11, 12}},

                // Block 2
                {{13, 14},
                 {15, 16}}}

        },

        // Society 2

        {

            // Building 1
            {
                // Block 1
                {{17, 18},
                 {19, 20}},

                // Block 2
                {{21, 22},
                 {23, 24}}},

            // Building 2
            {
                // Block 1
                {{25, 26},
                 {27, 28}},

                // Block 2
                {{29, 30},
                 {31, 32}}}}

    };

    for (int society = 0; society < 2; society++)
    {
        for (int building = 0; building < 2; building++)
        {
            for (int block = 0; block < 2; block++)
            {
                for (int row = 0; row < 2; row++)
                {
                    for (int column = 0; column < 2; column++)
                    {
                        printf("%d\n", arr5[society][building][block][row][column]);
                    }
                }
            }
        }
    }

    // 5D took my whole brain am NOT DEALING WITH 6D
    // Actually I AM dealing with 6D
    printf("\n");

    // 6D array
    printf("6D array\n");

    int arr6[2][2][2][2][2][2] = {
        // arr6 [city][society][building][block][row][column]

        // city 
        {
            // Society 1
                {
                    // Building 1
                    {
                        // Block 1
                        {
                            {1, 2},
                            {3, 4}
                        },

                        // Block 2
                        {
                            {5, 6},
                            {7, 8}
                        }
                    },

                    // Building 2
                    {
                        // Block 1
                        {
                            {9, 10},
                            {11, 12}
                        },

                        // Block 2
                        {
                        {13, 14},
                        {15, 16}
                        }
                    }

            },

            // Society 2

            {

                // Building 1
                {
                    // Block 1
                    {
                        {17, 18},
                        {19, 20}
                    },

                    // Block 2
                    {
                        {21, 22},
                        {23, 24}
                    }
                },

                // Building 2
                {
                        // Block 1
                    {
                        {25, 26},
                        {27, 28}
                    },

                    // Block 2
                    {
                        {29, 30},
                        {31, 32}
                    }
                }
            }
        },

        // city 2

        {
           // Society 1
                {
                    // Building 1
                    {
                        // Block 1
                        {
                            {33, 34},
                            {35, 36}
                        },

                        // Block 2
                        {
                            {37, 38},
                            {39, 40}
                        }
                    },

                    // Building 2
                    {
                        // Block 1
                        {
                            {41, 42},
                            {43, 44}
                        },

                        // Block 2
                        {
                        {45, 46},
                        {47, 48}
                        }
                    }

            },

            // Society 2

            {

                // Building 1
                {
                    // Block 1
                    {
                        {49, 50},
                        {51, 52}
                    },

                    // Block 2
                    {
                        {53, 54},
                        {55, 56}
                    }
                },

                // Building 2
                {
                        // Block 1
                    {
                        {57, 58},
                        {59, 60}
                    },

                    // Block 2
                    {
                        {61, 62},
                        {63, 64}
                    }
                }
            } 
        }
    };

    for (int city = 0; city < 2; city++)
        {
            for (int society = 0; society < 2; society++)
        {
            for (int building = 0; building < 2; building++)
            {
                for (int block = 0; block < 2; block++)
                {
                    for (int row = 0; row < 2; row++)
                    {
                        for (int column = 0; column < 2; column++)
                        {
                            printf("%d\n", arr6[city][society][building][block][row][column]);
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}