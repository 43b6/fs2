#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", HIW"�����ħ��"NOR);
        set("long", @LONG
���Ǵ�˵������ħʦ-������������Ƶ���ħ����..����ңң��ȥ�������۰�����
��˵�е���ħ����..��˵����������Ů洲������þ����������Ƴ�..����ħ����֮��
�ۼ���ħ������������..������ħ����ʱ�ܵ�ѹ��...��
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
  int edir=random(20);
  int wdir=random(20);
  int ndir=random(20);
  int sdir=random(20);
this_player()->delete_temp("find_tesin1");
this_player()->delete_temp("find_tesin2");
this_player()->delete_temp("find_tesin3");
this_player()->delete_temp("find_tesin4");
this_player()->delete_temp("find_tesin5");
this_player()->delete_temp("find_tesin6");
  room->set("exits/west","/open/gsword/room2/array"+wdir);
  room->set("exits/east","/open/gsword/room2/array"+edir);
  room->set("exits/north","/open/gsword/room2/array"+ndir);
  room->set("exits/south","/open/gsword/room2/array"+sdir);
  if(who->query("bellicosity") > 500+random(100)) {
    message_vision(HIR"\n$N���������ħ���..˲�������е���ħ���Ƿ���ҫ�۹�â.\n",who);
    message_vision(HIR"��â��ʧ����������֮������$N����������\n"NOR,who);
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
