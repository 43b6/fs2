#include <ansi.h>
inherit ITEM;

int level=0;
void create()
{
   seteuid(getuid());
   set_name("���ߺ�",({ "nija monkey","nija","monkey" }) );
   set("long",@LONG
       ����һֻ���ߺ���,���������(feed)��,��������,�����԰���������(rename),
       �ȵ������Ĺ�����,����Է�����ȥ���̵���(mob_bak),�����verify����������
       �̶ȵ����١����ǣ���Ϊ���ǻ�����Ա���ι�������Ż�ָ�ԭ�е�����

LONG);
   set("unit","��");
   set("no_sell",1);
   set("no_drop",1);
   set("weight",50);
   setup();
}

void init()
{
    if( this_player()==environment() )
    {
       add_action("feed_pet","feed");
       add_action("rename_pet","rename");
       add_action("bit_pet","mob_bak");
       add_action("verify_pet","verify");
    }
}

int feed_pet(string arg)
{
   object obj,me=this_player();
   int expm;

   if(!arg)  return notify_fail("ָ���ʽ: feed <ɱ����ҩ>\n");
   if(!(obj=present(arg,me)))
       return notify_fail("������û����������\n");
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
   return 1;
}

int rename_pet(string arg)
{
   if(!arg) return notify_fail("��������ĳ�ʲô������?\n");
   arg = trans_color(arg);
   this_object()->set_name(arg + NOR,({ "nija monkey","nija","monkey" }) );
   write("������ĳ���ȡ�˸����ֽ�"+this_object()->name()+"��\n");
   return 1;
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
   if( target->query("no_kill") ) 
       return notify_fail("��һ��㲻�ܶ����ǲ��ܶ���\n");
   if( !wizardp(me) && environment(me)->query("no_fight") )
       return notify_fail("�����ֹս����\n");
   if( !target->is_character() || target->is_corpse() )
       return notify_fail("�������,�������ǻ��\n");
   if( target == me ) 
       return notify_fail(ob->name()+"�����������뱳���㡣\n");
   if( pow < 5 ) 
       return notify_fail(ob->name()+"���������,�ٶ�ι��һЩɱ����ҩ�ɡ�\n");
   if( bak_times > 2)
       return notify_fail(ob->name()+"�����ˣ��ٶ�ι��һЩɱ����ҩ�ɡ�\n");

   message_vision(
   ""+ob->name()+"Ǳ�뷿�еİ�����׼������$n������Ϣ�Ŀ�����\n\n",me,target);
   buf=random(pow);
   if( buf > 15 )
   {
    if( buf > 30 )
    {
     message_vision(HIG"$N���޾���,��"+ob->name()+HIR+"�����ˣ�\n" NOR,target);
     t_kee=target->query("max_kee")/13;
     target->add("kee",-t_kee);
     ob->add("bak_times",1);
     return 1;
    }
    if( buf > 60 )
    {
     message_vision(HIG"$N���޾���,��"+ob->name()+HIR+"�ݺݵر����ˣ�\n" NOR,target);
     t_kee=target->query("max_kee")/10;
     target->add("kee",-t_kee);
     ob->add("bak_times",1);
     return 1;
    }
    if( buf > 90 )
    {
     message_vision(HIG""+ob->name()+HIR+"�ݺݵ�ʹ��˫�ر��̣���$N�ܴ����\n" NOR,target);
     t_kee=target->query("max_kee")/5;
     target->add("kee",-t_kee);
     ob->add("bak_times",1);
     return 1;
    }
    message_vision(HIG"$Nһ��������,��"+ob->name()+HIR+"�����ˣ�\n" NOR,target);
    t_kee=target->query("max_kee")/20;
    target->add("kee",-t_kee);
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
  
int verify_pet(string str)
{
  int lv,expm;
  object obj=this_object();

  lv =  (int)obj->query("lv");
  expm = (int)obj->query("exp");
  write(obj->name()+"      Ŀǰ�ȼ�   :  "+lv+"\n\n");
  write(obj->name()+"      Ŀǰ����ֵ :  "+expm+"\n\n");
  return 1;
}

int query_autoload ()
{
  if (this_player()->query("quest/rain") == 1)
    return 1;
  return 0;
}