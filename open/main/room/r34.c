// Room: /open/main/room/r34.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
�����ڻҳ�������ʯ��·�ϣ��������ܿյ�����������أ�
����˵Ĺ¶�����ţ�Ҳ����������뽭���ı�����..��·�ڴ�
���ϱ�����Խ������ԽԶ��������Խ���置.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"s25",
  "south" : __DIR__"r39",
  "north" : __DIR__"r32",
  "east" : __DIR__"m32",
]));

  set("outdoors", "/open/main");

  setup();
}
