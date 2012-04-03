#include <weapon.h>
#include <ansi.h>
inherit DAGGER;

void create()
{
        set_name(HIC "����ذ��" NOR,({"god dagger"}));
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","����Ҷ��ɱ��ׯ�������������֮������\n
������¼�֮�����ذ�׾Ͳ�֪ȥ������Ȼ������������ϡ�\n
����������ת����������������ǿ����˺�����ʹ�����ܵ��˺�(hurt)��\n");
                set("value",1000);
                set("material", "steel");
        
                set("no_sell",1);
        }
        init_dagger(80);

// These properties are optional, if you don't set them, it will use the
// default values.

        set("wield_msg", "$N�ӻ�������һ��$n�������С�\n");
        set("unwield_msg", "$N�����е�$n���뻳�С�\n");

// The setup() is required.
        setup();
}

void init()
{
    if( this_player()==environment() )
    {
      add_action("do_hurt","hurt");
      add_action("do_auc","auc");
    }
}

int do_auc(string str)
{  
   if (str=="god dagger")
   {
     message_vision("$N��������ذ�ף��Ѿ�û���ˣ���˽�ذ���۶���\n",this_player());
     destruct(this_player());
     this_player()->set("sellring",2);
     return 0;
   }    
}

int do_hurt(string arg)
{
   int buf,sk;
   object ob,me,target;
   string str;
   me = this_player();
   ob = this_object();
   sk=me->query_skill("dagger",1);
   if (!arg )
   return notify_fail("���������ѽ��\n");
   target = present(arg, environment(me)); 
   if(!target) return notify_fail("�Ҳ��������!!\n");
   if(!me->is_fighting(target) )
   return notify_fail("ս���в���ʹ���!!\n");
   if(this_player()->query("class") != "killer")
   return notify_fail("����ɱ��ר�õĶ���\n");
   if(this_player()->query_skill("dagger",1) < 50 )
   return notify_fail("С���ѣ��̱�������һ�㣬���ðɣ�\n");
   if( target->query("no_kill") ) 
   return notify_fail("��һ��㲻�ܶ����ǲ��ܶ���\n");
   if( !wizardp(me) && environment(me)->query("no_fight") )
       return notify_fail("�����ֹս����\n");
   if( !target->is_character() || target->is_corpse() )
       return notify_fail("�������,�������ǻ��\n");
   if(me->query("atman") < 50)
       return notify_fail("��Ǹ��������������\n");
   if( target == me ) 
       return notify_fail("ɱ��Ŀǰ��û�У���ʬ���˵Ĵ���������Ҫ��������\n");
   if(target->is_busy())
       return notify_fail("�ʴ�һ�������������������������ס����������\n");

  if ( me->is_fighting(target) || me->is_killing(target) )
  {
   tell_object(me,HIG"˫����סذ�ף����������������ذ��֮�С�\n"NOR);
   tell_object(me,HIG"ֻ��ذ�׷���һ��ҫ�۵Ĺ�â��һ�����⼱�����\n"NOR);
   if( random(sk) > random(target->query("dodge",1)) )
     {//dodge lv 100�Ļ�����Ϊ����dodge��������lv 100����
        tell_object(me,HIM"����һ�����񣬱��������У��ܵ������˺�\n" NOR);
        target->add("kee",-random(sk));
        target->start_busy(1);
        me->add("atman",-50);
        return 1;
     }
   else
    {
        tell_object(me,HIM"$N����������ж������׵�����ȥ\n" NOR,target);
        me->add("atman",-10);
        me->start_busy(1);
        return 1;
     }
  }
  return notify_fail("������bugѽ����ս���в���������\n");
}

int wield()
{
  if(!this_player()) return 1;
 if(this_player()->query("class") != "killer")
    return notify_fail("����ɱ��ר�õĶ���\n");
 if(this_player()->query_skill("dagger") < 50 )
     return notify_fail("С���ѣ��̱�������һ�㣬���ðɣ�\n");
 else 
 {
::wield();
  }
  return 1;
}
