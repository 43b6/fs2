// Room: /open/capital/room/h08.c

inherit ROOM;

void create ()
{
  set ("short", "��ȵ��ͬ");
  set ("long", @LONG
һ����ҽ��ȵ���ڴ˵��������ʺ���Ϊ�����������У��㽫�˺�ͬ
ȡ��Ϊ��ȵ����ʱ��ȵ�ڴ����������ĵ��ӣ��󾭴����ഫ��������
���ڶ࣬���ڴ˳����������ţ�Ϊҽ��֮����, ����ҽ�߶����ڴ˵�
���ܻ���ҽ����ѵ��, �����Ǽ䷿����������š�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"h06",
  "east" : __DIR__"CUR",
]));
  set("outdoors", "/open/capital");

  setup();
}
