
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "��������¥--");
  set ("long", @LONG
����ĳ���ͷ��ŵ��Ǽ����ƣ��յ����ģ�û�д�����ֻ�и�����¥�ĳ��ݣ�
�Լ�һ�ص�Ѫӡ����ש�����ǹ����˵�����ɫ����ֻ�����Լ����ϵ��ڴ������·�
����δ����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"room3",
  "west" : __DIR__"tower3-2",
]));

        set("no_transmit",1);

  setup();
}
int valid_leave(object me, string dir)
{
        if( dir=="up" )
        message("system",
 HIW"\n\t����֮�д���һ����Ϣ : "HIY""+this_player()->name()+""HIW"�´�"HIR"������"HIW"���Ĳ��� !!\n"NOR,users());
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




