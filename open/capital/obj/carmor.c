// kame_suit.c

inherit EQUIP;
					
void create()
{
        set_name("������",({"steel plate","plate"}) );
	set_weight(20000);
	set("gender_only", "����");
	      	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","�ʹ��������õ�ս�ס�\n");
	set("unit", "��");
	set("value",3500);
	set("material","steel");
	set("armor_type", "cloth");
        set("armor_prop/armor",12 );
        set("armor_prop/dodge",-2 );
        set("armor_prop/parry",2 );
	}
        setup();
}
