inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
	set_name(YEL"��֭�跹"NOR,({"food","evil-foods"}));
	set_weight(100);
	if( clonep() )
                set_default_object(__FILE__);
	else
	{
		set("value",10);
		set("base_unit","��");
		set("unit","����");
		set("long","��������Ƽ������ĵ��Ƶ�ʳ��֮һ������...�ƺ�������ͨ�����ܡ��ԡ����¿�...\n");
	}
	set_amount(1);
setup();
}