
inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short", "��������¥--");
  set ("long", @LONG
������������ɱ���ĵ����ڶ��㣬վ���������һ��˵�����Ľ��ŸУ�һ�Ե�С��
�ӻ����ϴ���΢�磻���Ȼ����ǽ��������վ��һ�����θߴ���ˣ����������ž�����
�䷿������ˣ�����������������ˣ���
LONG);

 
  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"tower6-2",
  "east" : __DIR__"tower7-2",
]));
 set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/towerking" : 1,
]));
        set("no_transmit",1);
        set("no_smash",1);
        set("no_dest",1);

  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="east"&&present("tower king",environment(me))) {
  return notify_fail("����������У�����ȥ����ɱ������˵�ɣ�\n");
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



