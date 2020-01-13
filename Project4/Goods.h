class Goods {
	static int totalWeight;
	int weight;
public:
	Goods();
	Goods(int w);
	int get();
	static int GetTotal();
	~Goods();
};