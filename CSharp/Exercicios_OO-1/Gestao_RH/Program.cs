namespace Gestao_RH
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Funcionario f1 = new Funcionario(01, "Arthur", "Gerente", 3000);

            f1.Cadastrar();
            f1.Consultar();
            f1.AtualizarSalario(4000);
            f1.ListarDependentes();
        }
    }
}
