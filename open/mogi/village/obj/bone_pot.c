
inherit ITEM;
//inherit F_LIQUID;

void create()
{
	set_name("����\�ƺ�", ({ "bone pot", "pot" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "������ͷ�ǿ̳����ƺ�, �о��е���ɭ�ֲ�.\n");
		set("unit", "��");
		set("value", 40);
		set("max_liquid", 20);
	}

	set("Һ��", ([
		"����": "��",
		"����": "Ѫ��",
		"ʣ": 20,
		"ֹ��" : 50,
		"�ƾ��ɷ�": 7,
	]) );
	setup();
}
