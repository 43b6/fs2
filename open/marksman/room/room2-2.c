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
  "west" : __DIR__"room2-3",
  "north" : __DIR__"room2-1",
]));
  set("outdoors", "/open/marksman");

  setup();
}
