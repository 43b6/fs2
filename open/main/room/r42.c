// Room: /open/main/room/r42.c

inherit ROOM;

void create ()
{
  set ("short", "ƽ�ϳǽ���");
  set ("long", @LONG
������ƽ�ϳǽ�����ƽ�ϳǾ�������������㿴������ƽ
�ϳǵ��ÿͣ��е��Ѳ��Ǻ���װ�����������: ����ѽ��置
Զ����������������ˣ��е���Ҫ���������е����������ǳ�
���ƶ���ҩ���置.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"L15",
  "west" : "/open/ping/room/edoor",
  "south" : __DIR__"L23",
  "east" : __DIR__"r43",
]));

  set("outdoors", "/open/main");

  setup();
}
