// Room: /open/gsword/room/eghouse1.c
inherit ROOM;

void create ()
{
  set ("short", "С�㳡");
  set ("long", @LONG
�����ɽ��ɽ�ʿ�����ŵĵط����㳡�м���ʮ�������������ɵ������ţ�
�����Ǵ���ǿ���Ĺ�������ֱ�����ߣ�ͨ���ɽ�����ʦ�ֵ��ǵ����ҡ�����
�и�¥�� ,��ͨ�������˼��ɽ��������޾� .

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"g3-4.c",
  "west" : __DIR__"g3-7.c",
  "east" : __DIR__"g3-5.c",
]));
set("objects",([
"/open/gblade/npc/yuan" : 1,
]));
  set("light_up", 1);

  setup();
}
