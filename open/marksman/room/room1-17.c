// Room: /u/f/fire/room/room1-17.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[1;37m������ջ[2;37;0m");
  set ("long", @LONG
����վ��������ջ֮�У���˵�����ǳ������Ŀ�ջ�������ƺ�
��������ʿ����Ϣ�ĵط�������ֻ������һЩ�򵥵ļҾ㣬������ջ
�����С������æ�Ĳ��ɿ�����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room1-16",
  "up" : __DIR__"room1-18.c",
]));
  set("objects", ([ /* sizeof() == 1 */
C_NPC"/cheng-chong" : 1,
]));

  setup();
}
