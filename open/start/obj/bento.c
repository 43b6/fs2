// bento.c

inherit ITEM;

void create()
{
	set_name("�㵱",({"bento"}));
	set_weight(350);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	  set("long","һ��������ı㵱�����㲻��ʳָ�󶯡�\n");
	  set("unit","��");
	  set("ʳ��", ([
                        "ʣ" : 1,       // ���ԳԼ���
                        "��Ӧ": 50,     // ÿһ������ӵ���
          ]) );
	}
	setup();
}

int finish_eat()
{
	set_name("�㵱��",({"bento box","box"}));
	set_weight(150);
	set("unit","��");
	set("long","һ���տյı㵱�С�\n");
	return 1;
}

int do_eat(string arg)
{
	object who;
	who = this_player();

	// һ��Ҫ���Լ�ȥ�õı㵱�ſ��Գԣ��������˰������
	if( !who->query_temp("bento") )
		return notify_fail("�˼ҵı㵱���ʲô�ԣ�\n");
	if( who->query_temp("eating") )
		return notify_fail("�ٺ�....��һ���͹��˰ɣ�\n");
	who->set_temp("eating", 1);

	return 1;
}
