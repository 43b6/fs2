// Room: /open/capital/room/r32.c

inherit ROOM;

void create ()
{
  set ("short", "������ͬ");
  set ("long", @LONG
����ǡ����С������ġ��������м���ȣ������С���ˣ�ֻ�м�
С��ݣ�·�߼��������ˮ���ģ�����С��̯�ӣ�һЩ��������õ�֬
�۵�С�������������˼��ˣ�ˮй��ͨ��
    �����н������Ĵ���Ѳ���ţ������㻹�ǲ�Ҫ�ڳ������µĺá�

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r31",
  "east" : __DIR__"r33",
]));

  set("gopath", "west");
  set("gopath2", "west");

  setup();
}
