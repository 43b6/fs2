#include <ansi.h>
#include <weapon.h>
#include <armor.h>
#include "/open/open.h"
#define SUB "/open/killer/obj/two"
inherit ITEM;
int help(object);
int level=0,armor_power=0,eq=1,now_def=0;
void create()
{
   seteuid(getuid());
   set_name("Ӱ����",({ "nija fighter","nija","fighter" }) );
   set("weight",50);
   if( clonep() )
                set_default_object(__FILE__);
   else 
   {
     set("long",@LONG
     ���Ƕ���������߽���,���������������߷�����˵����ʧ����û�뵽�ֳ����ˡ�
     ����������Զ����µ�����
     ����(feed)     ��ʽ feed   <killer pill> ��ʹӰ���߳ɳ�
     ����(rename)   ��ʽ rename <name>        ��ΪӰ���߸���
     ����(mob_data) ��ʽ mob_data             ���쿴Ӱ���ߵȼ��뾭��ֵ
     ����(mob_eq)   ��ʽ mob_eq <����>        : �������Ӱ���ߵĻ���Ч��
     �ɳ���һ���̶ȣ�����ʹ����������
     ����(helpme)   ��ʽ helpme  <�Լ�������> :����߷�����
     ����(mob_bak)  ��ʽ mob_bak <����>       :һ��ʱ�򣬿������ڱ��̵���
     ��ס(busy)     ��ʽ busy    <����>       :ս���г������������
     ����(charge)   ��ʽ charge               :��������ĵȼ������ظ���ľ�����
     ����(sub)      ��ʽ sub                  :����Ӱ�߱����ķ���
                                               �ɴ�cmds�ۿ�����ָ���
     ˵��(mob_say)  ��ʽ mob_say <msg>        :��Ӱ���߰����������˵��
LONG);
    set("unit","λ");
    set("no_sell",1);
    set("no_drop",1);
    set("no_auc",1);
   }
   setup();
}

void init()
{
    if (this_player()->query("class") != "killer")
	return 0;
    if( this_player()==environment() )
    {
       add_action("feed_pet","feed");
       add_action("rename_pet","rename");
       add_action("mob_busy","busy");
       add_action("mob_charge","charge");
       add_action("mob_help","helpme");
       add_action("to_eq","mob_eq");
       add_action("to_say","mob_say"); 
       add_action("bit_pet","mob_bak");
       add_action("verify_pet","mob_data");
       add_action("do_sub","sub");
       add_action("help_sub","cmds");
    }
}
int help_sub()
{
  SUB->help_sub();   return 1;
}

int feed_pet(string arg)
{
   object obj,me=this_player();
   int expm;

   if(!arg)  return notify_fail("ָ���ʽ: feed <killer pill>\n");
   if(!(obj=present(arg,me)))
       return notify_fail("������û����������\n");
   if(this_object()->query("helpme")==1)
       return notify_fail("���ڱ����㣬������˼��ҩѽ��\n");
   if(obj->query("id") != "killer pill")
       return notify_fail("��ֻ��ι��ɱ����ҩ��\n");
   message_vision("$Nι��"+this_object()->name()+"һ��ɱ����ҩ��\n",me);
   if (!me->query("monkey_exp"))
   { 
      me->set("monkey_exp",1); 
      me->set("monkey_lv",1);
   }    
   expm=random(20);
   me->add("monkey_exp",expm);
   expm=me->query("monkey_exp");
   if (expm >= 100)  //����
   {
    level =me->query("monkey_lv");
     level += 1;
     if (level > 100)
       level=100;
     me->set("monkey_lv",level);
     me->set("monkey_exp",1);
     expm=0;
   }
   obj->add_amount(-1);
   this_object()->set("lv",me->query("monkey_lv"));
   this_object()->set("exp",me->query("monkey_exp"));
   this_object()->set("bak_times",0);
   this_object()->set("busy_times",0);
   this_object()->set("mudsay",0);
   return 1;
}

int rename_pet(string arg)
{
   if(!arg) return notify_fail("��������ĳ�ʲô������?\n");
   arg = trans_color(arg);
   this_object()->set_name(arg + NOR,({ "nija fighter","nija","fighter" }) );
   write("�������Ӱ����ȡ�˸����ֽ�"+this_object()->name()+"��\n");
   return 1;
}

int to_say(string arg)
{
   int pow,helpme,t_kee,buf;
   object ob,me,target;
   string str;

   me = this_player();
   ob = this_object();
   pow = ob->query("lv");
   if(ob->query("mudsay")!= 0)
      return notify_fail(ob->name()+"�ղ�˵�Ŀ������ˣ��ٸ���ҩ�ɡ�\n");
   if( pow < 80 ) 
       return notify_fail(ob->name()+"������ǿ���,�ٶ�ι��һЩɱ����ҩ�ɡ�\n");
   if(!arg) return notify_fail("����Ҫ��˵ʲô�أ�\n");
   
   message("mud",HIG+ob->name()+HIG+"˵����"+arg+"��\n"NOR,users());
   ob->set("mudsay",1);
   return 1;
}

int mob_help(string arg)
{
   int pow,helpme,t_kee,buf;
   object ob,me,target;
   string str;
   me = this_player();
   ob = this_object();
   pow = ob->query("lv");
   helpme=ob->query("helpme");
	// 87.6.12����
	//����ʹ��sub֮��,Ӱ���ߵķ����������
   armor_power=me->query_temp("mob_def");

   if( !arg )
       return help(me);
   if (arg == "none")
   {
    ob->set("helpme",0);  //��Ҫʹ�Լ��ķ������½�
    me->add_temp("apply/armor",-now_def);
    return 1;
   }
   if (helpme == 1)
       return notify_fail(ob->name()+"�Ѿ��ڱ�������\n");
   target = present(arg, environment(me)); 
   if( target != me ) 
       return notify_fail(ob->name()+"ȥ�������ˣ�����ΰ������\n");
   if( pow < 3 ) 
       return notify_fail(ob->name()+"������ǿ���,�ٶ�ι��һЩɱ����ҩ�ɡ�\n");
   buf=armor_power;  //ȡ�����ߵķ�����
   if( buf > 600 )
   {
    message_vision(ob->name()+HIM+"����һ����⣬���������Χ���γɳ���������\n" 
NOR,target);
    me->add_temp("apply/armor",200);
    ob->set("helpme",1);
    now_def=200;
    return 1;
   }
   if( buf > 250 )
   {
    message_vision(ob->name()+HIM+"����һ����⣬ȫ�ĵ��������˵�ע��\n" 
NOR,target);
    me->add_temp("apply/armor",80);
    ob->set("helpme",1);
    now_def=80;
    return 1;
   }
    if( buf > 200 )
    {
     message_vision(ob->name()+HIM+"������ߣ�ȫ��ؽ䱸��\n" NOR,target);
     me->add_temp("apply/armor",60);
     ob->set("helpme",1);
     now_def=60;
     return 1;
    }
    if( buf > 150 )
    {
     message_vision(ob->name()+HIM+"ȫ��ؽ䱸�ؿ�������\n" NOR,target);
     me->add_temp("apply/armor",40);
     ob->set("helpme",1);
     now_def=40;
     return 1;
    }
    if( buf > 100 )
    {
     message_vision(ob->name()+HIR+"�䱸�ؿ�������\n" NOR,target);
     me->add_temp("apply/armor",30);
     ob->set("helpme",1);
     now_def=30;
     return 1;
    }
    if( buf > 50 )
    {
     message_vision(ob->name()+HIR+"���ɵؿ�������\n" NOR,target);
     me->add_temp("apply/armor",20);
     ob->set("helpme",1);
     now_def=20;
    return 1;
    }
     message_vision(ob->name()+HIR+"�ܱ������𣿣��㻹���Լ�С�ĵ��\n" NOR,target);
     return 0;
}

int to_eq(string arg)
{
  object ob,me;
  int armor;

  me=this_player();
  seteuid(getuid());
  if( !arg ) return help(me);
  if(!(ob = present(arg,me))) return notify_fail("������û���������\n");
  if (ob->limit_ident(me)) 
    return notify_fail("��ѽ������Ʒ�ƺ���ĳ�ַ�ӡ��ס�ˣ�����Ӱ����Ҳ����װ��\n\n"); 
  if (ob->query("skill_type")) 
      return notify_fail("���У��Ҳ���˵���ܸ�������\n\n"); 
  if (eq > 5)
      return notify_fail("���У�����������𣿻��ǲֿ�ѽ��\n\n"); 

  if (ob->query("armor_type")) 
  {
    armor=ob->query("armor_prop/armor");
    switch(ob->query("armor_type"))
    {
      case(TYPE_CLOTH):	armor=armor*3;break;
      case(TYPE_SHIELD):armor=armor*4;break;
      case(TYPE_HEAD):
      case(TYPE_PANTS):	armor=armor*6;break;
      case(TYPE_NECK):
      case(TYPE_ARMBANDS):
      case(TYPE_WAIST):
      case(TYPE_WRISTS):
      case(TYPE_FINGER):
      case(TYPE_HANDS):
      case(TYPE_BOOTS):
      case(TYPE_LEGGINGS):
      case(TYPE_CAPE):	armor=armor*12;break;
    } 
    destruct(ob);
    eq+=1;
    armor_power=armor_power+armor;
	// 87.6.12����
	//����ʹ��sub֮��,Ӱ���ߵķ����������
    me->set_temp("mob_def",armor_power);
    write(this_object()->name()+HIG"��������������\n"NOR);
    return 1;                          //Ҫ��ֹ���������ۻ�
 }
  if (ob->query("ʳ��")) 
    return notify_fail("����ɣ�ʳ��̫���ǲ��ǣ�\n\n"); 
  if (ob->query("Һ��")) 
    return notify_fail("���������Ե�����ˮѽ��\n\n"); 
  if (ob->query("light_up"))
    return notify_fail("�㿴�ĵ��͹�������\n\n"); 
  return notify_fail("wa ley....�㵽���Ǹ�ʲôѽ��\n\n"); 
} 
 
int mob_charge(string arg)
{
   int pow,bak_times,t_kee,buf;
   object ob,me,target;
   string str;

   me = this_player();
   ob = this_object();
   pow = ob->query("lv");
   if( pow < 50 ) 
     return notify_fail(ob->name()+"������ǿ���,�ٶ�ι��һЩɱ����ҩ�ɡ�\n");
   if( !arg )
   {
     write(ob->name()+HIG"�յ������֪������Ч��ʱ�����ˡ�\n"NOR);
     write(ob->name()+HIG"����˫�ۣ���������ʹ��ԭ����ڵ���������һ���â��\n"NOR);
     write(HIG"˲������һ���â��"+me->name()+"����â����ס\n"NOR);
     tell_object(me,"��е���ԭ����������壬���Ķ���ȫ�ظ���\n");
     me->set("gin",me->query("max_gin"));
     me->set("kee",me->query("max_kee"));
     me->set("sen",me->query("max_sen"));
     me->clear_condition();
     write(ob->name()+HIG"�ڹ�âɢȥ��Ҳ��ʧ����Ӱ���١�\n"NOR);
     ob->add("lv",-2);
     ob->set("exp",1);
     destruct(ob);
     me->add("monkey_lv",-2);
     me->set("monkey_exp",1);
     return 1;
   }    
   return notify_fail(ob->name()+"�������������������\n");
}
int bit_pet(string arg)
{
   int pow,bak_times,t_kee,buf;
   object ob,me,target;
   string str;
   me = this_player();
   ob = this_object();
   pow = ob->query("lv");
   bak_times=ob->query("bak_times");
   if( !arg )
       return notify_fail("�����"+ob->name()+"ȥ����˭��\n");
   target = present(arg, environment(me)); 
    if(!target) return notify_fail("���Ҳ�������!!\n");
   if( target->query("no_kill") ) 
       return notify_fail("��һ��㲻�ܶ����ǲ��ܶ���\n");
   if( !wizardp(me) && environment(me)->query("no_fight") )
       return notify_fail("�����ֹս����\n");
   if( !target->is_character() || target->is_corpse() )
       return notify_fail("�������,�������ǻ��\n");
   if( target == me ) 
       return notify_fail(ob->name()+"�����������뱳���㡣\n");
   if( target->query_temp("bit")==1)
       return notify_fail("����Ϊ���˺ܱ����϶��ε���\n");
   if( pow < 5 ) 
       return notify_fail(ob->name()+"������ǿ���,�ٶ�ι��һЩɱ����ҩ�ɡ�\n");
   if( bak_times > 2)
       return notify_fail(ob->name()+"�����ˣ��ٶ�ι��һЩɱ����ҩ�ɡ�\n");
   if(this_object()->query("helpme")==1)
       return notify_fail("���ڱ����㣬������˼����ѽ��\n");

   message_vision(
   ""+ob->name()+"Ǳ�뷿�еİ�����׼������$n������Ϣ�Ŀ�����\n\n",me,target);
   buf=random(pow+15);
   if( buf > 15 )
   {
    if( buf > 30 )
    {
     message_vision(HIG"$N����С��,��"+ob->name()+HIR+"�����ˣ�\n" NOR,target);
     t_kee=target->query("max_kee")/13;
     target->add("kee",-t_kee);
     target->set_temp("bit",1);
     ob->add("bak_times",1);
     return 1;
    }
    if( buf > 60 )
    {
     message_vision(HIG"$N���޾���,��"+ob->name()+HIR+"�ݺݵر����ˣ�\n" NOR,target);
     t_kee=target->query("max_kee")/10;
     target->add("kee",-t_kee);
     target->set_temp("bit",1);
     ob->add("bak_times",1);
     return 1;
    }
    if( buf > 90 )
    {
     message_vision(HIG""+ob->name()+HIR+"�ݺݵ�ʹ��˫�ر��̣���$N�ܴ����\n" NOR,target);
     t_kee=target->query("max_kee")/5;
     target->add("kee",-t_kee);
     target->set_temp("bit",1);
     ob->add("bak_times",1);
     return 1;
    }
    message_vision(HIG"$Nһ��������,��"+ob->name()+HIR+"�����ˣ�\n" NOR,target);
    t_kee=target->query("max_kee")/20;
    target->add("kee",-t_kee);
    target->set_temp("bit",1);
    ob->add("bak_times",1);
    return 1;
   }
   else
   {
    message_vision(HIC"$N����ææ��������, ��"+ob->name()+HIC+"�ų���һ���亹��\n" NOR,target);
    target->add("sen",-5);
    ob->add("bak_times",1);
    return 1;
   }
}

int mob_busy(string arg)
{
   int pow,busy_times,t_kee,buf;
   object ob,me,target;
   string str;

   me = this_player();
   ob = this_object();
   pow = ob->query("lv");
   busy_times=ob->query("busy_times");

   if( !arg )
       return notify_fail("�����"+ob->name()+"ȥ��ס˭��\n");
   target = present(arg, environment(me)); 
   if( target->query("no_kill") ) 
       return notify_fail("��һ��㲻�ܶ����ǲ��ܶ���\n");
   if( !wizardp(me) && environment(me)->query("no_fight") )
       return notify_fail("�����ֹս����\n");
   if( target->is_busy() )
       return notify_fail("�����Ѱ����У��㻹Ҫ��ʲѽ��\n");
   if( !target->is_character() || target->is_corpse() )
       return notify_fail("�������,�������ǻ��\n");
   if( target == me ) 
       return notify_fail(ob->name()+"�����Ͳ����㣬�㻹Ҫ��������ѽ����\n");
   if( pow < 30 ) 
       return notify_fail(ob->name()+"������ǿ���,�ٶ�ι��һЩɱ����ҩ�ɡ�\n");
   if( busy_times > 1)
       return notify_fail(ob->name()+HIG"�����ˣ��ٶ�ι��һЩɱ����ҩ�ɡ�\n"NOR);
   if(this_object()->query("helpme")==1)
       return notify_fail("���ڱ����㣬������˼ȥ��ס����ѽ��\n");

   if ( me->is_fighting(target) || me->is_killing(target) )
   {
   message_vision(ob->name()+"��������Σ�գ���ս���г��˳�ȥ�����跨��ס$n��\n",target);
   buf=random(pow+20);
   if( buf > 90 )
   {
     message_vision(HIG"$N��"+ob->name()+HIR+"�ܲ�����Ĵ򷨣��Ƶĸ���û�а취���������\n" NOR,target);
     target->start_busy(2);
     t_kee=target->query("max_kee")/15;
     target->add("kee",-t_kee);
     ob->add("busy_times",1);
     return 1;
   }
   if( buf > 70 )
   {
     message_vision(HIG"$N��"+ob->name()+HIR+"������������ס��\n" NOR,target);
     target->start_busy(2);
     t_kee=target->query("max_kee")/15;
     target->add("kee",-t_kee);
     ob->add("busy_times",1);
     return 1;
    }
    if( buf > 50 )
    {
     message_vision(HIG""+ob->name()+HIR+"���������ɵ����Ƶ�$N�е���æ����\n" NOR,target);
     target->start_busy(1);
     t_kee=target->query("max_kee")/20;
     target->add("kee",-t_kee);
     ob->add("busy_times",1);
     return 1;
    }
    if (buf > 20)
    {
     message_vision(HIG""+ob->name()+HIR+"���˳�ȥ����$N����һ��\n" NOR,target);
     target->start_busy(1);
     ob->add("busy_times",1);
     return 1;
    }
    message_vision(HIG"$N���������"+ob->name()+HIR+"ײ���ˣ������˴���\n" NOR,target);
    t_kee=target->query("max_kee")/20;
    target->add("kee",-t_kee);
    ob->add("busy_times",1);
    return 1;
   }
   return notify_fail("�񾭲�������ս���У���������ѽ��\n");
}

int verify_pet(string str)
{
  int lv,expm,armor;
  object obj=this_object();

	// 87.6.12����
	//����ʹ��sub֮��,Ӱ���ߵķ����������
   armor_power=this_player()->query_temp("mob_def");

  lv =  (int)obj->query("lv");
  expm = (int)obj->query("exp");
  write(obj->name()+"      Ŀǰ�ȼ�   :  "+lv+"\n\n");
  write(obj->name()+"      Ŀǰ����ֵ :  "+expm+"\n\n");
  write(obj->name()+"      Ŀǰ������ :  "+armor_power+"\n\n");
  return 1;
}


//add by Leei
int do_sub(string str)
{
   int pow;
   object ob,me,sub;

   me = this_player();
   ob = this_object();
   pow = ob->query("lv");
   if( !pow || pow < 80 )
     return notify_fail(ob->name()+"����ǿ,�ٶ�ι��һЩɱ����ҩ�ɡ�\n");
   if(this_object()->query("helpme")==1)
       return notify_fail("���ڱ����㣬����������ֲ�������\n");
   if ( me->query("force") < 100 )
     return notify_fail("�������������\n");
   if ( !me->is_fighting() )
     return notify_fail("��ս���в��ܺ��з���\n");
   if ( me->query_temp("sub","USED") )
    return notify_fail("�����Ӱ��û�й�λ�������ߺ��ٽ��롣\n");
   if( !str )
   {
   message_vision(HIC"$N��$N�� "NOR"$n "HIC"���,ͻȻ��$N�� "NOR"$n "HIC"����˼����ⳡս����\n"NOR,me,ob);



    me->add("force",-100);
    sub=new("/open/killer/obj/two.c");
    sub->set("sub_id",""+me->query("id")+"");
    sub->set("old_name",""+ob->name()+"");
   if ( me->query_temp("pk_fight") ) {
    sub->set_temp("pk_fight",1);
   } else {   me->set_temp("sub","USED");    }
    sub->move( environment(me) );
    sub->invocation(me);
    destruct(ob);
   }
   return 1;
}


int query_autoload ()
{
  if(!this_player()) return 0;
  if (this_player()->query("quest/rain") == 1)
    return 1;
  return 0;
}  
int help(object me)
{
  write (@HELP
ָ��     : to_eq ,helpme
ָ��˵�� :
       to_eq: �������Ӱ���߷��ߣ����ǲ��ܸ���������ΪӰ���ߵ���������
              �����ķ��ߣ�������������װ�������������ֵ�����
              һλӰ���߿��õķ��ߣ����ɳ���5�������Խ��������Ч��Խ��
              ��Ȼ�����ߺ����ķ���Ҳ����ʧ,���Ӱ���ߵķ���������50��Ļ�,
           ����Ϊ�����ѱ�,�����ܱ�����
      helpme: ��Ӱ����ר�ĵĵֵ�����������һ��ʱ���ʹ�û��������ս������
              �����е�Ӱ�����޷����б��̣���ס�������������Կ�������
 helpme none: ����ȡ�������Ч����
HELP); 
  return 1;
}

