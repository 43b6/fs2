// Room: /open/capital/room/h15.c

inherit ROOM;

void create ()
{
  set ("short", "�ܲ���ͬ");
  set ("long", @LONG
�����ʼ�������߶���, ��Ե�, Ҳ�����ֶ���, ֻ��ÿ���˶���
ɫ�Ҵҵ�, ��֪Ҫ����ȥ��? ������Ҳ��������, ���ǹ������, ����
һ�¾��ǵľ�ɫҪ�����ϱ��Ƕ���������������ջ, ͬ����, ��Ҳ�Ǹ�
ͨ��Ĳ�ҵ֮һ��

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"inn",
  "west" : __DIR__"h14",
  "east" : __DIR__"h16",
]));
  set("outdoors", "/open/capital");

  setup();
}
