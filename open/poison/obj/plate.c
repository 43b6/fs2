#include <ansi.h>

inherit EQUIP;

void create()
{
	set_name("���������h���",({"plate"}) );
	set_weight(10000);
	if ( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","
�h�Ϊ���������һ��Ұ�ޣ�����б�����Ƥ��Ӳ����ǹ���롣���򷬰�
�����ܻ񣬰�����Ƥ�����Ƴ�������׽�������͢����͢Ϊ�˼������
�������й���������������ס�\n");
		set("unit","��");
		set("value",10000);
		set("material","crimsonsteel");
		set("armor_type","cloth");
		set("armor_prop/armor",20);
		set("armor_prop/parry",5);
		set("armor_prop/dodge", -5);
		setup();
	}
}
