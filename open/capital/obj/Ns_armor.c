// kame_suit.c

inherit EQUIP;
			
void create()
{
        set_name("����ս��",({"soldier armor","armor"}) );
	set_weight(20000);
	set("gender_only", "����");
	      	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","���������õ�ս�ף��������ܱ��أ����ƺ������õı�����\n");
		set("unit", "��");
	set("value",3000);
	set("material","steel");
	set("armor_type", "cloth");
        set("armor_prop/armor",10 );
	}
        setup();
}
