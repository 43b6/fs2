// Room: /u/d/dhk/questsfan/room24
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "��[0;37m��[0m��");
  set ("long", @LONG
��һ���Ľᾧ�͹�����ˣ�ȫ�ǳ�����ʽ�Ľᾧ��
���СС��Ȼ��ͬ��������ȡ֮�����������ʯ�� (��
�Ǹ߼�������) �ĺý��İɣ���Ȼ�˵صĽᾧ��Ȼû��
Ѥ������ɫ���������Ǿ��з�������Ȼ��������ʡ���
ӲҪ������������ֻ���ã��š���һ���������ݡ�

LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room23",
  "north" : __DIR__"room25",
]));

  setup();
}
