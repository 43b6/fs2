// Room: /u/f/fire/room/room1-2.c
#include <ansi.h>
#include <marksman.h>
inherit ROOM;

void create ()
{
  set ("short", "[32m��ɳ��[2;37;0m");
  set ("long", @LONG
��������һ��ʯ��·�ϣ��Ƴ������ĵ�·���ϱ����������ȥ��
·�ԵĲݵ��ϳ���һЩ��֪����Ұ����Ұ�ݡ��㿴����ɳ����������
��ʮ�����ҡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
"north" : __DIR__"room1-3",
"south" : __DIR__"room1-1",
]));
set("outdoors","/open/marksman");

  setup();
}
