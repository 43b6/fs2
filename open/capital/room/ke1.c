// Room: /open/capital/room/ke1.c
inherit ROOM;

void create ()
{
  set ("short", "��ͨ�츮");
  set ("long", @LONG
������Ǵ��������ĸ�ͨ����ס�ĺ�լ, ǰ��վ���������ŵ�, �ɴ�
�ɿ�����ͨ����������Ը�һЩ��ʿ�����ࡣ
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"r18.c",
]));
  set("outdoors", "/open/capital");

  setup();
}
