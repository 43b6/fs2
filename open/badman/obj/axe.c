
#include <weapon.h>

inherit AXE;
void create()
{
        set_name("����",({"axe"}) );
	set_weight(4000);
	if( clonep())
		set_default_object(__FILE__);
	else{
	set("long","
һ��ʮ�ַ����ĵ��и�ͷ��ȫ���Ը������ɣ�������ʮ�ֵ��ء�\n");
	set("value",120);
	set("material","steel");
	set("unit","��");
	}
	init_axe(7);
	setup();
}

 
 
