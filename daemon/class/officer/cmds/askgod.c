//  made by ccat
#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

object aim;
int report=0;
int main(object me, string arg)
{
object obj,objj;
int skill,i,kee,kee2,exp1,exp2;
  string str,name;
  
  if( me->query("sen") < 30 ) return notify_fail("�������.\n");
  if( me->query("force") < 50 ) return notify_fail("�����������.\n");
  if(me->is_fighting())  return notify_fail("ս�����޷�ռ����\n");
if((int)me->query_temp("godd",1)) return notify_fail("������æ��~~\n");

  if( !arg )
    return notify_fail("ָ���ʽ��cmd askgod <id>\n");
  if(arg=="sa" || arg=="degu sa") 
    return notify_fail("����ռ���Ը��ң����Ŷ�û�У���");

  arg = lower_case(arg);

  if( !objectp(obj = present(arg, environment(me))) )
    return notify_fail("�����˭ռ��?\n");
  if( obj->query("no_askgod") )
        return notify_fail("��һ��㲻�ܶ����ǲ��ܶ���\n");


  if( !obj->is_character() || obj->is_corpse() || obj->query_temp("netdead") )
    return notify_fail("�ǲ����ǻ��\n");

  skill = me->query_skill("security",1);
  skill = random(skill);
  me->receive_damage("sen",30,me);
  me->add("force",-50);
  
  exp1 = me->query("combat_exp");
  exp2 = obj->query("combat_exp");
  if( exp1 > exp2) exp1 = exp2*3; 
  if( exp1 < exp2) exp1 = exp1*3;
  if(  random(exp1) > random(exp2) )
  {
     aim = obj;
  }else  aim = me;
  
  name = aim->query("name");
  i = random(9);
  switch(i)
  {
    case 0:
    case 1:
    case 2:
      report=1;
      kee = aim->query("max_kee");
      kee2 = aim->query("kee");  
      if( skill < 15)
      {
          str="ͻȻ�� "+name+" ��ʼ������к.\n"+
              "$Nҡͷ̾��:��!! �Ժ�Զ���ҪС��";
          kee = kee*0.2; 
       }else if( skill < 25)
       {
          str="$N˵: ����..."+name+" ���첻����\��.\n"+
              "���Ÿ�ͣ,ֻ��"+name+"��ɫһ����һ���,�ƺ���Ϣ�߲���";
          kee = kee*0.3;
       }else if( skill < 45)
       {
          str="$N˵: �㵽��!!"+name+" ���첻�˵����ε�.\n"+
              "ͻȻ��ƽ��һ������,һ���������"+name+"\n"+
              "$N̾��: ��...˵��̫����";
          kee = kee*0.4;
       }else if( skill < 80)
       {
          str="ͻȻ$N ���: ������!!\n"+
              name+" ��ͺ�Ȼһ��,��Ȼ���з���";
          kee = kee*0.5;
       }else{
          str="$N˵: ��!!... "+name+"��Ȼ�������,\n"+
              "��������,"+name+"�Ѿ�������";
          kee = kee*0.6;
       }
       if( kee > kee2)
          kee = (int)kee2*0.7;
       aim->receive_damage("kee",kee,me);
       break;
    case 3:
    case 4:
    case 5:
       if( skill < 30)
       {  
          str="$N˵: �㵽��...����ĳ���ᷢ������!!\n����˵��"+
              name+"����ͻȻȼ�������һ�,����Ӧ����";
          aim->apply_condition("burn",(int)skill/6);
       }else if( skill<60 ){
          str="$N��"+name+"ҡҡָͷ˵:���������...\n"+
              "ͻȻ"+name+"��ɫ����,˫����ס�²�,���Ʒ�����";
          aim->apply_condition("spring",(int)skill/10);
       }else{
          str=";Ȼ��ط���,һ��ڻ�ӵص�ð��,ȼ���� "+name+
              "\n $N ��������̫����";
          aim->apply_condition("hellfire",(int)skill/10);
       }
       break;
    case 6:
    case 7:
       str=name+" ;Ȼ��һ��ſ�ڵ���,ԭ���Ǽ���Ǯ";
       objj=new("/obj/money/silver");
       objj->move(aim);
       objj->add_amount(skill);
       break;
    case 8:
         str="$N ˵: �㵽��...����������������";
  }
  message_vision("$N\��\����,����$n��ʼռ��...\n"+
                 "ֻ��$N��ҡ������,����������.\n"+
                 str+"!!\n",me,obj);
	me->set_temp("godd",11);
	me->start_call_out((: call_other, __FILE__, "remove_effect", me :), 3);
  return 1;
}

void remove_effect (object me)
{
 if( report)
    COMBAT_D->report_status(aim, 0);
me->set_temp("godd",0);

}
int help(object me)
{
  write(@HELP
ָ���ʽ : cmd askgod <����>
ָ��˵�� : 
           ���ָ�������ĳ��ռ��,���޷�Ԥ֪�Ǹ��ǻ�.
           �ΰ���Խ��,��ɵ�Ӱ��Խ��.
HELP
    );
    return 1;
}
 
