// Room: /u/d/dhk/questsfan/room13
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[0;33m��[0m����");
  set ("long", @LONG
��һ��λ�ڹȿڵĽᾧ��������ɫ�Ĺ�â�����Թ���
˼����һ��Ľᾧ�У��پ�ʯ �壬�˵ص����ա���âʹ��
���紺��ٻ�ʢ���ĸо������������Ŵ��硣��һ·�ۿ�
����;һ����ʽ��ɫ�ľ�ʯ������е��������ɾ��е�
�о����ۻ����ң������ʱ������ࡣ

LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room12",
  "north" : __DIR__"room14",
]));

  setup();
}
