// Room: /u/d/dhk/questsfan/rm2
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "ɽ��[1;34m��[0m·");
  set ("long", @LONG
һ̤����ɽ�����أ��Ϳ��Ըо����ǳ����ʡ���Ȼ�Ե�
�ĸо���һ·�ϱ��������������˵��������桢��������
֮�У����˲�����̾��ɽ�治����Ϊ����֪��ѽ��

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/man1.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"rm1",
  "eastup" : __DIR__"rm3",
]));
  set("outdoors", "/u/d");

  setup();
}
