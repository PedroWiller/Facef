SELECT cidade, sobrenome
    FROM tb_Cliente;

SELECT cidade "Cidade do Cliente",
       sobrenome "Sobrenome do Cliente"
    FROM tb_Cliente;

SELECT cidade "Cidade do Cliente",
       sobrenome "Sobrenome do Cliente"
    FROM tb_Cliente
    ORDER BY cidade;

--podendo organizar pela posição para o order by
SELECT cidade "Cidade do Cliente",
       sobrenome "Sobrenome do Cliente"
    FROM tb_Cliente
    ORDER BY cidade DESC;

SELECT cidade "Cidade do Cliente",
      sobrenome "Sobrenome do Cliente"
   FROM tb_Cliente
   ORDER BY cidade DESC, sobrenome ASC;

SELECT cidade "Cidade do Cliente",
     sobrenome "Sobrenome do Cliente"
  FROM tb_Cliente
  ORDER BY 1 DESC, 2 ASC;

SELECT DISTINCT sobrenome
   FROM tb_Cliente
   ORDER BY 1;

SELECT  ds_Item "Iten",
        preco_Custo "Custo",
        preco_Custo * 100 "Resultado"
     FROM tb_Item
     ORDER BY 1

SELECT ds_Item "Iten",
        preco_Custo "Custo",
        CAST((preco_Custo * 100) AS INT) "Resultado"
     FROM tb_Item
     ORDER BY 1

SELECT ds_Item "Iten",
        preco_Custo "Custo",
        CAST((preco_Custo * 100) AS INT) "Resultado"
     FROM tb_Item
     WHERE preco_Custo 19

SELECT sobreNome "Sobrenome do Cliente",
       cidade "Cidade do Cliente"
     FROM tb_Cliente
     WHERE cidade = 'São Paulo'

SELECT 	sobreNome "Sobrenome do Cliente",
	cidade "Cidade de Cliente"
     FROM tb_Cliente
     WHERE titulo <> 'sra'
       AND (cidade = 'Sertãozinho' OR cidade = 'São Paulo');

SELECT 	sobreNome "Sobrenome do Cliente",
	cidade "Cidade de Cliente"
     FROM tb_Cliente
     WHERE cidade = 'Sorocaba' OR cidade = 'São Paulo';

SELECT 	sobreNome "Sobrenome do Cliente",
	cidade "Cidade de Cliente"
     FROM tb_Cliente
     WHERE cidade IN ('Sorocaba', 'São Paulo');

SELECT 	id_Cliente,
	      nome
  FROM tb_Cliente
  LIMIT 5

SELECT 	id_Cliente,
	      nome
  FROM tb_Cliente
  LIMIT 8 OFFSET 2

SELECT 	id_Cliente,
	      nome
  FROM tb_Cliente
  OFFSET 12

CREATE TABLE tb_Teste(
coluna_a integer);

INSERT INTO  tb_Teste
VALUES (0), (1), (null);

SELECT *
  FROM tb_Teste
  WHERE coluna_a = 1;

SELECT *
  FROM tb_Teste
  WHERE coluna_a = 0;

SELECT *
  FROM tb_Teste
  WHERE coluna_a IS NULL;

SELECT *
  FROM tb_Teste
  WHERE coluna_a IS NOT NULL;

SELECT COALESCE(coluna_a, 0)
  FROM tb_Teste
  WHERE coluna_a = 1

--mostrar todas configuracões do pgadmin
SHOW ALL


SELECT CAST('2016/06/01' AS DATE);

SELECT CAST('08/12/2016' AS DATE);
SELECT CAST('08/12/2016' AS TIMESTAMP);

--selecionar data do sistema
SELECT NOW();

SELECT *
    FROM tb_Pedido
    WHERE date_part('month', dt_compra) = 9;

SELECT *
    FROM tb_Pedido
    WHERE dt_compra >= CAST('21 07 2013' AS DATE);

SELECT NOW(), current_timestamp

SELECT dt_entrega - dt_compra AS Intervalo
    FROM tb_pedido
