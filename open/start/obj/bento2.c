// bento2.c

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
	}
	setup();
}

int do_eat(string arg)
{
	tell_object(this_player(), "�㻹�԰���̰�Թ�����ȥ��ũ��ɡ�\n");
	return 1;
}
