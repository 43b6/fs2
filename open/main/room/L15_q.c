// Room: /open/main/room/L15.c
#include "/open/open.h"

inherit ROOM;

void create()
{
	set("short", "�޷���");
	set("long", @LONG
�㿴��·���и�ͤ�ӣ��в�������Χ�Ź�������Ϣ�ء�����ϸ
������ȥ��Ψ���������ͷ����Ψһ�о�����ʶ���ˡ�������Ļ�
����ȥ�����������������ӣ�Ӧ��֪�������°ɡ�
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"r42",
  "west" : __DIR__"L14",
  "north" : __DIR__"s25",
  "east" : __DIR__"r39",
]) );

  set("objects", ([
      MAIN_NPC"vendor"  :       1,
  ]) );
  set("outdoors", "/open/main" );

  setup();
}
