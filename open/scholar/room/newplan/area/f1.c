// Room: /u/s/sueplan/newplan/area/f1.c
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

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"f2.c",
]));
  set("outdoors", "/u/s");

  setup();
}
