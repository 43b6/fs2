// meal.c

inherit ITEM;

void create()
{
	set_name("���ƴ��", ({ "special meal", "meal" }));
	set_weight(250);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ����ζ����Ķ��˹����ƴ��\����֪����ʲô���ġ�\n");
		set("unit", "��");
		set("value", 250);
		set("ʳ��", ([
                        "ʣ" : 5,       // ���ԳԼ���
                        "��Ӧ": 80,     // ÿһ������ӵ���
                ]) );
	}
	setup();
}

int finish_eat()
{
	object who = this_player();
	tell_object(who,"�ף���ô�Ե�һ�����ģ���...�ⲻ���˵���ָ�����ģ��Ѳ���...\n");
	tell_object(who,"�뵽���������ѸոճԵĶ���ȫ���³�����\n");
	destruct(this_object());
	return 1;
}
