// Room: /u/d/dhk/questsfan/room10
inherit ROOM;

#include <room.h>
#include <ansi.h>
void create ()
{
  set ("short", "�������");
  set ("long", @LONG
�㶨��һ��������һ�����ո���ľդ�⿴�˵������
��һ��Сɽ�룬��֪һͨ��ľդ��ӳ�������ľ���һ��
ɽ�ȶ�������״���¡��ɴ˵���������£�����֮�澰��
������˸�Ÿ�ɫ�Ĺ⻪����ɫ��ˮ�������ʵ����ƽδ��
��
LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"room11",
  "out" : __DIR__"qroom/room5",
]));

set("need_key/out",1);
create_door("out",HIY"��ľդդ��"NOR,"enter",DOOR_LOCKED);
  setup();
}
