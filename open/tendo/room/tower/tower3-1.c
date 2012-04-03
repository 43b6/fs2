
inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short","��������¥--");
  set ("long", @LONG
��̤����һ��¥��������߾ͱ�һ������ɫ��ռ������һ�������ǽ�ڣ��Ѿ�
�����Ǹոյ����ְ��죬����������һ�����˲������������������ϰ߲���Ѫӡ��
ʹ�ո��ǹ���ɱ�������������������ϡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"tower3-2",
  "down" : __DIR__"tower2-3",
]));
 set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/plaguer" : 1,
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="north"&&present("plaguer",environment(me))) {
  return notify_fail("��ɷ������: ���ȥ����ɱ������˵�ɣ�\n");
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


