// Room: /open/main/room/maiu-5.c
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG
���߽�һ��С����,������Ȼ��һ�����˵ľ������Ľྻ,Ȼ��
����һ��ļ�ª,һ��Сľ��,����С����,��������ذڷ�.
LONG);
  set("objects",([
  "open/ping/npc/maiu-king" : 1,
  ]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"maiu-4",
]));
  setup();
}
