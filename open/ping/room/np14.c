#include <ansi.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
	set( "build", 2 );
  set ("long", @LONG
�߽�����, ��һ��ת��, ��������ʦ�ֶ�Զ���ס��, ��������
����Ϣ��, �����������ϺõĴ���̺, ���г�һ��ׯ�ϵ����ա�

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"np15",
  "west" : __DIR__"np13",
  "north" : __DIR__"np19",
  "east" : __DIR__"np18",
]));
  set("light_up", 1);

  setup();
}

int valid_leave(object me, string dir)
{
         if( dir=="east" && me->query("family/family_name")!="�μ�" )
      return notify_fail(HIC"���С����"NOR"��Ц��Ц�Ķ���˵: ��������\n");
        return ::valid_leave(me, dir);
}

