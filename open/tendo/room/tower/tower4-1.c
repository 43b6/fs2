
inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short", "��������¥--");
  set ("long", @LONG
��������㷢���򶷵ĺۼ��ȷ���������࣬�����ǽ��Ҳ����������ɫ����
ͬ��������Ŀռ��ǰ���㶼С��Щ��������һ������߱�ǰ���㶼�ߣ����������
Ϊ���ô����߲���ʩչ�Ṧ�����ء�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tower4-2",
  "down" : __DIR__"tower3-3",
]));
 set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/chieftain" : 1,
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="south"&&present("chieftain",environment(me))) {
  return notify_fail("����Ŀ����: ���ȥ����ɱ������˵�ɣ�\n");
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



