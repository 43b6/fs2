//�����ޱȣ�ϸ��ţë����Ϊ�ټ���ȡ��Ѫ�䣬�����������
#include <weapon.h>
#include <ansi.h>
inherit THROWING;
void create()
{
     set_name("��Ѫ����",({"black blood","blood","black"}));
     set_weight(1);
     if( clonep() )
         set_default_object(__FILE__);
     else {
       set("unit","֧");
       set("base_unit","֧");
       set("long","��˵��ֻ������Ʈ�������¶�������ֻ�м������������ֻ�ʹ��\n
                    �������shot����Ѫ�������ȥ");
       set("light_up",-1);
       set("value",1000);
       set("no_sell",1);
       set ("no_drop",1);
       set("material", "silver");
       set("wield_msg","$N����$n,����ʮ���˷ܣ��������������--��Ѫ����\n");
       set("unwield_msg", "$N��$n������ƻ��ף����������Լ�\n");
     }
      init_throwing(10);
      set_amount(1);
      setup();
}
void init()
{
    if( this_player()==environment() )
    {
       add_action("black_shot","shot");
    }
}

int black_shot(string arg)
{
   int sk;
   object ob,me,target;
   string str;
   me = this_player();
   ob = this_object();
   sk=me->query_skill("throwing",1);
   if( !arg )
       return notify_fail("���������ѽ��\n");
   if (me->query("class") != "killer")
	return 0;
   target = present(arg, environment(me)); 
    if(!target) return notify_fail("�Ҳ�������!!\n");
   if( target->query("no_kill") ) 
       return notify_fail("��һ��㲻�ܶ����ǲ��ܶ���\n");
   if( !wizardp(me) && environment(me)->query("no_fight") )
       return notify_fail("�����ֹս����\n");
   if( !target->is_character() || target->is_corpse() )
       return notify_fail("�������,�������ǻ��\n");
   if( target == me ) 
       return notify_fail("ɱ��Ŀǰ��û�У���ʬ���˵Ĵ���������Ҫ��������\n");
   message_vision("$N�����ϵĺ�Ѫ������$n���������˹�ȥ��\n\n",me,target);
   if( random(sk) > random(target->query_skill("dodge",1)/2))
   {
        message_vision(HIM "$Nһ��������,����Ѫ��������ˣ�\n" NOR,target);
        target->apply_condition("blood",sk/10);
        add_amount(-1);
        return 1;
   }
   else
   {
        message_vision(
        HIC "$N����ææ��������, ����Ѫ�����ų���һ���亹��\n" NOR,target);
        add_amount(-1);
        return 1;
   }
}

int wield()
{
 object me=this_player();

 if(me->query_skill_mapped("throwing") != "rain-throwing")
 {
	tell_object(me,"ɱ��ר���������㲻��ɱ�֣������㲻���ã�\n");
        return 0;
 }
 if(me->query_skill("throwing",1) < 80 )
 {
 	tell_object(me,"С���ѣ������ַ�����һ�㣬���ðɣ�\n");
        return 0;
 }
}
