// Room: /open/capital/room/r40.c

inherit ROOM;

void create ()
{
  set ("short", "������ͬ");
  set ("long", @LONG
�Ӳݴ�����ʯ��·�����涼��Щ����ķ����ӣ�����뿪��������
ȱ�����Ļ���������ͬ�Ǹ������ѡ�񣬲�������Ҫ�������Ʀ��åΪ
���ˡ�
    �����н������Ĵ���Ѳ���ţ������㻹�ǲ�Ҫ�ڳ������µĺá�

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r39",
  "east" : __DIR__"r41",
]));

  set("gopath", "west");

  setup();
}
