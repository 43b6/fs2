//final-unarmed �ռ�ȭ��...by chan
//���Ը�һ�����乥��....����ս�����޷�ʹ��...
//ͬһ��mob����������.����.......ͬʱ����û��û�гɹ�����һ��..
//ʹ��һ�ο�����50%(������һ��....�۵�Խ������Խǿ....)�����������1/3
//ֻ������ʹ��,EXP�޶������������Ϸ���ʹ��....
//�۵����ñ�����Ϊ700 ~   ֮��..............
//��ʽ��message������������..ֻ������..
//һ��ʼֻ��lv 0 ~ 20ֻ��һ�� 20 ~ 40 ���� 40~ 60 ���� 60 ~ 80 ����...
//���ָ��... design_final_skill.c
//���ָ��... show_final_skill.c
//����..����Ҫko fire-king��exp����������ϲ���ʹ��......
//ս���в���������busy�Լ�Ҳû����.���������busy�Լ�
#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, string arg,object victim)
{
  string path,vipath,roompath,msg;
  int value,use,skee,damage=500,sforce,fun;
  if(me->query("class") != "fighter")
   return notify_fail("ֻ�����߿�����!!!!\n");
  if(!victim) return notify_fail("��Ҫ��˭???\n");
  if(!environment(victim)) return notify_fail("��Ҫ������??\n");
  vipath=file_name(environment(victim));
  if(me->query("combat_exp") < 5000000)
   return notify_fail("�����ѧ�̶��޷�ʹ���ռ�ȭ��!!\n");
  if(me->query("kee") < (me->query("max_kee") / 3))
   return notify_fail("�����������.....\n");
  if(me->query("atman") <(me->query("max_atman") /3))
   return notify_fail("�������������.....\n");
  if(me->query("mana") <(me->query("max_mana") /3))
   return notify_fail("��ķ���������.....\n");
  if(me->query("force") < (me->query("max_force") /2))
   return notify_fail("�����������!!!\n");
  if(victim->query_temp("final-attack") > 2)
   return notify_fail("��ͬһ����ֻ��ʹ������.....\n");
  if( !me->query("final/ko_king"))
   return notify_fail("�㲢û���ʸ�ʹ���ռ�ȭ��!!!!\n");
  if(me->is_fighting(victim))
   return notify_fail("ս�����޷�ʹ��!!!!!\n");
  roompath=environment(me)->query("exits/"+arg);
  if(!roompath) return notify_fail("������񲻴��!!\n");
  if(me->query("env/test_final")){
     printf("%s\t%s\n",vipath,roompath);
  }
  if(vipath[sizeof(vipath)-2..sizeof(vipath)-1]!=".c") vipath+=".c";
  if(roompath[sizeof(roompath)-2..sizeof(roompath)-1]!=".c") roompath+=".c";
  if( vipath != roompath) //��ʾ�����ڵķ���......
   return notify_fail("���˲��ڸ���������.....\n");
  value = me->query("functions/final-unarmed/level");
  value = value / 20;
  value = random(value)+1; //���������ҳ�����Ƶ�message....
  if(value > 4)
   value = 4;
  path = sprintf("%d",value);
  if(!me->query("final/action"+path))
   return notify_fail("������ʽ��δ���!!!�޷�ʹ��!!!\n");
  msg=me->query("final/action"+path);
  switch(value)  //����ǿ�ȡ��ع������ò�ͬ.....
   {
    case 1:      //��һ��ǿ������.....��������
    printf("\n");
    message_vision(msg,me,victim);  //�ͳ�message.....
    skee=me->query("max_atman") / 5;
    me->add("atman",-skee);
    skee=me->query("max_mana") / 5;
    me->add("mana",-skee);
    skee=me->query("max_kee") / 5;
    me->add("kee",-skee);  //�������ȿ�1/5
    sforce=me->query("force") / 2;
    if(sforce > 100000) //��������wiz.��׼˵��ȥ....
     sforce = 100000;
    me->add("force",-sforce);
    fun = me->query("functions/final-unarmed/level")*10;
    damage=damage+skee+(sforce/200)+fun;//����500�ǻ�����,���Ͽ۵�kee ��force /50 +fun*10
    //����kee 6000 force 10�����㼰fun 100..�۵�keeΪ 500 + 1200 + 1000 + 500 = 3200
    if(fun > random(2000))//��̫ǿ��.����������50%����һ��.�Ļ���,����ֻ��10% grin...
     {
      message_vision(HIR"$n��$N����������������,��ʱȫ��Ѫ������!!����������Ѫ��!!!\n"NOR,me,victim);
      victim->receive_wound("kee",damage);
      COMBAT_D->report_status(victim);
     victim->apply_condition("star-stial",random(10));
     }
    else {
    message_vision(HIW"$n����$N�������������������,��ʻ�Ṧ���������һ��!!\n"NOR,me,victim);
    COMBAT_D->report_status(victim);
    }
    break;
    case 2:      //ǿ������������öԷ�force enforce �� 0 ���� ����
    printf("\n");
    message_vision(msg,me,victim);  //�ͳ�message.....
    skee=me->query("max_atman") / 4;
    me->add("atman",-skee);
    skee=me->query("max_mana") / 4;
    me->add("mana",-skee);
    skee=me->query("max_kee") / 4;
    me->add("kee",-skee);  //�������ȿ�1/4
    sforce=me->query("force") / 2;
    if(sforce > 100000) //��������wiz.��׼˵��ȥ....
     sforce = 100000;
    me->add("force",-sforce);
    fun = me->query("functions/final-unarmed/level")*10;
    damage=damage+skee+(sforce/200)+fun;//����500�ǻ�����,���Ͽ۵�kee��force /50 +fun*10
    //����kee 6000 force 10�����㼰fun 100..�۵�keeΪ 500 + 1200 + 1000 + 500 = 3500
    if(fun > random(2000))//��̫ǿ��.����������50%����һ��.�Ļ���,����ֻ��10% grin...
     {
      message_vision(HIR"$n��$N����������������,��ʱȫ��Ѫ������!!����������Ѫ��!!!\n"NOR,me,victim);
      message_vision(HIC"$N������������$n�����γ�����������˲��$n��������ȫ��ʧ��!!!\n"NOR,me,victim);
      victim->receive_wound("kee",damage);
      COMBAT_D->report_status(victim);
     victim->apply_condition("star-stial",random(10));
     victim->set("force_factor",0);
     victim->set("force",0);
     }
    else {
    message_vision(HIW"$n����$N�������������������,��ʻ�Ṧ���������һ��!!\n"NOR,me,victim);
    message_vision(HIC"$N������������$n�����γ�����������˲��$n��������ȫ��ʧ��!!!\n"NOR,me,victim);
    victim->set("force",0);
    COMBAT_D->report_status(victim);
    }
    break;
    case 3:      //ǿ������������öԷ�force enforce �� 0 ��perform �޷�ʹ�� ��������
    printf("\n");
    message_vision(msg,me,victim);  //�ͳ�message.....
    skee=me->query("max_atman") / 4;
    me->add("atman",-skee);
    skee=me->query("max_mana") / 4;
    me->add("mana",-skee);
    skee=me->query("max_kee") / 4;
    me->add("kee",-skee);  //�������ȿ�1/4
    sforce=me->query("force") / 2;
    if(sforce > 100000) //��������wiz.��׼˵��ȥ....
     sforce = 100000;
    me->add("force",-sforce);  //�����ڿ�....
    fun = me->query("functions/final-unarmed/level")*10;
    damage=damage+skee+(sforce/200)+fun;//����500�ǻ�����,���Ͽ۵�kee��force /50 +fun*10
    //����kee 6000 force 10�����㼰fun 100..�۵�keeΪ 500 + 1200 + 1000 + 500 = 3500
    if(fun > random(2000))//��̫ǿ��.����������50%����һ��.�Ļ���,����ֻ��10% grin...
     {
      message_vision(HIR"$n��$N����������������,��ʱȫ��Ѫ������!!����������Ѫ��!!!\n"NOR,me,victim);
      message_vision(HIC"$N������������$n�����γ�����������˲��$n��������ȫ��ʧ��!!!\n"NOR,me,victim);
      message_vision(HIW"$N������������$n�����γ��Ӵ�������$n�ĸо��Լ��޷������ɵ�ʹ�þ�ѧ!!!\n"NOR,me,victim);
      victim->receive_wound("kee",damage);
      COMBAT_D->report_status(victim);
     victim->set_temp("no_power_f",1);
     victim->apply_condition("no_power_f",random(5));
     victim->apply_condition("star-stial",random(10));
     victim->set("force_factor",0);
     victim->set("force",0);
     }
    else {
    message_vision(HIW"$n����$N�������������������,��ʻ�Ṧ���������һ��!!\n"NOR,me,victim);
    message_vision(HIC"$N������������$n�����γ�����������˲��$n��������ȫ��ʧ��!!!\n"NOR,me,victim);
    message_vision(HIW"$N������������$n�����γ��Ӵ�������$n�ĸо��Լ��޷������ɵ�ʹ�þ�ѧ!!!\n"NOR,me,victim);
    victim->set("force",0);
    victim->set_temp("no_power_f",1);
    victim->apply_condition("no_power_f",random(5));
    COMBAT_D->report_status(victim);
    }
    break;
    case 4:      //ǿ������������öԷ�force enforce �� 0 ��perform exert �޷�ʹ��..��������
    printf("\n");
    message_vision(msg,me,victim);  //�ͳ�message.....
    skee=me->query("max_atman") / 3;
    me->add("atman",-skee);
    skee=me->query("max_mana") / 3;
    me->add("mana",-skee);
    skee=me->query("max_kee") / 3;
    me->add("kee",-skee);  //�������ȿ�1/4
    sforce=me->query("force") / 2;
    if(sforce > 100000) //��������wiz.��׼˵��ȥ....
     sforce = 100000;
    me->add("force",-sforce);  //�����ڿ�....
    fun = me->query("functions/final-unarmed/level")*10;
    damage=damage+skee+(sforce/200)+fun;//����500�ǻ�����,���Ͽ۵�kee��force /50 +fun*10
    //����kee 6000 force 10�����㼰fun 100..�۵�keeΪ 500 + 2000 + 1000 + 500 = 4000
    if(fun > random(2000))//��̫ǿ��.����������50%����һ��.�Ļ���,����ֻ��10% grin...
     {
      message_vision(HIR"$n��$N����������������,��ʱȫ��Ѫ������!!����������Ѫ��!!!\n"NOR,me,victim);
      message_vision(HIC"$N������������$n�����γ�����������˲��$n��������ȫ��ʧ��!!!\n"NOR,me,victim);
      message_vision(HIW"$N������������$n�����γ��Ӵ�������$n�ĸо��Լ��޷������ɵ�ʹ�þ�ѧ!!!\n"NOR,me,victim);
      message_vision(MAG"$n�Ļ���������$N������������!!$n�о����������������޷���������!!\n"NOR,me,victim);
      victim->receive_wound("kee",damage);
      COMBAT_D->report_status(victim);
     victim->set_temp("no_power_f",1);
     victim->set_temp("no_power_e",1);
     victim->apply_condition("no_power_f",random(5));
     victim->apply_condition("no_power_e",random(5));
     victim->apply_condition("star-stial",random(10));
     victim->set("force_factor",0);
     victim->set("force",0);
     }
    else {
    message_vision(HIW"$n����$N�������������������,��ʻ�Ṧ���������һ��!!\n"NOR,me,victim);
    message_vision(HIC"$N������������$n�����γ�����������˲��$n��������ȫ��ʧ��!!!\n"NOR,me,victim);
    message_vision(HIW"$N������������$n�����γ��Ӵ�������$n�ĸо��Լ��޷������ɵ�ʹ�þ�ѧ!!!\n"NOR,me,victim);
    message_vision(MAG"$n�Ļ���������$N������������!!$n�о����������������޷���������!!\n"NOR,me,victim);
    victim->set("force",0);
    victim->set_temp("no_power_f",1);
    victim->set_temp("no_power_e",1);
    victim->apply_condition("no_power_f",random(2));
    victim->apply_condition("no_power_e",random(2));
    COMBAT_D->report_status(victim);
    }
   COMBAT_D->report_status(me);
    break;
  }
   message_vision(HIR"$Nʹ���ռ�ȭ�ƺ�о�����������ȫ�����ľ�!!�Ͽ�鿴�Լ�������!!\n"NOR,me);
   COMBAT_D->report_status(me);
   if(me->query("functions/final-unarmed/level") < 100)
    function_improved("final-unarmed",random(me->query("max_force")/25));
   victim->add_temp("final-attack",1);
   return 1;
}
