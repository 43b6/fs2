
#include <ansi.h>

inherit EQUIP;

void create()
{
	set_name("������Ů����",({"goddness cloth","cloth"}) );
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
else	{
	set("meterial","silk");
	set("unit","��");
	set("value", 1000);
	set("armor_type","cloth");
	set("armor_prop/armor",25);
	set("armor_prop/dodge", 5);
	set("armor_prop/force", 3);
	set("long","
һ����֪����ô�����Ƴɵ����ѣ���������ԼԼɢ�������ɵ�ɫ�ʣ�������
�ƺ��������������š�\n");
	}
	setup();
}
