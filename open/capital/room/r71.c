// Room: /open/capital/room/r71.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
    ���ھ��ǵ�������, ���ϲ�ʱ�п�����, ��ʾ�������ֽ�ͨ��
��æ���������������ǵ��Ϸ�, �ֵ��䲻�Ʊ��ߵĸ���סլ�㻪��, ��
Ҳ����һ�ɷ�ζ, ס�Ķ���һЩ���µȵľ���, �䲻���е�ȴ�ڷ�, ��
������������·�������ǻ�������Ŀ�����·�Ķ��������ͽ�һ�����



LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"test_room",
  "north" : __DIR__"r70",
  "south" : __DIR__"r72",
  "east" : __DIR__"head_room",
]));
  set("outdoors", "/open/capital");

  setup();
}
