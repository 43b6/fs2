// Room: /open/capital/room/h13.c

inherit ROOM;

void create ()
{
  set ("short", "�ܲ���ͬ");
  set ("long", @LONG
δ����֮ǰ���ﱾ����һƬ���ܲ�԰������Ϊ���ܹ�˳�������մ�
�����أ�����ֻ�ý��ܾ����Ҫ��ȡ��Ϊ�ܲ���ͬ��
    ��Ȼ�����Ѿ�û���ܲ�԰��, ���Ǿ�������լ��Ժ���ﻹ���Ը���
������, �ּ����ְ����۵Ĵ��ܲ�, �������������ˡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r70",
  "east" : __DIR__"h14",
]));
  set("outdoors", "/open/capital");

  setup();
}
