// Room: /open/poison/room/room17
inherit ROOM;

void create ()
{
  set ("short", "ħ����");
  set ("long", @LONG
������ڤ��ħ�̵Ĳ�������ͬ�����������滨
��ľ��ɢ�����������˵����㣬�����ǰ��һ�ƽ�¯���ƽ�
¯��Ʈ��������̴�㣬����ħ�����������ģ�������á�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"room1",
  "down" : __DIR__"coolroom",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/right_hufa" : 1,
]));
  set("light_up", 1);

  setup();
}
int valid_leave(object me, string dir)
{
if (dir == "down" && !me ->query("mark/love",1) )
     return notify_fail("δ�������ý��룡 \n");
     return :: valid_leave(me, dir);
}

