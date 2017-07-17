package br.cesed.lti.model;

import java.util.HashSet;
import java.util.Set;

import javax.persistence.*;

@Entity
public class Profissao {
	@Id
	@GeneratedValue(strategy = GenerationType.AUTO)
	private int id;
	
	private String nome;
	
	@OneToOne(fetch=FetchType.LAZY)
	private Set<Pessoa> pessoa = new HashSet<Pessoa>();
	
	
	public Profissao( String nome) {
		this.nome = nome;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public Set<Pessoa> getPessoa() {
		return pessoa;
	}
	public void setPessoa(Set<Pessoa> pessoa) {
		this.pessoa = pessoa;
	}
	
	
	
	
	
	
	

}
