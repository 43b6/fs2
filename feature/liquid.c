// liquid.c

#include <dbase.h>
#include <name.h>

varargs string long(int raw)
{
	int amount, max;
	string str;

	if( amount = query("liquid_remaining") ) {
		str = query("long");
		max = query("liquid_maximum");
		if( amount == max )
			str += "����װ����" + query("liquid_name") + "\n";
		else if( amount > max/2 )
			str += "����װ���ߡ��˷�����" + query("liquid_name") + "\n";
		else if( amount >= max/3 )
			str += "����װ���塢��������" + query("liquid_name") + "\n";
		else if( amount > max/4 )
			str += "����װ�������" + query("liquid_name") + "\n";
		return str;
	}
	else return query("long");
}
