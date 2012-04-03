// Room: /u/r/ranko/room/f1.c
inherit ROOM;

void create ()
{
  set ("short", "ũ��");
  set ("long", @LONG
һ��Ƭ�����͵���غ�ب������ǰ�������ĵ��뼸��������ѹ
���������档��Զ���������ũ����æ���ո���������ƺ��Ǹ�
���ꡣ�����ͯ�����ո���������������ȥ����Ĳ����ֺ�����
����ʱ�ɹ���ֻ����𸣬��������˻��������������һ����é�ݴ�
�ǳɵ�é��(hut)��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"f4.c",
  "east" : __DIR__"f6.c",
]));
	set("item_desc", ([ /* sizeof() == 1 */
	"hut" : "һ��Сé�ݡ�\n",
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
	object me;
	me=this_player();
	if( !str || str!="hut")
		return notify_fail("�����������ѽ?\n");
	message_vision("$N������é���С�\n",me);
	me->move(__DIR__"hut.c");
	return 1;
}

