// Room: /u/d/dhk/questsfan/room1
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[1;36m������[0;36m�ܵ�[0m");
  set ("long", @LONG
�����ܵ��ֳ�ʪ���ְ������������ܵ�������ƽ����
������Ϊ��ֹ�˳Ǳ��о�����ʱ���轫�������õģ�����
�ܵ�Ӧ��ͨ����ɽ�ɣ������㶨����һ�����˵�ȷ�񱻷�
�������ˡ�
LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room2",
  "out" : "open/ping/room/np25",
]));

  setup();
}
