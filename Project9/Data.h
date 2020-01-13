template<typename T>
class Data {
	T *t;
	int number;
public:
	Data(T& a, int n);
	T Sum();
	int Find(T& x);
	~Data();
};

template<typename T>
Data<T>::Data(T& a,int n)
{
	t = &a;
	number = n;
}

template<typename T>
T Data<T>::Sum()
{
	T sum = 0;
	int i;
	for (i = 0; i < number; i++)
		sum += t[i];
		return sum;
}

template<typename T>
int Data<T>::Find(T& x)
{
	int k=-1;
	for (int j = 0; j < number; j++)
		if (t[j] == x)
			k = j;
	return k;
}

template<typename T>
Data<T>::~Data()
{

}