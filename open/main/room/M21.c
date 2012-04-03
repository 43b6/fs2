// Room: /open/main/room/M21.c

inherit ROOM;

void create ()
{
  set ("short", "ѩ��ɽ");
  set ("long", @LONG
����ѩ��ɽ�ĵײ�������ѩ��ɽ��ֱ��ɽ�ƣ�����ɽ���뾭��
�ӹȵ�����������һ��������ɣ�������ͨ��ѩ���ɵ�ɽ�ڡ�����
�߸��ϱ�����ѩ��ɽ�Ƚ�ƽ̹�ĸߵء�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up"		: "/open/snow/room/room3",
  "southdown" : __DIR__"L8",
  "westdown" : __DIR__"L5",
]));

  set("outdoors", "/open/main");
  setup();
}

void init()
{
  add_action ("do_climb","climb");
}

int do_climb (string str)
{
  object	me;

  if (str != "pine" && str != "��" && str != "����" && str != "����")
    return notify_fail("����ѽ��ѽ.....��? ͻȻ�����Լ��ֲ����ڹ�, ����������!\n");
  me = this_player();
  message_vision("$N���ֱ�ס���ɣ��ݵ�һ�����ܿ������ɽ��\n",me);
  me->move(__DIR__"f12");
  tell_room(environment(me),
	    sprintf ("%s˳������, �ݵ�һ��, �ɿ������������\n", me->short()),
	    me);
  return 1;
}
