// /u/j/judd/room/r13.c
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
���������õĽ��䣬Ҳ��ͨ������ͼ��ݵıؾ���·��������һ
����ɫ�ĵ�·һֱͨ���������������ͨ��������Ϣ��������ͼ���
�����Ƿ�Щʲô���أ�������⣬ֻ���Լ�ȥ������֪����ֻҪ����
������ɫ��·�Ϳ����ˡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r16.c",
  "northwest" : __DIR__"r10.c",
]));
  set("light_up", 1);

  setup();
}
