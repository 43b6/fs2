
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "��������¥--");
  set ("long", @LONG
�����������������ĵ��������㣬����һƬ��ڣ�������ָ���棬��
����յ�����ɷֱ淿�ھ����о���¥�ȸո��ؾ���������������ɢɢ
�İ����߰˸����ã���һ�Ѷѵİ׹ǣ����������˸��է��֮�»�����
һ�㡣
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"room6",
  "west" : __DIR__"tower6-1",
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir)
{
        if( dir=="up" )
        message("system",
 HIW"\n\t����֮�д���һ����Ϣ : "HIY""+this_player()->name()+""HIW"�´�"HIR"������"HIW"���߲��� !!\n"NOR,users());
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




