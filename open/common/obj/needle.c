// thunder_hat.c

inherit EQUIP;

void create()
{
	set_name("ɢ��ñ", ({ "thunder hat", "hat" }) );
	set_weight(2200);
	      	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ������ɢ���׻�ʱ�˺���ñ�ӡ�\n");
		set("unit", "��");
		set("value",220);
		set("material", "�鲼");
		set("armor_type", "head");
		set("armor_prop/armor", 4);
		set("thunder",1);
	}
        setup();
}
