// /u/j/judd/room/r19.c
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
��һ����ɫ�ĵ�·���������Ϸ�����ؾ���ͨ�����ŵ��Ĵ�ͼ��
��֮һ��ˮ��ͼ��ݣ�������ƣ��ǲ���֪��ˮ��ͼ����Ƿ�Щʲô
��ģ�ֻ������ȥ����������֪�������Ĵ�ͼ��ݵ����Ƿ�Щʲô��
������ͨ�����ڷ���
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r16.c",
  "southwest" : __DIR__"r23.c",
]));
  set("light_up", 1);

  setup();
}
