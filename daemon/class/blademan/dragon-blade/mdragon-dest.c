// mdragon-dest.c
// ��FS�����������
// �İ� by swy
#include <ansi.h>
#include <combat.h>
inherit SSERVER;
inherit F_FUNCTION;
int perform(object me, object target)
{
   object *enemy,ob;
   int i,fun,k,j;
   fun=me->query("functions/mdragon-dest/level");
   enemy=me->query_enemy();
   i=sizeof(enemy);
   k=random(3)+1;
if(me->query("family/family_name")!="ħ����" &&
me->query("family/family_name")!="ħ��Ī��")
return notify_fail("�㲻�Ǳ��ɲ����á�\n");
   if(me->query_skill("dragon-blade",1)<105)
      return notify_fail("��Ŀ��������������������ܾ����ڵ���\n");
   if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="blade")
      return notify_fail("ֻ����װ�����£�����ʹ��ม�\n");
   if(me->query("force")<100)
      return notify_fail("�������������\n");
   if(me->query("kee")<20)
      return notify_fail("�����������\n");
   if(!me->is_fighting())
      return notify_fail("��ħ������ֻ����ս����ʹ�á�\n");
   me->start_busy(1);
   message_vision("\n$N���һ��ʹ����"+HIM+"ħ����"+NOR+"��\n",me);
   message_vision(HIB+@LONG
                                                      ____
          ___                                      .-~. /_"-._
         `-._~-.                                  / /_ "~o\  :Y
             \  \                                / : \~x.  ` ')
              ]  Y                              /  |  Y< ~-.__j
             /   !                        _.--~T : l  l<  /.-~
            /   /                 ____.--~ .   ` l /~\ \<|Y
           /   /             .-~~"        /| .    ',-~\ \L|
          /   /             /     .^   \ Y~Y \.^>/l_   "--'
         /   Y           .-"(  .  l__  j_j l_/ /~_.-~    .
        Y    l          /    \  )    ~~~." / `/"~ / \.__/l_
        |     \     _.-"      ~-{__     l  :  l._Z~-.___.--~
        |      ~---~           /   ~~"---\_  ' __[>
        l  .                _.^   ___     _>-y~
         \  \     .      .-~   .-~   ~>--"  /
          \  ~---"            /     ./  _.-'
           "-.,_____.,_  _.--~\     _.-~
                               `. ~(
                                 )  \
                                /,`--'~\--'~\
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

LONG +NOR,me);
   me->add("kee",-50);
   me->add("force",-100);
   for(j=0; j<i; j++)
   {
    if(!me || !enemy[j]) continue;
if(environment(me)!=environment(enemy[j])) continue;  
      if(80>random(100))
      {
message_vision(HIR+enemy[j]->name()+"���侰����ס������ħ�����������\n"+NOR,me,enemy[j]);
            enemy[j]->receive_wound("kee",me->query_skill("blade")*3+fun,me);
            enemy[j]->receive_damage("sen",fun*3+50,me);
            enemy[j]->receive_damage("gin",fun*3+50,me);
if(!enemy[j]->is_busy()) { enemy[j]->start_busy(k); }
// ��mob��ǿΪ���ܽ�sa by swy
if(userp(me)&&(!userp(enemy[j]))) { enemy[j]->receive_wound("kee",me->query_skill("blade")*3+fun,me); }
if(userp(me)&&(!userp(enemy[j]))) { enemy[j]->start_busy(2); }
if(me->query("m_blade")==1 &&
   me->query_temp("mblade")!=1 &&
   me->query_temp("mblade2")!=1 &&
   me->query_temp("mblade3")!=1) {
               me->set_temp("mblade",1); }
            COMBAT_D->report_status(enemy[j],1);
         }
      else
         message_vision(YEL"$n��Σ��ʱ����Ȼһ�����㿪��ħ��������\n"NOR,me,enemy[j]);
   }
   message_vision(HIW"��ħ������ʹ���󣬴����������Ϣ���ҡ�\n"NOR,me);
   if(fun<100) 
       function_improved("mdragon-dest",random(500)); 
   return 1;
}
