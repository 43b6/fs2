#include <weapon.h>
#include <ansi.h>
inherit UNARMED;

void create()
{
 	        set_name(HIG"��֥��צ"NOR, ({ "beast claw" ,"claw" }) );
	        set_weight(1500);
       		if( clonep() )
                set_default_object(__FILE__);
        	else {
        	set("long", "��֥���޻û�������������������ǿ���ɱ������\n");
                set("unit", "��");
                set("value", 300000);
                set("material", "steal");
		set("type", 1); 
       		}
		init_unarmed(75);
		setup();
}
