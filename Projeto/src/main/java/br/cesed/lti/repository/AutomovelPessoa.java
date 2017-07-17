package br.cesed.lti.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import br.cesed.lti.model.Pessoa;

@Repository
public interface AutomovelPessoa extends JpaRepository<Pessoa, Integer> {

}
