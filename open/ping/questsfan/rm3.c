// Room: /u/d/dhk/questsfan/rm3
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "ɽ��"CYN"��"NOR"·");
  set ("long", @LONG
��������᫵�ɽ·��������ɽ�����У���;���ɱ�����
��������Խ�����ܷ羰Խ�����棬һЩ������������û����
��������û�����Ķ���ֲ��һ���Զ��Ķ����������ĳ�����
�����ǰ��

LONG);

  set("outdoors", "/u/d");
  set("exits", ([ /* sizeof() == 2 */
  "westdown" : __DIR__"rm2",
  "eastup" : __DIR__"rm4",
]));

  setup();
}
