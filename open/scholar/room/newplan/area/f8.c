// Room: /u/s/sueplan/newplan/area/f8.c
inherit ROOM;

void create ()
{
  set ("short", "[1;37m��ɽ��[0m");
  set ("long", @LONG
�������ˣ�����ɽ������������һ�����Ŀ���Ϯ���ļ䣬���������泩
��̧ͷ��ȥ��ǰ��ɽͷ�������ƣ����������񷣬�����νɽ����ʣ�����
��ѩ�������᲻ɢ������Ϊ����ɽ������С·������ȥ���ӻ�����������
�㵭��������ɽ·���Ͷ���(climb up)��
LONG);

  set("outdoors", "/u/s");
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"f7",
]));

  setup();
}
void init()
{
add_action("do_climb","climb");
}
int do_climb(string str)
{
object me;
me=this_player();
if(str=="up")
  {
  write("��һ��һ��������ȥ!!\n");
  me->move(__DIR__"f9.c");
  return 1;
  }
}
