// ribbon.c //cgy

#include <weapon.h>
#include <ansi.h>
inherit UNARMED;
inherit F_AUTOLOAD;
inherit F_SAVE;



void create()
{
	set_name(HIW "��"HIG"֮"HIM"��" NOR, ({"maple_ribbon","ribbon"}));
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","����ҹ��С�����ι���������������ˮ����Ĳʴ���\n");
		set("value",30000);	
		set("material", "gold");
		set("wield_msg", "$N��$n��������$N�ƺ�Ҫ�������衣\n");
		set("unwield_msg", "$N�����е�$n���������뻳�С�\n");
        }
	init_unarmed(50);
	setup();
}
int wield()
{
 if( this_player()->query("class") != "dancer" )
    return notify_fail("ֻ����������ม�\n");
 set_heart_beat(1);
 ::wield();
 return 1;
}

