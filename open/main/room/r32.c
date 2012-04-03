// Room: /open/main/room/r32.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
�����ڻҳ�������ʯ��·�ϣ��������ܿյ�����������أ�
����˵Ĺ¶�����ţ�Ҳ����������뽭���ı�����..��·�ڴ�
���ϱ�����Խ������ԽԶ��������Խ���置.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"r34",
  "north" : __DIR__"r30",
  "west" : __DIR__"m23",
  "east" : __DIR__"m24",
]));

  setup();
}
