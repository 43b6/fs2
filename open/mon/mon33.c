inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "���ҵ�");
        set ("long", @LONG
������һ�������ͣ������ڵ����˳���ɽ�ϵ����ҵ�������һƬ
�����ҵ��ϣ������ɽ�紵���㣬�����վ��ס�ţ�����Ŀ�����
���ڿ���֮�У���ֻ�ܼ�������������
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "up"      : __DIR__"mon34",
]));
        setup();
}

void init()
{
  add_action ("do_climb","climb");
}

int do_climb (string str)
{
  object        me;

  if (str != "rock" && str != "��ʯ")
    return notify_fail("����ѽ��ѽ......�����˰��컹�ǲ������صĒ�������.....\n");
  me = this_player();
  message_vision("$N����ʮ����Ṧ��һ���̵ľͲ�����Ӱ�ˡ�\n",me);
  me->move(__DIR__"mon28");
  tell_room(environment(me),
            sprintf ("%s����ʮ����Ṧ����������֮ʱ���Ѿ����������ҵ���\n", me->short()),
            me);
  return 1;
}

