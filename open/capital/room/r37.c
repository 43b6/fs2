// Room: /open/capital/room/r37.c

inherit ROOM;

void create ()
{
  set ("short", "������ͬ");
  set ("long", @LONG
ԶԶ�ÿ���б�µľ�ͷ������Ƚ����壬û�е�����⿪ҵ������
����ϡ�٣�Ҳ��Ϊ���٣�ʯ��·�Զ��������Ӳݶ�������ᡣ
    �����н������Ĵ���Ѳ���ţ������㻹�ǲ�Ҫ�ڳ������µĺá�

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r36",
  "east" : __DIR__"r38",
]));

  set("gopath", "west");

  setup();
}
