// Room: /u/l/lotus/girl/guest.c

#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "��¥����");
  set ("long", @LONG
�ŵƽ��, һƬϲ������, ����ʢ���ŵ�ĵ��, ʹ������������
ɫ��. ��¥�����Ŀ��˻��治��, ��һ��ǧ��ĸ��̾޼�, Ҳ�з���
���εĲ���, ǽ�Ϲ��ŵĻ�, ���ǳ����������֮��.

��������Цӯӯ��ӭ�ӿ���.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : CENTER_ROOM"guest3.c",
  "west" : CENTER_ROOM"guest2.c",
  "east" : CENTER_ROOM"tree.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  CENTER_NPC"powyi.c" : 1,
]));
  set("light_up", 1);
  set("file_name", CENTER_ROOM"guest.c");

  setup();
}
