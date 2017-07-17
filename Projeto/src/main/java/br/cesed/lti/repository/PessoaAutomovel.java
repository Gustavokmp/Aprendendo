package br.cesed.lti.repository;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import br.cesed.lti.model.Automovel;

@Repository
public interface PessoaAutomovel extends JpaRepository<Automovel, Integer> {

}
