// Room: /u/d/dhk/questsfan/room5
inherit ROOM;
#include <ansi.h>
#include <room.h>
void create ()
{
  set ("short", "[0;36m�ܵ�[2;37;0m");
  set ("long", @LONG
�������ߵ��У���ȻƮ��һ�����硣��ʱ�������ǳ�
�ڵ�������î��ȫ����ϸ��������Ȼ�ߵ��ľ�ͷ�Ϸ���
һ���������ֵĳ��ڣ����ҷ�ͺ����Ǵ��������ġ�

LONG);
set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"room4",
]));

  setup();
}
void init()
{
        add_action("do_search", "search");
}

int do_search()
{
        object who;
        who = this_player();

        tell_object(who,"\n����ϸ�����������ҵ�һ�����ܵĳ��ڡ�\n\n");
        who->move(__DIR__"room6");
        return 1;
}
