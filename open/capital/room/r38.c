// Room: /open/capital/room/r38.c

inherit ROOM;

void create ()
{
  set ("short", "������ͬ");
  set ("long", @LONG
ԶԶ�ÿ���б�µľ�ͷ������Ƚ����壬û�е�����⿪ҵ������
����ϡ�٣�Ҳ��Ϊ���٣�ʯ��·�Զ��������Ӳݶ�������ᡣ�������
�Կ����󲿷ݵľ��ǡ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/walker1" : 1,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r36",
  "east" : __DIR__"r39",
]));
  set("gopath", "west");

  setup();
}
