// Room: /open/poison/room/room8
inherit ROOM;

void create ()
{
  set ("short", "ִ����");
  set ("long", @LONG
������ڤ��ħ���������н��ڵĵط��������м���һ��
��ϸ��̫ʦ�Σ�̫ʦ��������һλ˫�۾�����������ߣ�
�����Ǵ�ħ�̵�ִ�����ϣ�������ħ��֮�£����д�����
��Ľ�ͽһһ�������̣���һ���⡣
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/poison/room/room10",
  "north" : "/open/poison/room/room9",
  "west" : "/open/poison/room/road17",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/elder2" : 1,
]));

  set("light_up", 1);

  setup();
}
