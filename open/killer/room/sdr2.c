inherit ROOM;

void create ()
{
set("short","ɱ�ֵ���ѵ���� A ��");
  set ("long", @LONG
������ɱ����̳�ĵ����Թ���Ҳ���ɻ�������Զ����������á�
Ѱ���˲��޷����׵��뿪�˴�������Ӧ��С��һ�㣬
��Ϊ���ܴ�����ɱ��������˵�Ŵ˴���������Σ����
��������Ҳ�Ƕ���ɱ������ѵ���ĺõط���

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
"west" : __DIR__"sdr6.c",
"south" : __DIR__"sdr3.c",
"north" : __DIR__"sdr1.c",
]));
set("objects",([
"/open/killer/npc/sdkilla.c":3,
]));
  setup();
}

void init()
{
 add_action("do_search",({"search"}));
}

int do_search (string arg)
{
 object me,ob;
 
 me=this_player();
 if ( me->query_temp("mission3") != 3)
   return 0;
 if (!arg)
 {
   message_vision("$N��ϸ������һ�£�������һ����ť������֮�󣬳���һ�����µ�ͨ����\n", me);
   set("exits/down", __DIR__"sdr17.c");
   me->set_temp("mission3",4);
   return 1;
 }
 return 0;
}

int valid_leave(object me, string dir)
{
  if (dir != "down") 
  {
    this_object()->delete("exits/tree");
    return 1;
  }
  if (me->query_temp("mission3") != 4)
    return 0;
  this_object()->delete("exits/tree");  //ֻ�ɽ�ȥһ��
  return 1;
}