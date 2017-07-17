package br.cesed.lti.model;

import java.util.HashSet;
import java.util.Set;

import javax.persistence.*;

@Entity
public class Automovel {
	@Id
	@GeneratedValue(strategy = GenerationType.AUTO)
	private int id;
	
	private String modelo;
	private String marca;
	private String placa;
	
	@ManyToOne(cascade = CascadeType.ALL)
	private Set<Pessoa> pessoa = new HashSet<Pessoa>();
	
	
	public Automovel(String modelo, String marca, String placa) {
		this.modelo = modelo;
		this.marca = marca;
		this.placa = placa;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getModelo() {
		return modelo;
	}
	public void setModelo(String modelo) {
		this.modelo = modelo;
	}
	public String getMarca() {
		return marca;
	}
	public void setMarca(String marca) {
		this.marca = marca;
	}
	public String getPlaca() {
		return placa;
	}
	public void setPlaca(String placa) {
		this.placa = placa;
	}
	public Set<Pessoa> getPessoa() {
		return pessoa;
	}
	public void setPessoa(Set<Pessoa> pessoa) {
		this.pessoa = pessoa;
	}
	
	
	
	
	
	
	

}
