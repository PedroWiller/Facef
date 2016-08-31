SELECT c.nome,
	p.dt_compra,
	ip.id_item,
	i.ds_item,
	ip.quantidade
    FROM tb_cliente c
	INNER JOIN tb_pedido p
	    ON c.id_cliente = p.id_cliente
	INNER JOIN tb_item_pedido ip
	    ON p.id_pedido = ip.id_pedido
	INNER JOIN tb_item i
	    ON ip.id_item = i.id_item
    WHERE c.nome = 'Anna'
        AND c.sobrenome = 'Kelly';