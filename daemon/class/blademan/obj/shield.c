// kame_suit.c
inherit EQUIP;
void create()
{
set_name("ħ����",({"magic shield","shield"}));
	set_weight(2000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","����һ���ܹ�ħ���ӳֵĶܡ�\n");
        set("unit","��");
        set("value",3000);
	set("material","steel");
	set("armor_type","shield");  
        set("armor_prop/armor",15);
        set("armor_prop/magic",1);
        set("armor_prop/parry",5);
        set("armor_prop/force",5);
	}
        setup();
}
