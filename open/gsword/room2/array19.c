#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", HIW"�����ħ��"NOR);
        set("long", @LONG
���جج֮��..����������ħ�������,ҫ�۵��߲ʹ�â..��˸����.ѰѰ������
�㷢���������Ϸ�..�߿��ޱ�ҫ�۵������ʯ.��һ���㲻֪��ͼ������..��ʯ��
��������͸���Ĺ�Ȧ��Χ...���㲻֪������Ϊ�Ρ�
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
 "north":"/open/gsword/room2/tesinroad.c",

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
  if(who->query("bellicosity") > 500+random(100)) {
    message_vision(HIR"\n$N���������ħ���..˲�������е���ħ���Ƿ���ҫ�۹�â.\n",who);
    message_vision(HIR"��â��ʧ����������֮������$N����������\n"NOR,who);
    seteuid(getuid());
    i=random(5)+1;
    while(i--)
   {
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

