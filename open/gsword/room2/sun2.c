#include <ansi.h>
inherit ROOM;
void create()
{
   set("short", HIW"�ɽ�����Ͽ��"NOR);
   set("long", @LONG
һ���Ӳݴ�����Ͽ��.����ɽ������..�������ƺ��޷��뿪�˴�...
��������ϸ��Ѱ����ʱ..�㷢��ɽ���Ͼ����������Ľ���.��
LONG
        );
        set("exits", ([ /* sizeof() == 3 */

]));
        set("light_up",1);
        set("no_transmit", 1);
        setup();
}

void init()
{
  object ob;
  if( interactive( ob= this_player()))
   {
      remove_call_out("greeting");
        call_out("greeting", 0, ob);
   }
}
int greeting (object who)
{
  object room = this_object();
  object mob;
  int i;
  int edir=random(5);
  int wdir=random(5);
  int sdir=random(5);
  room->set("exits/west","/open/gsword/room2/sun"+wdir);
  room->set("exits/east","/open/gsword/room2/sun"+edir);
  room->set("exits/north","/open/gsword/room2/sun5");
  room->set("exits/south","/open/gsword/room2/sun"+sdir);
    message_vision(HIR"\n$N�����ɽ����������..˲����������â.\n",who);
    message_vision(HIR"��â��ʧ��������Ӱ$N����������\n"NOR,who);
    seteuid(getuid());
    i=random(3)+1;
    while(i--)
   {
      mob=new("/open/gsword/npc2/t_man");
      mob->move(room);
      mob->callset(who);
      mob->kill_ob(who);
    }
  return 1;
}
int valid_leave(object me, string dir)
{
if((dir=="south" || dir=="east" || dir=="west")&& present("man",environment(me)))
    if(!me->query_temp("allow_read",1))
   return notify_fail("����Ϊ���ܻ�ù�ȥ��??"+RANK_D->query_respect(me)+"��ȥ����!\n");
return ::valid_leave(me,dir);
}
