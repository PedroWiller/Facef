CREATE DATABASE "LBD"
TEMPLATE = TEMPLATE0
ENCODING = 'UTF-8'
CONNECTION LIMIT -1;

CREATE TABLE  tb_Cliente(
	id_Client INTEGER,
	Titulo CHAR(4),
	Nome VARCHAR(32) CONSTRAINT nn_cliente_nome NOT NULL,
	SobreNome VARCHAR(32) CONSTRAINT nn_cliente_sobrenome NOT NULL,
	Endereco VARCHAR(32) CONSTRAINT nn_endereco_cliente NOT NULL,
	Numero VARCHAR(5) CONSTRAINT nn_numero_cliente NOT NULL,
	Complemento VARCHAR(62),
	Cep	VARCHAR(10),
	Cidade VARCHAR(62) CONSTRAINT nn_cliente_cidade NOT NULL,
	Estado CHAR(2) CONSTRAINT nn_cliente_estado NOT NULL,
	Fone_Fixo VARCHAR(15),
	Fone_Move VARCHAR(15),
	Fg_Ativo  INTEGER,
	CONSTRAINT pk_cliente_id_cliente PRIMARY KEY(id_Cliente)
);

CREATE TABLE tb_Item(
	id_Item INTEGER,
	ds_Item VARCHAR(64) CONSTRAINT nn_item_ds_item NOT NULL,
	Preco_Custo NUMERIC(7,2),
	Preco_Venda NUMERIC(7,2),
	Fg_Ativo INTEGER,
	CONSTRAINT pk_item_id_item PRIMARY KEY(id_Item)
);

CREATE TABLE tb_Pedido(
	id_Pedido INTEGER,
	id_Cliente INTEGER CONSTRAINT nn_pedido_id_cliente NOT NULL,
	dt_Compra TIMESTAMP,
	dt_Entrega TIMESTAMP,
	Valor NUMERIC(7,2),
	Fg_Ativo INTEGER,
	CONSTRAINT pk_pedido_id_pedido PRIMARY KEY(id_Pedido),
	CONSTRAINT fk_pedido_id_cliente FOREIGN KEY(id_Cliente)
		REFERENCES tb_Cliente(id_Cliente)
);

CREATE TABLE tb_Item_Pedido(
	id_Item INTEGER,
	id_Pedido INTEGER
		CONSTRAINT nn_item_pedido_id_item NOT NULL,
	Quantidade INTEGER,
	CONSTRAINT pk_item_peido PRIMARY KEY(id_Item, id_Pedido),
	CONSTRAINT fk_item_id_item FOREIGN KEY (id_Item)
		REFERENCES tb_Item(id_Item),
	CONSTRAINT fk_item_id_pedido FOREIGN KEY (id_Pedido)
		REFERENCES tb_Pedido(id_Pedido)	
);