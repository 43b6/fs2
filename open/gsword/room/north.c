// Room: /open/gsword/room/north
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�����Ѿ������ɽ��ɵ��ڲ��ˣ�һ�����ǽ��ɵ���ֻ�ܾʹ�ֹ����
���������ǽ�ʿ�������ĳ��������������ż�ʦ�ֵ��ǵ�ס������
�����ǵ������ѧ���ŵĲؾ���
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/gsword/room/ghouse",
  "west" : "/open/gsword/room/eghouse",
  "north" : "/open/gsword/room/nghouse",
  "east" : "/open/gsword/room/wghouse.c",
]));

  set("light_up", 1);

  setup();
}
