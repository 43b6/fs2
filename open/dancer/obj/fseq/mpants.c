// ���۽�Ʒby cgy(22/10/00)

#include <armor.h>
#include <ansi.h>

inherit PANTS;

void create()
{
	set_name( HIC"Сѩ���������ȹ"NOR, ({ "acky_skirt", "skirt" }) );
	set_weight(1);
	if( clonep() )
                set_default_object(__FILE__);
        else {
                set( "unit", "��" );
                set( "value", 0 );
                set("long", HIC"����һ�����������������ȹ�o, �ƺ�������ǿ�ı�����\n" );
		set("wear_msg", HIC"$N����$n"HIC", ���������ǿɰ�����, ʹ�õ��˶��᲻���۸�$N��\n"NOR );
		set("unequip_msg", HIC"$N������$n"HIC", �·𿴵�Сѩ��ͣ�ؿ޿�����...\n"NOR );
                set("material", "steel" );
                set("armor_prop/armor", 14 );
	        set("no_auc",1);
        	set("no_sell",1);
        	set("no_give",1);
         	set("no_put",1);
        	set("no_drop",1);
        	set("no_get",1);
                set("armor_prop/parry", 8);
                set("armor_prop/force", 8);
                set("armor_prop/dodge", 8);
        }
                setup();
}
