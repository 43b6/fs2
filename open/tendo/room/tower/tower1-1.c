
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "������һ¥--");
  set ("long", @LONG
�������������һ¥�������㷢������յ����ģ�ʲô��û�У�Ψһ��о��õ�
������һ������������㿴���Ĵ���������������һ������(tablet)��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "out" : __DIR__"road4",
  "north" : __DIR__"tower1-2",
]));
set("objects", ([ /* sizeof() == 2 */
"/open/tendo/room/tower/npc/genies.c" : 2,
]));

        set("no_transmit",1);
  set("light_up", 1);
  set("item_desc", ([ /* sizeof() == 2 */
  "tablet" : @LONG
         ������д���ĸ�����  --  ���������� -- 
              ����Լ�������ʱ��ɱ !
              �¹ڲ���ִ�񲻹���ɱ !
              �����ư����Ĳ����ɱ !
              �ػ���ı͵Ϯ������ɱ !
              ����������ı������ɱ !
              ���ڻ��ѳ���֮Σ��ɱ !
              ������������ö���ɱ !

                             
LONG,
 ]));
  setup();
}
int valid_leave(object me, string dir)
{
        if( dir=="out" )
        message("system",
 HIW"\n\t����֮�д���һ����Ϣ : �ǳ��ź���"HIY""+this_player()->name()+""HIW"���Ӷ��˳���"HIR"������"HIW" !!\n"NOR,users());
        return ::valid_leave(me, dir);
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
      call_out( "fire_wound", 6,previous_object());
}

void fire_wound(object ob)
{
        if( !ob || !present(ob) ) return;
       tell_object(ob,HIR"����Ӱ���������������һ�󷭹�����Ȼһ��Ѫ��������������˳�����\n"NOR);
       ob->add("kee",-100);
       call_out("fire_wound", 6,ob);
}


void reset()
{
        ::reset();
        delete("go_north");
}




