// Room: /u/d/dhk/questsfan/rm8
inherit ROOM;

void create ()
{
  set ("short", "����ջ��");
  set ("long", @LONG
�ò�����������ɽ���������һ����������֦�ֵ��ķ�·
�ڡ��˵س�������ջ����ջ��������һ��СˮȪ��һ�곤�ĺ�
��һ������ͤ�ľ��ţ���������������ƽ���Ĵ�ʯ��һ�е�һ
�оͺ���һ������Ȼ( ��ɽ )�����Ϣջһ�㣬����Ϊ��ջ����
Ҳ��

LONG);

  set("exits", ([ /* sizeof() == 6 */
  "northup" : __DIR__"rm9",
  "southwest" : __DIR__"rm21",
  "westdown" : __DIR__"rm7",
  "northwest" : __DIR__"rm22",
  "northeast" : __DIR__"rm23",
  "southeast" : __DIR__"rm24",
]));
  set("outdoors", "/u/d");

  setup();
}
