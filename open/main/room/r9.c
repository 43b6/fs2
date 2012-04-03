// Room: /open/main/room/r9.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
�ߵ�����,���ѽ���Զ���˼�,���ڿ������������,ȴ��
����һ�ֲ�ã�ĸо�,��·�ڴ�ͨ�򱱷�������,����,ȴҲ��֪
�δ�����,ȥ������? ���ǻ�ȥ��ů�����ƴ�?
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"r8",
  "north" : __DIR__"r6",
  "south" : __DIR__"m2",
]));

  setup();
}
