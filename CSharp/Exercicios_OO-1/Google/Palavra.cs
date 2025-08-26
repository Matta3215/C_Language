using System;

public class Palavra
{
    public string Nome { get; set; }

    List<Significado> significados = new();
    
    public Palavra(string nome)
	{
        Nome = nome;
	}

    public void AdicionarSignificados(Significado texto)
    {
        significados.Add(texto);
    }

    public List<Significado> RecuperarSignificados()
    {
        return significados;
    }

    public void RemoverSignificados(Significado texto)
    {
        significados.Remove(texto);
    }

    public bool PesquisarSignificado(string texto_pesquisa)
    {
        foreach (Significado s in significados)
        {
            if (texto_pesquisa == s.Texto)
                return true;
        }   
        return false;
    }
}
