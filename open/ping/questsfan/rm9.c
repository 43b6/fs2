// Room: /u/d/dhk/questsfan/rm9
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[0;32m��������[2;37;0m");
  set ("long", @LONG
���ֱ��ա��������ɡ��ɹ����أ��������ֵ���һƬ������
��û�������꾥�ɣ������ر𡣲�ʱ�м�ֻ��������β����񱼶�
������Ȼ������������������ر���Ǡ��ǵ�һ��ͻȻ�Ĵ�����Ȼ
����һ��İ�������һ��ͻ���������������൱�����𺳵ġ�

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "westup" : __DIR__"rm16",
  "southdown" : __DIR__"rm8",
  "northup" : __DIR__"rm17",
  "eastup" : __DIR__"rm10",
]));
  set("outdoors", "/u/d");

  setup();
}
