// Room: /u/m/moner/room/room3.c
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG

������ħ���ı����ң�ǽ�Ϲ����˵���ǹ������צ������������ǽ����һ��������
(shelf)�����СС�ĵ���ɢ�����ϣ�����������һ˿�����⣬ӳ���ڱ�����������
��������������η��
����η��

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
"shelf" : "һ�����������ļ��ӣ�˽�������Ƶ����ӡ�
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"room4.c",
]));

  setup();
}

void init()
{
add_action ("do_push","push");
}

int do_push (string str)
{
  object        me;
   if (!str || (str != "shelf" && str != "������"&& str != "����"))
return notify_fail("���֣���û�²�Ҫ���ƣ�\n
");

  me = this_player();
    message_vision("����ͻȻ����һ��������������������ˤ����ȥ!!\n", me);
    me->move(__DIR__"room5.c");
    tell_room(environment(me), sprintf ("%s���ʯͷ��ˤ������ .\n",
        me->short()), me);
  return 1;
}
