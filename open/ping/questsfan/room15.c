// Room: /u/d/dhk/questsfan/room15
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[1;33m��[0m����");
  set ("long", @LONG
��һ��λ�ڹ�Ե�Ľᾧ�����ֽ�ɫ�Ĺ�â�����Թ���
˼����һ��Ľᾧ�У���ʯ �壬���۵Ľ�â���������
�������۾�������������һ�ɹ�����ʹ�����һ�ɲ���һ
���İ�������һ·�ۿ�����;һ����ʽ��ɫ�ľ�ʯ����
��е��������ɾ��еĸо����ۻ����ң������ʱ������
�ࡣ

LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "westdown" : __DIR__"room16",
  "southup" : __DIR__"room14",
]));

  setup();
}
