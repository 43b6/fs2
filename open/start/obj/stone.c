//stone.c �챦ʯ �� quests/stone �����item  97/11/17 by anmy

#include <weapon.h>
#include <ansi.h>
inherit STABBER;

void create()
{
        set_name(HIR"�챦ʯ"NOR,({"stone"}));
        set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("unit", "��");
                set("long","�˱�ʯ��˵Ϊ���������á�\n");
                set("value",17500);
		set("material", "steel");
                set("wield_msg", "$N����ǰ�ڴ����ó�һ��$n��\n");
                set("unwield_msg", "$N��$n�ս���ǰ�ڴ��С�\n");
	}
        init_stabber(50);
	setup();
}
int wield()
{
        if((string)this_player()->query("family/family_name") != "����")
           return notify_fail("�챦ʯֻ����ҵ�������\n");
        else{
              ::wield();
            }
        return 1;
}
