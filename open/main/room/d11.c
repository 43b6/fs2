// Room: /open/main/room/d11.c

inherit ROOM;

void create()
{
        set("short", "ɳĮ");
        set("long", "�����һ���޼ʵ�������ɳĮ������ֻ�ֳ���������ĺ�����¥
Ҳ��֪�����ǳ���, ��ʱ������ɳĮ���еķ籩, �������������˰�?!
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s11",
  "west" : __DIR__"d10",
  "north" : __DIR__"d4",
  "east" : __DIR__"d12",
]) );
  set("outdoors", "/open/main" );


  setup();
}


