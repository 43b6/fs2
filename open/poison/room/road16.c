// Room: /open/poison/room/road16
inherit ROOM;

void create ()
{
  set ("short", "��ͥ");
  set ("long", @LONG
��������һ��ͥԺ�����������˸����滨��ݣ�Ժ�ڻ�
������ఫ�񣬶�СԲ����֦�ڣ���~~��Ӧ�þ��ǿɰ��ĺ�
«��ɣ��м�Ϊ�ɺ��������̳ɵ���·��ֱ�ﱱ�ߴ�ͥ
Ժ������������С���ţ��ֱ�ͨ������¥��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/envoy5" : 1,
]));
  set("outdoors", "/open/poison");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"room6",
  "west" : __DIR__"road18",
  "east" : __DIR__"road17",
  "northup" : __DIR__"room7",
]));

  setup();
}
