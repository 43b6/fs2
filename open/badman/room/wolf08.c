inherit ROOM;
void create()
{
  set ("short","��·");
  set ("long",@LONG
������һ����· ,��·����������������ͬ�ķ������� .������
һ���ƾɵĲ��� ,���������ǵ�·������ .
LONG);

  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"wolf10.c",
  "east" : __DIR__"wolf09.c",
  "south" : __DIR__"wolf07.c",
]));

  set("objects",([ /* sizeof() == 2 */
  "/open/badman/npc/wolf02.c" : 2,
]));

  setup();
}
