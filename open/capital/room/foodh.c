// Room: /open/capital/npc/foodh
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һ���ţ�������ǰ������һ�������鲼���ɵ��״����������룬��
��Сɽһ���ߡ������ʿ���������������ų��ٵ�ָʾ��������Щ��Ҫ
��������

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/capital/room/farm",
]));


  set("light_up", 1);
  set("objects",([
  "/open/capital/npc/managerwu":1,
  ]));

  setup();
}
