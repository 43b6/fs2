// Room: /d/snow/hockshop2.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ������");
  set ("long", @LONG
�����Ƿ�ǵ��̵Ĵ����ң���ʱ������Ĵ󳯷�������治��
�����������ó�������������������ֻ�ܿ���һ�������ŵ����ӡ�����
�ߴ���һ���������Իص����̵��档
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"hockshop",
]));

  setup();
}
