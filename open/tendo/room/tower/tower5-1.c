
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "��������¥--");
  set ("long", @LONG
����������Ȼ���ֵ��ϲ���һ��ң����ո�¥�ݵİ����ϣ�Ҳ���ǻҳ�����
�����ϵ����¥���ˣ�һ������֮���١�����ľ�ɫ���ɵ���������ɫ��ǽ�ڡ��޴�
��֣�Ψһ����е���һ���ģ������˸ո���һ����ɱ֮����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tower5-2",
  "down" : __DIR__"tower4-2",
]));
 set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/goblin" : 1,
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="west"&&present("goblin",environment(me))) {
  return notify_fail("Ѫ�������������ȥ����ɱ������˵�ɣ�\n");
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


