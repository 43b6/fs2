#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", HIW"������磭�ſ���ʥ��"NOR);
        set("long", @LONG
����ǰһƬ�谵����ǰ����һƬ��ڣ�ֻ�������е��������������������Ĺ�â��
�ƺ���������ǰ���ĵ�·��
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
]));

        set("no_transmit", 1);
        set("no_drop",1);
        set("no_auc",1);
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
  int edir=random(30);
  int wdir=random(30);
  int ndir=random(30);
  int sdir=random(30);
  room->set("exits/west","/open/gsword/second/room/blade/b"+wdir);
  room->set("exits/east","/open/gsword/second/room/blade/b"+edir);
  room->set("exits/north","/open/gsword/second/room/blade/b"+ndir);
  room->set("exits/south","/open/gsword/second/room/blade/b"+sdir);
  if(who->query("bellicosity") > 500+random(100)) {
    message_vision(HIR"\n$N����ſ���ʥ���..˲�����֮�����ħ���Ƿ���ҫ�۹�â.\n",who);
    message_vision(HIR"��â��ʧ����������֮�����������ſ���ʥ��֮�У�����$N����������\n"NOR,who);
    seteuid(getuid());
    i=random(3)+1;
    while(i--) {
      mob=new("/open/gsword/npc2/t_dragon");
      mob->move(room);
      mob->callset(who);
      mob->kill_ob(who);
    }
  }
  return 1;
}
int valid_leave(object me, string dir)
{
if((dir=="north" || dir=="south" || dir=="east" || dir=="west")&& present("dragon",environment(me)))
    if(!me->query_temp("allow_read",1))
   return notify_fail("����Ϊ���ܻ�ù�ȥ��??"+RANK_D->query_respect(me)+"��ȥ����!\n");
return ::valid_leave(me,dir);
}