// Room: /open/capital/room/h02.c

inherit ROOM;

void create ()
{
  set ("short", "������ͬ");
  set ("long", @LONG
������Ķ�����Ȼ��һЩ�ķ��ı�, ������������Ʒ���ƺ��ո���
�����Ļ�Ҫ��, ��Ȼ�ǡ��������Ҳ��Կ�����������̼�����Ҳ���ĸ�
������, ߺ�����������, �㲻��Ҳ��������ȥ����������

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/capital/room/h01",
  "east" : "/open/capital/room/h03",
]));

  set("outdoors", "/open/capital");


  setup();
}
