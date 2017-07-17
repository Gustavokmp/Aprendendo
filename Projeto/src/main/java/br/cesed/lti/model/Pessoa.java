package br.cesed.lti.model;

import java.util.HashSet;
import java.util.Set;

import javax.persistence.*;

@Entity
public class Pessoa {
	
	@Id
	@GeneratedValue(strategy = GenerationType.AUTO)
	private int id;
	private String nome;
	private String cpf;
	private String rg;
	@OneToMany(cascade = CascadeType.ALL)
	private Set<Automovel> automovel = new HashSet<Automovel>();
	
	
	
	public Pessoa(String nome, String cpf, String rg) {
		this.nome = nome;
		this.cpf = cpf;
		this.rg = rg;
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
	public String getCpf() {
		return cpf;
	}
	public void setCpf(String cpf) {
		this.cpf = cpf;
	}
	public String getRg() {
		return rg;
	}
	public void setRg(String rg) {
		this.rg = rg;
	}

	public Set<Automovel> getAutomovel() {
		return automovel;
	}

	public void setAutomovel(Set<Automovel> automovel) {
		this.automovel = automovel;
	}


	
	


	
	
	
}
