// Room: /u/f/fire/room/room1-12.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[1;31m���ҩ��[2;37;0m");
  set ("long", @LONG
���߽�һ�������ҩζ�ķ����У�������һ��ҩ�̡����������
���򵽸�ʽ������ҩ�ġ��ڷ��ӵ�������һ�ŵ�ľ���ӣ��ڹ����ϵ�
��д���˸�ʽ��ҩƷ���ƣ����㿴�˶������ۻ����ҡ��ڹ���ǰ�滹
��һλ�����׺��ӵ����˲��ϵĿ�����ͬ�ĳ�����ȡҩ�ġ�
LONG);

  set("objects", ([ /* sizeof() == 1 */
C_NPC"/yangming-teck" : 1,
]));
set("outdoors","/open");
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"room1-11",
]));

  setup();
}
