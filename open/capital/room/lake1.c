// Room: /open/capital/room/lake1
inherit ROOM;

void create ()
{
  set ("short", "����С��");
  set ("long", @LONG
�Ӳݴ�����С·�������ʯ����ﶼ�������Ӳݡ�ǰ����һ����ͤ
����ϣ���õ�ͤ�����Ӱ��������ܽ�������ƽ���޲��ĺ��治���к�
����յĸо���

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r24",
  "east" : __DIR__"lake2",
]));
  set("outdoors", "/open/capital");

  setup();
}
