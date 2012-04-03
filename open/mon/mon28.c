inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "ѩ��С��");
  set ("long", @LONG
ǰ����С·���ɣ��̹ǵĺ���ӭ�������ϸϸ�İ�ѩ����ظ���
������С����һ��Ĳ�ľ�Ѿ����������ߵ�������Ѿ��Ҳ���·��
�������ˣ��㿴��һ��Ƭ����ʯ(rock)�赲����ͨ��ɽ����·������
�����������Ĳ��а취ͨ��ɽ�����������ǰ����Զ������һ������
�޹��Բ�㣬΢΢���������㿴�����Ƕ���ʲô��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/pig.c" : 1,
]));
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"mon51",
  "south" : __DIR__"mon32",
  "eastdown" : __DIR__"mon27",
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
  if (!str || (str != "rock" && str != "��ʯ"))
    return notify_fail("����ѽ��ѽ......�����˰��컹�ǲ������صĒ�������.....\n");

  me = this_player();
  message_vision("$Nչ�������Ṧ����������ʯ���������ɵĵ��������ҵ���\n", me);
  me->move(__DIR__"mon33");


  tell_room(environment(me), sprintf ("%s����һ�㣬����һ�ţ��������еĵ��������ҵ���\n",
        me->short()), me);
  return 1;
}

