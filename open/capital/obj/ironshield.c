// kame_suit.c

inherit EQUIP;
					
void create()
{
        set_name("����",({"iron shield","shield"}) );
	set_weight(10000);
	set("gender_only", "����");
	      	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","���ƵĶ��ơ�\n");
	set("unit", "��");
	set("value",1000);
	set("material","iron");
	set("armor_type", "shield");
        set("armor_prop/armor",5 );
				
	}
        setup();
}
