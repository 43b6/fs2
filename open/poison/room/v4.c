// Room: /open/poison/room/v6.v
inherit ROOM;

void create ()
{
  set ("short", "ũ��");
  set ("long", @LONG
һ������ͨͨ��ש�߸ǳɵ����ӣ����ǹ���������ס��ũ�ᣬ
�������ʮ�ּ򵥣�û����ô����������Ȥ�Ķ�����
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"v2-2.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 2 */
  "/open/poison/npc/child.c" : 1,
  "/open/poison/npc/vler2.c" : 1,
]));

  setup();
}
