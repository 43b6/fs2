// Room: /open/tendo/room/t09.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�����Ⱥ���������������������������Ʊ����ĵ�ҩ���������
ѧ���������������ʺϵĲ��ϡ�

LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"t10",
]));
        set("objects",([
		"open/tendo/npc/chinshi" : 1,
        ]));
	set("light_up",1);
	setup();
}
void init()
{

add_action("do_made","made");
}

int do_made(string arg)
{
  object ob,pi,me=this_player();
		if(me->query("class")!="taoist")
		return 0;
        if( !arg )                      return 0;
		if(arg !="fruit") {
		write("��Ҫ��ɶ����?\n");
		return 0;
		}
        arg=lower_case(arg);
		if( !ob = present(arg,me) ) {
		write("������û�Ƕ�����\n");
		return 1;
		}
destruct(ob);

pi = new("/open/tendo/obj/manapill");
pi->add_amount(15);
pi->move(this_player());
write("����һ��Ŭ�������������˵�ҩ��\n");
return 1;
}
