// gold-hat by roger
//����eq

#include <armor.h>
#include <ansi.h>

inherit HEAD;
void create()
{
	set_name(HIY"��ᳯ���"NOR, ({"gold hat", "hat"}));
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long", "һ���Ա������һ�Խ��Ļƽ���ᡣ\n");
	set("unit", "��");
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
	set("value", 300000);
	set("material", "gold");
	set("armor_prop/armor", 10);
        set("armor_prop/dodge",4);
        set("armor_prop/move",4);
	}
	setup();
}
int query_autoload()
{
 return 1;
}

