// Room: /open/poison/room/room20
#include <ansi.h>
#include <room.h>
inherit ROOM;
void create()
{
  set ("short", "�η�");
  set ("long", @LONG
������ڤ��ħ����������һ�������ĵ��Σ�����������
����һ����������ĵ��ݣ���е���������ô�����ң�һ��
Ҳ��Ը�ٶ�ͣ�����޲�������뿪��
LONG);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"path13",
]));
  set("objects", ([ /* sizeof() == 1 */
	"/open/poison/npc/yun" : 1,
]));
  set("need_key/north",1);
  create_door("north",HIR"��ɫ����"NOR,"south",DOOR_LOCKED);
  setup();
}
