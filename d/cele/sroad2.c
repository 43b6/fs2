inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ��ʯ�ٵ�");
  set ("long", @LONG
    ����һ������ʵ����ʯ����������������ɽ����������
��������Զ������ͨ��ˮ�̸��ʯ�ס�

LONG);
  set("outdoors", "cele");
  set("exits", ([ /* sizeof() == 1 */
  "south" : "/d/cele/sroad1",
  "west"  : "/d/cele/sroad3",
]));

  setup();
}
