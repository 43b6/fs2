
inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short", "��������¥--");
  set ("long", @LONG
��������������ĵ����ڶ��㣬����������ȫ�����������״�����Ե���
���ع��죬����֮�л�������һ�ɰ��������˼���������Ϣ��˵������ÿ�
�ǻ�ͷ���������ڻ����ü���
LONG);

 
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"tower7-1",
  "up" : __DIR__"tower8",
]));
       set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir)
{
        if( dir=="up" )
        message("system",
 HIW"\n\t����֮�д���һ����Ϣ : "HIY""+this_player()->name()+""HIW"�´�"HIR"������"HIW"�ڰ˲��� !!\n"NOR,users());
        return ::valid_leave(me, dir);
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
      call_out( "fire_wound", 3,previous_object());
}

void fire_wound(object ob)
{
        if( !ob || !present(ob) ) return;
       tell_object(ob,HIR"����Ӱ���������������һ�󷭹�����Ȼһ��Ѫ��������������˳�����\n"NOR);
       ob->add("kee",-100);
       call_out("fire_wound", 3,ob);
}


void reset()
{
        ::reset();
        delete("go_north");
}



