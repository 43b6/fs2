inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short", "��������¥--");
  set ("long", @LONG
̤���������ĵ�һ��ӡ�󣬻�����Ƭ���˵İ���ɫ�����ŵ��ϰ߰ߵ�
Ѫ����ʹ������������һƬѪ�ȣ�������һ�ɳ嶯��Ҫ�����ߡ�
LONG);
 
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tower2-3",
  "north" : __DIR__"tower2-1",
]));
 set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/yama" : 1,
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="west"&&present("yama",environment(me))) {
  return notify_fail("�ñ�ǧ�ֺ��: ���ȥ����ɱ������˵�ɣ�\n");
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


