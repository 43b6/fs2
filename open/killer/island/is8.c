inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "ɳ̲");
  set ("long", @LONG
��صİ�ɳ, ����һ�ÿ�����һ�����֮��, ��û����������. ������ÿ�
������ʯ�ĸо�ʮ�ֹ���, ���Ǿ�����ϸ��Ѱ�Ҳ�û���ҵ�ʲô��ֵĵط�. ��
�س��˶����Ǻ�֮��, �������������ȥ���ǰװ�����ɳ̲, ���������ܼ���һ
�����ʵ��ұ�.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"is7.c",
  "north" : __DIR__"is13.c",
  "south" : __DIR__"is5",
]));
  set("outdoors", "/u/u");

  setup();
}
void init()
{
add_action("do_closebox", "close");
add_action("do_search", "search");
add_action("do_look", "look");
add_action("do_get", "get");
add_action("do_put", "put");
}
int do_search()
{
object me=this_player();
if (me->query_temp("can_search")==1)
{
tell_object(me,HIC"���Ȼ������ʯ�����Կ��Կ������˳������ֵ�ɳ������һ���ƽ�Ĵ���ʯ(stone).\n"NOR);
tell_object(me,HIY"ԭ������ʱ���������˳���ʱ�� .\n"NOR);
new(__DIR__"obj/stone.c")->move(environment(me));
me->delete_temp("can_search");
me->set_temp("can_back",1);
return 1;
}
else
{
return 0;
}
}
int do_look(string arg)
{
object me,ob;
me=this_player();
   if( !arg )
       return 0;
   if(arg!="box")
       return 0;
   if(me->query_temp("openbox")!=1)
       return 0;
else
{
tell_object(me,"������:\n");
tell_object(me,HIW"      һ������ʯ"NOR"(Diamond)\n"NOR);
tell_object(me,HIB"      ��������"NOR"(Ninja book)\n"NOR);
return 1;
}
}
int do_get(string arg)
{
object me,ob;
me=this_player();
   if(me->query_temp("openbox")!=1)
       return 0;
   if( !arg )
       return 0;
   if(me->query_temp("can_close")==1)
       return 0;
   if(me->query_temp("care")==1)
{
tell_object(me,"�����������ȡ����,���Ǳ���һ��������־ͱ��������ʧ��!!\n");
me->set_temp("care",2);
ob=present("box",this_object());
destruct(ob);
me->delete_temp("openbox");
return 1;
}
   if(arg=="all from box")
{tell_object(me,"������ĺ����㲻Ҫ̰С����!!\n");me->set_temp("care",1);return 1;}
   if(arg!="daemond from box")
{tell_object(me,"������ĺ����㲻Ҫ̰С����!!\n");me->set_temp("care",1);return 1;}
   if(arg!="book from box")
{tell_object(me,"������ĺ����㲻Ҫ̰С����!!\n");me->set_temp("care",1);return 1;}
else
{
return 0;
}
}
int do_put(string arg)
{
object me,ob;
me=this_player();
   if( !arg )
       return 0;
   if(me->query_temp("openbox")!=1)
       return 0;
   if(arg!="card in box")
       return 0;
   if(me->query_temp("care")==2)
       return 0;
   if(me->query_temp("can_close")==1)
       return 0;
else
{
tell_object(me,"�㽫���ƷŽ���������, Ӧ��˳�ֽ����Ӹ�\��(close)��ȽϺ�!!\n");
me->set_temp("can_close",1);
ob=present("card",me);
destruct(ob);
return 1;
}
}
int do_closebox(string arg)
{
object me,ob;
me=this_player();
   if( !arg )
       return 0;
   if(me->query_temp("openbox")!=1)
       return 0;
   if(arg!="box")
       return 0;
   if(me->query_temp("can_close")!=1)
       return 0;
else
{
tell_object(me,HIW"�㽫���Ӹ�\��!!\n");
tell_object(me,HIM"ͻȻ��ǿ�ҵ��Ϲ�Ӻ������!!\n");
tell_object(me,HIW"ǿ�����ֻ�������Ѿ���ʧ, ֻ����һ���������ذ���ڵ���!!\n");
new(__DIR__"obj/old_dag.c")->move(environment(me));
me->delete_temp("can_close");
ob=present("box",environment(me));
destruct(ob);
me->delete_temp("openbox");
if (me->query_temp("care")!=1) {me->set_temp("complete",1);return 1;}
return 1;
}
}

