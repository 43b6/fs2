#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������һ������, ������ǰ����������������, ��������Ҳ����
һ���ߵ� ,�����������ϺõĴ���̺, ���г�һ��ׯ�ϵ����ա�

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "southeast" : __DIR__"np32",
  "west" : __DIR__"np1",
  "north" : __DIR__"np15",
]));
  set("light_up", 1);

  setup();
}

int valid_leave(object me, string dir)
{
         if( dir=="southeast" && me->query("family/family_name")!="�μ�" )
         if(!wizardp(me))
      return notify_fail(HIC"���С����"NOR"��Ц��Ц�Ķ���˵: ��������\n");
        return ::valid_leave(me, dir);
}

