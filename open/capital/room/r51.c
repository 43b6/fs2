// Room: /open/capital/room/r51.c

inherit ROOM;

void create ()
{
  set ("short", "�ֵ�");
  set ("long", @LONG
����������ı��ߡ���ߵ�ǽ�ϵͰ������Կ�������Ļ�԰���ٻ�
���ޣ���԰���м����Ůģ�����˺ͼ��������໥Ϸˣ�ţ��㲻����̾
�������£������־����е���Ľ��

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/capital/room/r50",
  "north" : "/open/capital/room/r17",
]));

  set("gopath", "south");

  setup();
}
