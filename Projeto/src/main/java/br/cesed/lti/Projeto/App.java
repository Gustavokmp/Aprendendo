package br.cesed.lti.Projeto;

import javax.transaction.Transactional;

import org.springframework.boot.SpringApplication;

import br.cesed.lti.model.Automovel;
import br.cesed.lti.model.Pessoa;
import br.cesed.lti.model.Profissao;
import br.cesed.lti.repository.AutomovelPessoa;
import br.cesed.lti.repository.PessoaAutomovel;
import br.cesed.lti.repository.PessoaProfissao;



/**
 * Hello world!
 *
 */
public class App 
{
	private PessoaProfissao pessoaProfissao;
	private PessoaAutomovel pessoaAutomovel;
	private AutomovelPessoa automovelPessoa;
    public static void main( String[] args )
    {
    	SpringApplication.run(App.class, args);
    }
    
    @Transactional
    public void run(String... strings) throws Exception {
    	
    	Pessoa pessoa = new Pessoa("Gustavo", "147", "258");
    	Profissao profissao = new Profissao("Programador");
    	Automovel automovel = new Automovel("Palio", "Fiat", "agf0147");
    	
    	pessoa.getAutomovel().add(automovel);
    	automovel.getPessoa().add(pessoa);
    	profissao.getPessoa().add(pessoa);
    	
    	//OneToOne
    	pessoaProfissao.save(profissao);
    	//OneToMany
    	pessoaAutomovel.save(automovel);
    	//ManyToOne
    	automovelPessoa.save(pessoa);        
    	
    }
}
