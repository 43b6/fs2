
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "��������¥--");
  set ("long", @LONG
�����������е����һ�㣬���˿����ܣ�������в���˼�飬��Χ
����һ�Ѷѵİ׹ǣ��׹���ɢ����һ�Ѷѵ�������װ�������ڵ�������
��һ��˵�����Ĺ������գ�ʱ����������ҽе�������ʱ���ŵ�Ũ���
Ѫ��ζ�����㲻�������������ǽ���ƺ�����һ�ż��� (shelf)������
���治Э����
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
"shelf" : "һ�ų����ҳ��ļ��ӣ������ƺ������Ƶ����ӡ�
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"tower7",
]));
       set("no_transmit",1);

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
return notify_fail("[1;32m���֣���û�²�Ҫ���ƣ�[0m\n");

  me = this_player();
    message_vision("[1;32m����ͻȻ����һ��������������������ˤ����ȥ!![0m\n", me);

    me->move(__DIR__"tower8-1.c");
    tell_room(environment(me), sprintf ("[1;32m%s���ʯͷ��ˤ������ .[0m\n",
     me->short()), me);
  return 1;
}


