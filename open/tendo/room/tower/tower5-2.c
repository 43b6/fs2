
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "��������¥--");
  set ("long", @LONG
�㷢������ľ��º�Ȼһ�䣬ǿ�ҵİ�ɫӳ����������ֻ�ǵ��Ϲ�𴦴���
����������������ȥ������һ��֮�£����Ǻ���������ʱ��ʱ�֣��������ֺ���
���������۴��ˣ�Ҳ����Ҫ��ս�ĺ������ȶ��ӡ��㿴��ͨ����¥�����ӽ�����
�ߣ�������һ�ɳ嶯��Ͽ���ȥ��
��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"tower5-1",
  "up" : __DIR__"tower6-1",
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir)
{
        if( dir=="up" )
        message("system",
 HIW"\n\t����֮�д���һ����Ϣ : "HIY""+this_player()->name()+""HIW"�´�"HIR"������"HIW"�������� !!\n"NOR,users());
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




