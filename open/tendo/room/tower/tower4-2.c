
inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short", "��������¥--");
  set ("long", @LONG
����ǰ��һ�������ӣ��������������ƽ�һ¥��ʱ���ˡ�����ƣ�۵Ĺ�ϵ�����
���ܵľ���Ҳ����ע�⣬��ֻ�������ܵİ���ɫ�ȸոյĶ���Ҫ�����Ҳ��Ҫ����
��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"room4",
  "north" : __DIR__"tower4-1",
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir)
{
        if( dir=="up" )
        message("system",
 HIW"\n\t����֮�д���һ����Ϣ : "HIY""+this_player()->name()+""HIW"�´�"HIR"������"HIW"������� !!\n"NOR,users());
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



