float idade;
List<float> lista_idades = new List<float>();
do
{
    Console.WriteLine("Digite uma idade: ");
    idade = float.Parse(Console.ReadLine());
    if(idade > 0)
    {
    lista_idades.Add(idade);
    }
} while (idade > 0);

float n_total = lista_idades.Count;
float g_A = 0, g_B = 0, g_C = 0, g_D = 0, g_E = 0;

foreach (float n in lista_idades)
{
    switch (n)
    {
        case float x when x > 0 && x <= 15:
            g_A += 1;
            break;
        
        case float x when x > 15 && x <= 30:
            g_B += 1;
            break;
        
        case float x when x > 30 && x <= 45:
            g_C += 1;
            break;
        
        case float x when x > 45 && x <= 60:
            g_D += 1;
            break;
        
        case float x when x > 60:
            g_E += 1;
            break;
    }
}


    Console.WriteLine($"Porcentagem do Grupo A: {g_A * 100 / n_total}%");
    Console.WriteLine($"Porcentagem do Grupo B: {g_B * 100 / n_total}%");
    Console.WriteLine($"Porcentagem do Grupo C: {g_C * 100 / n_total}%");
    Console.WriteLine($"Porcentagem do Grupo D: {g_D * 100 / n_total}%");
    Console.WriteLine($"Porcentagem do Grupo E: {g_E * 100 / n_total}%");

