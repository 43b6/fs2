// Room: /open/capital/room/r36.c

inherit ROOM;

void create ()
{
  set ("short", "������ͬ");
  set ("long", @LONG
�����һ������·���������е�������ǵĶ�������С���꣬��Ϊ
���Ƶ�Ե�ʣ�����������һֱ�������¡�������һЩ��ͨ����լ������
�Ǽ�̵ĳ�ǽ��
    �����н������Ĵ���Ѳ���ţ������㻹�ǲ�Ҫ�ڳ������µĺá�

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r34",
  "east" : __DIR__"r38",
]));
  set("gopath", "west");

  setup();
}
