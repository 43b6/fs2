// Room: /u/d/dhk/questsfan/room12
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[1;31m��[0m����");
  set ("long", @LONG
��һ��λ�ڹȿڵĽᾧ�����ֺ�ɫ�Ĺ�â�����Թ���
˼����һ��Ľᾧ�У��쾧ʯ �壬����ɫͨ���͸����һ
�����������Ѫһ�㡣��һ·�ۿ�����;һ����ʽ��ɫ
�ľ�ʯ������е��������ɾ��еĸо����ۻ����ң�����
��ʱ������ࡣ


LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room11",
  "north" : __DIR__"room13",
]));

  setup();
}
