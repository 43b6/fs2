// ribbon.c //cgy

#include <weapon.h>
#include <ansi.h>
inherit UNARMED;
inherit F_AUTOLOAD;
inherit F_SAVE;



void create()
{
	set_name(HIC "��"HIM"��"HIG"��"HIW"��" NOR, ({"rainbow ribbon","ribbon"}));
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("no_drop",1);
		set("no_sell",1);
        set("no_give",1);
        set("no_get",1);
        set("no_put",1);
        set("no_auc",1);
		set("unit", "��");
		set("long","һ���߲ʵĶд����ߵ����\n");
	/*	set("value",1000);	*/
		set("material", "gold");
		set("wield_msg", "$N��$n��������$N�ƺ�Ҫ�������衣\n");
		set("unwield_msg", "$N�����е�$n���������뻳�С�\n");
                        set ("no_get", 1);
                        set ("no_drop", 1);
                   }
	init_unarmed(30);
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
int query_autoload()
{
   return 1;
}

