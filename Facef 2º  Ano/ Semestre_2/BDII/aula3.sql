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
