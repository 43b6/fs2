// Room: /u/r/ranko/room/pa1.c
inherit ROOM;

void create ()
{
  set ("short", "С·");
  set ("long", @LONG
����һ������������С·��·��ʯ�Ӳ��٣����ڽŵ׹ֲ����
�ģ���ʱ����ע��������ⱻ�赹�ˣ������Ӳݴ������ƺ�Ƿȱ��
������·������С��ͨ��һ��Сľ�ݣ��㲻���е���־�����˭
ס�ڴ˴��ء�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"v3.c",
]));
  set("outdoors", "/open/poison");

  setup();
}

void init()
{
	add_action("do_enter","enter");
}
int do_enter(string str)
{
	object me=this_player();
		if(!str || str!="hut")
	return notify_fail("�����������ѽ?\n");

	message_vision("$N����С�����ߵ�Сľ����ǰ��\n",me);
	tell_room(me,"���ƿ���ľ���߽����ڣ���Ȼ��������ס��һλ����ģ�����ˡ�\n");
	me->move(__DIR__"v10.c");
	return 1;
}
		                   

