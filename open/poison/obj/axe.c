
#include <ansi.h>
#include <weapon.h>

inherit AXE;
void create()
{
	set_name("��ͷ",({"axe"}) );
	set_weight(4000);
	if( clonep())
		set_default_object(__FILE__);
	else{
	set("long","
һ��ʮ�ַ�����˫�и�ͷ����ľͷΪ��������ɽ�����Է�����\n");
	set("value",120);
	set("material","steel");
	set("unit","��");
	}
	init_axe(7);
	setup();
}

 
 
