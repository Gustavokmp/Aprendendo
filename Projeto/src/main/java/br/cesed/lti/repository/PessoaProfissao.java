package br.cesed.lti.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import br.cesed.lti.model.Profissao;

@Repository
public interface PessoaProfissao extends JpaRepository<Profissao, Integer> {

}
