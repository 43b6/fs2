// ribbon.c //cgy

#include <weapon.h>
#include <ansi.h>
inherit UNARMED;
inherit F_AUTOLOAD;
inherit F_SAVE;



void create()
{
	set_name(HIW "枫"HIG"之"HIM"舞" NOR, ({"maple ribbon","ribbon"}));
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "条");
		set("long","这是夜梦小筑上任宫主留给月牙儿及水灵儿的彩带。\n");
		set("value",30000);	
		set("material", "gold");
		set("wield_msg", "$N把$n拿在手上$N似乎要翩翩起舞。\n");
		set("unwield_msg", "$N将手中的$n仅慎的收入怀中。\n");
        }
	init_unarmed(50);
	setup();
}
int wield()
{
 if(!this_player()) return 1;
 if( this_player()->query("class") != "dancer" )
    return notify_fail("只有舞者能用喔。\n");
 set_heart_beat(1);
 ::wield();
 return 1;
}

