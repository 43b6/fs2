// Room: /u/f/fire/room/room1-5.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[1;34m�ż�����[2;37;0m");
  set ("long", @LONG
���߽�һ����������ķ����У������ǳ�ɳ�����Ĵ����̣���
�����������һ�ڸ����ĳߵĴ��¯�����Ļ����¯�в��ϵ�ð��
���ڻ�¯����������Ѿ��պ�����顣�ڻ�¯���Ա�����һ�׺ô��
��ˮ�����ڵ��������ڸ���һ�������������������ѡ��һ��������
��ʹ�á�
��֪����������Щ��������ѡ�õĻ�����(view)���鿴!!!
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"room1-4",
]));

  set("objects", ([ /* sizeof() == 1 */
C_NPC"/chang-sen" : 1,
]));
  setup();
}
