// Room: /open/main/room/r39.c

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
  "west" : __DIR__"L15",
  "south" : __DIR__"r43",
  "north" : __DIR__"r34",
  "east" : __DIR__"f19",
]));

  set("outdoors", "/open/main");

  setup();
}
