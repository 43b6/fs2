
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "��������¥--");
  set ("long", @LONG
�ߵ�����������ֵ��ϵ�Ѫ�ղ��񷽲���ô�࣬�����ܵ�ɱ���ȷ��Ÿ��ӵ�
Ũ�ң��㷢�ֱ�����ã��׹ǳɶѣ�������˸�����ƹ�һ�㣬�������˶����ĵ�
ǹ��צ���������������紵��������͸�ġ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tower2-2",
  "down" : __DIR__"tower1-8",
]));
 set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/snake" : 1,
]));

      set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="south"&&present("snake",environment(me))) {
  return notify_fail("�������Ӻ��: ���ȥ����ɱ������˵�ɣ�\n");
  } 
 return 1;
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



