// Room: /u/s/sueplan/newplan/area/f5.c
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

  set("outdoors", "/u/s");
  set("exits", ([ /* sizeof() == 2 */
  "northup" : __DIR__"f6.c",
  "west" : __DIR__"f4",
]));

  setup();
}
