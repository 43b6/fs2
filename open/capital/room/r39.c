// Room: /open/capital/room/r39.c

inherit ROOM;

void create ()
{
  set ("short", "������ͬ");
  set ("long", @LONG
�����ж����ܵķ��ӣ��м���������ӵ�����ǰ���ε�����������
ϡ�ٵĵط�������Щ�˻��ǿ���Ϊ�Ҳ���ߵ��Ƕ���������ĳ����
���ÿ�Ҳ˵������
    �����н������Ĵ���Ѳ���ţ������㻹�ǲ�Ҫ�ڳ������µĺá�

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 3 */
    "north" : __DIR__"wulaih",
  "west" : __DIR__"r38",
  "east" : __DIR__"r41",
]));
  set("gopath", "west");

  setup();
}
