
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "������һ¥");
  set ("long", @LONG
һ�����������ͱ�ͻ�������ĵĵ������������㶨�˶����ע�⵽��䷿��
�������Ǹɵ���Ѫ�գ����ܵ�ǽ��Ҳ�������˴򶷹��ĺۼ���
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tower1-2",
  "up" : __DIR__"room2",
]));

        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir)
{
        if( dir=="up" )
        message("system",
 HIW"\n\t����֮�д���һ����Ϣ : "HIY""+this_player()->name()+""HIW"�´�"HIR"������"HIW"�ڶ����� !!\n"NOR,users());
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


