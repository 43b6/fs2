// Room: /u/d/dhk/questsfan/room23
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "��[0;32m��[0m��");
  set ("long", @LONG
��һ���Ľᾧ��û����ɫ�ˣ��Գ���͸���Ҹ���ʯ��
��ǻ���˸��Щ���΢�⡣������;�Ľᾧ���ʲ�������
����ǽǵ���״����֮ǰɫ���ͷס�������������Զ��
���졣�䷴ӳ����䡢����֮���ʡ���ӲҪ������������
ֻ���ã������һ���������ݡ�

LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room22",
  "east" : __DIR__"room24",
]));

  setup();
}
