
inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short", "��������¥--");
  set ("long", @LONG
������������㷢������һ���������൱���ҵ�ս���������Ĳ���Ѫӡ�Լ���ǽ
����ӡ������һ�ɹ�ʪ���ùζ���㷢��ǽ�ǻ��м��߲�ȱ�����ǣ�������һЩһ��
�������������ǿ���ǡ�
LONG );

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tower3-1",
  "east" : __DIR__"tower3-3",
]));
 set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/villain" : 1,
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="east"&&present("villain",environment(me))) {
  return notify_fail("Ѫ����ɲ���: ���ȥ����ɱ������˵�ɣ�\n");
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


