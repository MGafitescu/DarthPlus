struct IntNode 
{
	char name[100];
	int val;
	int init;
};

struct StringNode 
{
	char name[100];
	char val[100];
	int init;
};

struct FloatNode 
{
	char name[100];
	double val;
	int init;
};

struct BoolNode 
{
	char name[100];
	 int val;
	int init;
};

struct IntFuncNode
{
	char name[100];
	int nr_inodes;
	int nr_snodes;
	int nr_fnodes;
	int nr_bnodes;
	int param_nr;
	int param_order[100];
	struct IntNode intnodes[10];
	struct StringNode stringnodes[10];
	struct BoolNode boolnodes[10];
	struct FloatNode floatnodes[10];
};

struct StringFuncNode
{
	char name[100];
	int nr_inodes;
	int nr_snodes;
	int nr_fnodes;
	int nr_bnodes;
	int param_nr;
	int param_order[100];
	struct IntNode intnodes[10];
	struct StringNode stringnodes[10];
	struct BoolNode boolnodes[10];
	struct FloatNode floatnodes[10];
};

struct FloatFuncNode
{
	char name[100];
	int nr_inodes;
	int nr_snodes;
	int nr_fnodes;
	int nr_bnodes;
	int param_nr;
	int param_order[100];
	struct IntNode intnodes[10];
	struct StringNode stringnodes[10];
	struct BoolNode boolnodes[10];
	struct FloatNode floatnodes[10];
};

struct BoolFuncNode
{
	char name[100];
	int nr_inodes;
	int nr_snodes;
	int nr_fnodes;
	int nr_bnodes;
	int param_nr;
	int param_order[100];
	struct IntNode intnodes[10];
	struct StringNode stringnodes[10];
	struct BoolNode boolnodes[10];
	struct FloatNode floatnodes[10];
};