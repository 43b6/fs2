inherit ROOM;
void create()
{
   set ("short","С��");
  set ("long",@LONG
�����������ׯ����һ����· ,�������� ,��ֻ�Ѳ����� ,����
��������һ���� ,�������ǵ�·������ .
LONG);

  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"wolf11.c",
  "east" : __DIR__"wolf08.c",
  "north" : __DIR__"wolf12.c",
]));

  setup();
}
