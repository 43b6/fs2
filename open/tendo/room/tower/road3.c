#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����С��");
  set ("long", @LONG
��о��ƺ����˺þã��ոտ��������������ڲ�Զ�ĵط������㷢�������ܵ�
������ľ�Ѳ���ո���Щ�ط�����Ũ���ˡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"road2",
  "east" : __DIR__"road4",
]));
set("objects", ([ /* sizeof() == 1 */
  "/open/tendo/room/tower/npc/su" : 1,
]));
  set("outdoors", 1);
  set("no_smash",1);
  set("no_dest",1);
  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="east"&&present("elder su",environment(me))) {
  return notify_fail("���ǺӴ�У����ȥ����ɱ������˵��!!\n");
  } 
 return 1;
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
        call_out( "death_stage", 1, previous_object());
}

void death_stage(object ob)
{
        if( !ob || !present(ob) ) return;
        if ( ob->query("combat_exp") < 450000 ){
                message_vision(HIW "\n\t��ͻȻ�о���һ�����˵���Ϣ!\n" NOR,ob,environment());
                message_vision(HIW "     ����������ľ��鲻�㣬���Ա����Ǻӵ��������˳�������\n\n" NOR,ob,environment());
                ob->move(__DIR__"road2.c");
        }
        call_out("death_stage", 1, ob);
}



