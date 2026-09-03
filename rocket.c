

  


// 



// #include <stdio.h>
// #include <windows.h>
// #include <stdlib.h>

// int main()
// {
//     int position;

//     // Move rocket from North (top) to South (bottom)
//     for (position = 0; position <= 20; position++)
//     {
//         system("cls");   // Clear the screen

//         // Print blank lines before the rocket
//         for (int i = 0; i < position; i++)
//         {
//             printf("\n");
//         }

//         // Draw the rocket
//         printf("      /\\\n");
//         printf("     /==\\\n");
//         printf("    |NASA|\n");
//         printf("    |====|\n");
//         printf("    | || |\n");
//         printf("     /__\\\\\n");

//         Sleep(150);   // Delay for animation
//     }

//     printf("\nRocket reached the South!\n");

//     return 0;
// }



#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void show(char user_input, int position, char draw[100]){
    if (user_input == 'a'){
    for (int i = 0; i < position; i++){
        printf(" ");
    }
    printf("%s", draw);
    }
    if (user_input == 'd'){
    for (int i = position; i > 0; i--){
        printf(" ");
    }
    printf("%s", draw);
    }
}

int main()
{
    int position;

    for (position = 40; position <= 80; position++)
    {

        char user_input;
        scanf("%c", &user_input);

        if ('a' == user_input){
            position -= 10;
        }

        if ('d' == user_input){
            position += 10;
        }

        show(user_input, position, "            __|__\n");
        show(user_input, position, "     --o--o--(_)--o--o--\n");
        show(user_input, position, "             /_\\\\\n");
        show(user_input, position, "      ______/___\\\\____\n");
        show(user_input, position, "     /   _         _  \\\\\n");
        show(user_input, position, "    |   (_)       (_) |\n");
        show(user_input, position, "     \\_______________/\n");
    
        Beep(2000, 200);
        Beep(2000, 200);
        system("cls");
        Sleep(80);
        
    }

    printf("\nRocket reached the West!\n");

    return 0;
}