#include <stdio.h>
#include <stdlib.h>
#include <adder.h>
#include <GLFW/glfw3.h>

int main()
{
    float res = 0.0f;

    printf("==================================\n");
    printf("=========== Chapter. 1 ===========\n");
    printf("==================================\n");
    printf("Hello World!\n");
    printf("\n");

    printf("==================================\n");
    printf("=========== Chapter. 2 ===========\n");
    printf("==================================\n");
    res = add(3.4, 2.2);
    printf("%3.3f\n", res);
    printf("\n");

    printf("==================================\n");
    printf("=========== Chapter. 3 ===========\n");
    printf("==================================\n");
    printf(" GLFW Practice !! \n");

    GLFWwindow* window;
    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );\
        exit( EXIT_FAILURE );
    }
    
    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

    printf(" Check out New Window !! \n");
    // Main loop
    while( !glfwWindowShouldClose(window) )
    {
        // // Draw gears
        // draw();

        // // Update animation
        // animate();

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    // Terminate GLFW
    glfwTerminate();
    printf("\n");

    return 0;
}
