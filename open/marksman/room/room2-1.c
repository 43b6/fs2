// Room: /open/marksman/room/room2-1
inherit ROOM;

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
һ���޼ʵĴ��ԭ�����ԵĲݳ��Ķ����˻����ˣ�
    ���л�������С���������ȥ�ģ�����·��
    ��ҪС��һ�ㆪ��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/main/room/s33",
  "south" : __DIR__"room2-2",
]));
  set("outdoors", "/open/marksman");

  setup();
}
