// Room: /open/capital/room/r33.c

inherit ROOM;

void create ()
{
  set ("short", "������ͬ");
  set ("long", @LONG
���߱����Ǿ����������, �ſڵ�����ʯʨ�ӷ�������, �Ե�ʮ��
����׳���䡣·���и���ʾ�ƣ�һȺ��Χ���ǿ��ţ�����ǿ�Щ�����
���ļ������ʱ��Ҳ��Щ����ն��ʾ�ڵ���Ϣ��һЩ�е÷��ŵ�����
��ϲ�����ڴ˵�ָ����������̸���ۡ�
    �����н������Ĵ���Ѳ���ţ������㻹�ǲ�Ҫ�ڳ������µĺá�

LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/capital/obj/board" : 1,
  "/open/capital/npc/walker2" : 1,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"r31",
  "north" : "/open/hall/halldoor",
  "east" : __DIR__"r34",
]));
  set("gopath", "west");
  set("gopath2", "west");

  setup();
}
