// Room: /open/badman/room/tigerhole
inherit ROOM;

void create ()
{
  set ("short", "��Ѩ");
  set ("long", @LONG
�����������˵ص��ľ�ͷ�����ܰ߰ߵ�Ѫ���ͳ�ʣ�Ķ���ʬ��
��ԭ���⾹��ɭ��֮�����ϻ��ĳ�Ѩ�������˵ػ��ǲ��˾�������
���뿪�ĺá�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/badman/room/t7",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/s_tiger" : 1,
]));

  setup();
}
