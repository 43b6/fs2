// Room: /u/f/fire/room/room1-10.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[32m��ɳ��[2;37;0m");
  set ("long", @LONG
����һ�����ֵĽֿڣ��������ǳ�ɳ�����ڡ���������������
�ڡ����ڻ���֮�У��ƺ������ϳ��������㿴�������ƺ���һЩ��
�ŵ�סլ��
LONG);

  set("objects", ([ /* sizeof() == 1 */
C_NPC"/boy" : 1,
]));
set("outdoors","/open/marksman");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room1-7",
  "north" : __DIR__"room1-32.c",
]));

  setup();
}
