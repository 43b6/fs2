// Room: /open/main/room/F12.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������һƬŨ�ܵ�ɭ�֣��ߴ����ľ����֯��֦Ҷ������
���ո������ڱ�ס�ˡ�������������Ұ�޵ĵͺ�������������
����ֲ������ա�������׼��ת���뿪ʱ���ŵ����ƺ��ȵ���
ʲô����...

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/main/room/r26",
  //"west" : "/open/main/room/m12",
  "west" : "/open/main/room/f11",  	
  "north" : "/open/main/room/m7",
  "east" : "/open/main/room/r19",
]));

  setup();
}

void init()
{
	add_action("do_search", "search");
	add_action("do_climb", "climb");
}

int do_search()
{
	object who;
	who = this_player();

	tell_object(who,"\n��ſ�ڵ��ϵ���������ȥ��ͻȻ��������һ�գ���...
...............................................
...............................................
...............................................\n\n");
	tell_object(who,"������һ�����������ֻص�����Ϥ�ĵ��棬ƨ�ɲ�㿪����\n\n");
	who->move("/open/badman/room/t1");
	tell_room(this_object(),"��ֻ����"+who->query("name")+"����һ��ɱ���ƵĲҽУ�תͷ��ȥ��ʱ��ȴ�Ѿ������ˡ�\n");
	return 1;
}

int do_climb(string str)
{
	object me;
	me = this_player();
	
  if (str != "pine" && str != "��" && str != "����" && str != "����")
    return notify_fail("����ѽ��ѽ.....��? ͻȻ�����Լ��ֲ����ڹ�, ����������!\n");
  
	tell_object(me,"\n�����ݵ������������...\n");
	me->move(__DIR__"M21");
  tell_room(environment(me),
	    sprintf ("%s˳������, �ݵ�һ��, �ɿ������������\n", me->short()),
	    me);
	return 1;
}