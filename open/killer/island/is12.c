// Room: /u/u/unfinished/room/is12.c
inherit ROOM;

void create ()
{
  set ("short", "�ذ�");
  set ("long", @LONG
����ȫ�Ǵ�С��һ��ʯ��, ����Ǵ�����ɽ���ϵ����. ����ɽ��ʮ�ֶ���,
����������ȥ. ���ʱɽ�ڲ�ʱ����ʯ�ӵ���, ����ʯ���൱����.
LONG);

  set("outdoors", "/u/u");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"is13.c",
  "south" : __DIR__"is7",
]));

  setup();
}
