// Room: /u/s/sueplan/newplan/area/f3.c
inherit ROOM;

void create ()
{
  set ("short", "С·");
  set ("long", @LONG
�����������ղ�����������Ĵ���Ţ���У�ũ���ǰѾ���ĵ��ݣ�
����������ʯ��ƽ����ʵ���̳�һ��·����·�Բ�֪����С��أ������
���٣����г�ֲ�µ����磬��������ˮӨ�������͵ķ۴䣬����Զ��ũ
��Ĵ������������Ǵ���÷�⡣
LONG);

  set("outdoors", "l");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"f4.c",
  "north" : __DIR__"f2",
]));

  setup();
}
