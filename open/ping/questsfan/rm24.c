// Room: /u/d/dhk/questsfan/rm24
#include <ansi.h>
#include <room.h>
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
������Լ����ɽɽ�������������ߺ����ͨ�����ٲݹȡ�
��������ֻ�Ǵ��ţ�Ҳ��֪���ǲ��������ǵط����˵�������
�����ɣ��������أ������������ҡ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/man" : 2,
]));
  set("outdoors", "/u/d");
  set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"rm28",
  "northwest" : __DIR__"rm8",
]));

  setup();
}
int valid_leave(object who,string dir)
{
    who=this_player();
        if(dir=="eastdown"&&who->query_temp("stupid")==1)
  {
// tell_object(who,""HIM"������˵��:������Ե�Ѿ������߰ɣ�"NOR"\n");
        return notify_fail("������˵��:������Ե�Ѿ������߰ɣ�\n");
        return :: valid_leave(who,dir);
  }
  return :: valid_leave(who,dir);
}

