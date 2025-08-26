using System;

public class Funcionario
{
	public int Matricula{ get; set; }
	public string Nome { get; set; }
	public string CargoAtual { get; set; }
	public float SalarioAtual { get; set; }
	
	public Funcionario(int matricula, string nome, string cargo_atual, float salario_atual)
	{
		Matricula = matricula;
		Nome = nome;
		CargoAtual = cargo_atual;
		SalarioAtual = salario_atual;
	}

	public void Cadastrar()
	{
        Console.WriteLine("Funcionário Cadastrado");
    }

	public void Consultar()
	{
        Console.WriteLine($"Consultar Funcionario {this.Nome}");
    }

	public void AtualizarSalario(float novo_salario)
	{
		SalarioAtual = novo_salario;
        Console.WriteLine("Salário Atualizado");
    }

	public void ListarDependentes()
	{
        Console.WriteLine("Lista Dependentes: ");
    }
}
