
#include <ansi.h>
#include <weapon.h>

inherit BLADE;
void create()
{
	set_name("�˵�",({"carver"}) );
	set_weight(1500);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
һ�ѱ����б��Ĳ˵������ʺϸ����³�ʱʹ���ˣ���Щ�ø�����ϲ��������
�����Ϲ�:P\n");
		set("material","iron");
		set("value",70);
		set("unit","��");
	}
	init_blade(3);
	setup();
}

