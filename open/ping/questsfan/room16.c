// Room: /u/d/dhk/questsfan/room16
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[1;32m��[0m����");
  set ("long", @LONG
��һ��λ�ڹ�Ե�Ľᾧ��������ɫ�Ĺ�â��������һ
��Ľᾧ��һ�ر�����ƽУ���ʯ �壬����ɢ���ű���
�߼�������̸���͸�Ĺ�����һ·�ۿ�����;һ����
ʽ��ɫ�ľ�ʯ������е��������ɾ��еĸо����ۻ�����
�������ʱ������ࡣ

LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "westdown" : __DIR__"room17",
  "eastup" : __DIR__"room15",
]));

  setup();
}
