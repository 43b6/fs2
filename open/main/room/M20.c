// This is a room made by roommaker.

inherit ROOM;

void create ()
{
  set ("short", "ũ��");
  set ("long", @LONG
һ��򵥵�С���䣬�������һ����֪�����ס���Ǳ�׼��ׯ�ں���ǽ���Ϲ���
���ң����£����ƺ�û��ʲô���õĶ�����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/main/room/M19",
  "north" : "/open/main/room/M16",
]));

  setup();
}
