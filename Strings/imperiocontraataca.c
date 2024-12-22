#include <stdio.h>
#include <string.h>

#define MAX_MSG_LEN 201
#define ALPHABET_LEN 40

// Vetor de caracteres permitidos
const char s[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                  'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?'};

// Função para encontrar o índice de um caractere no vetor s
int index_in_s(char c)
{
    for (int i = 0; i < ALPHABET_LEN; i++)
    {
        if (s[i] == c)
        {
            return i;
        }
    }
    return -1;
}

// Função para descobrir a chave
int find_key(char *C, char *KP, char *K)
{
    int len_C = strlen(C);
    int len_KP = strlen(KP);

    // Procurar por KP na mensagem cifrada C
    for (int i = 0; i <= len_C - len_KP; i++)
    {
        int key_found = 1;

        // Verificar se a chave pode ser descoberta com base em KP
        for (int j = 0; j < len_KP; j++)
        {
            int c_index = index_in_s(C[i + j]);
            int kp_index = index_in_s(KP[j]);
            if (c_index == -1 || kp_index == -1)
                return 0; // Caracter inválido

            // Calcular o deslocamento da chave (K[j] = (C[j] - KP[j] + ALPHABET_LEN) % ALPHABET_LEN)
            int key_value = (c_index - kp_index + ALPHABET_LEN) % ALPHABET_LEN;
            K[j % 4] = key_value + '0';
        }

        // Verificar se a chave de 4 dígitos foi corretamente obtida
        if (key_found)
        {
            K[4] = '\0';
            return 1;
        }
    }
    return 0; // Fragmento KP não encontrado
}

// Função para decifrar a mensagem
void decrypt_message(char *C, char *K, char *P)
{
    int len_C = strlen(C);

    for (int i = 0; i < len_C; i++)
    {
        int c_index = index_in_s(C[i]);
        int key_value = K[i % 4] - '0';

        // Decifrar o caractere (P[i] = (C[i] - K[i] + ALPHABET_LEN) % ALPHABET_LEN)
        int p_index = (c_index - key_value + ALPHABET_LEN) % ALPHABET_LEN;
        P[i] = s[p_index];
    }
    P[len_C] = '\0'; // Finaliza a string decifrada
}

int main()
{
    char C[MAX_MSG_LEN], KP[MAX_MSG_LEN], K[5], P[MAX_MSG_LEN];

    // Entrada: Mensagem cifrada
    printf("Digite a mensagem cifrada:\n");
    scanf("%s", C);

    // Entrada: Fragmento conhecido da mensagem original (KP)
    printf("Digite o fragmento da mensagem original (KP):\n");
    scanf("%s", KP);

    // Descobrir a chave
    if (find_key(C, KP, K))
    {
        printf("Chave encontrada: %s\n", K);

        // Decifrar a mensagem
        decrypt_message(C, K, P);
        printf("Mensagem decifrada: %s\n", P);
    }
    else
    {
        printf("Mensagem nao e da Resistencia!\n");
    }

    return 0;
}
