// Room: /u/d/dhk/questsfan/room6
inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
  set ("short", "[0;32m��ɽ�ݴ�[0m");
  set ("long", @LONG
������Ǵ���ƽ�ϳǵĺ�ɽ������������Ӳ��ָ���
�������㻹�ߣ����������ɳ��������˵صķ����쳣��
���������Щ�ݣ�˵�����б��紵����Σ���أ�

LONG);

  set("out_door", 1);
  set("no_transmit", 1);
  set("item_desc", ([ /* sizeof() == 1 */
  "out" : "q
",
]));
  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"room5",
  "north" : __DIR__"qroom/room0",
]));

  setup();
}
