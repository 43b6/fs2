
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "��������¥--");
  set ("long", @LONG
�����������������ĵ��������㣬����һƬ��ڣ�������ָ���棬��
����յ�����ɷֱ淿�ھ����о���¥�ȸո��ؾ���������������ɢɢ
�İ����߰˸����ã���һ�Ѷѵİ׹ǣ����������˸��է��֮�»�����
һ�㣬��Ȼ�㷢�ַ���Ľ�����һֻ������վ���Ƕ���������̾Ϣ��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"room6-2",
  "down" : __DIR__"tower5-2",
]));
 set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/butcher" : 1,
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="east"&&present("butcher",environment(me))) {
  return notify_fail("����һ����������ȥ����ɱ������˵�ɣ�\n");
  } 
 return 1;
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
      call_out( "fire_wound", 5,previous_object());
}

void fire_wound(object ob)
{
        if( !ob || !present(ob) ) return;
       tell_object(ob,HIR"����Ӱ���������������һ�󷭹�����Ȼһ��Ѫ��������������˳�����\n"NOR);
       ob->add("kee",-100);
       call_out("fire_wound", 5,ob);
}


void reset()
{
        ::reset();
        delete("go_north");
}



