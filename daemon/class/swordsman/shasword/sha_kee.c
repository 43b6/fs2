
#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;

int perform(object me)
{
        int ski_value,sha_value,i,j;
        int kee_lv;
        int sword_lv;
        int swordkee_lv;


        object ob,room,*target;
        room = environment(me);
        target=me->query_enemy(room);
        i=sizeof(target);
        ski_value=random(me->query_skill("shasword",1))+query_function("sha_kee")*2;
        kee_lv=query_function("sha_kee");
        sha_value=me->query_skill("shasword",1);
        swordkee_lv=query_function("swordkee");
        sword_lv=me->query_skill("sword",1);

      if(kee_lv > 100) kee_lv=100;
      if(!me->is_fighting())
  return notify_fail("��Ӱ����Ψ��ս���в���ʹ�á�\n");
      if(me->query("killyao")==1)
  return notify_fail("���޷�ʹ��������\n");
    if(!me) return 1;
    if(!target) return notify_fail("û����..��ƨ��..��\n");
           if( me->query_skill("shasword",1) < 20 )
            return notify_fail("����ɽ��������ɲ��㡣\n");
         if( me->query("family/family_name") != "�ɽ���")
          {
          me->add("kee",-7000);
 log_file("/sword/swordlog",sprintf("%s(%s) ʹ��û��on %s\n",me->query("name"),me->query("id"),ctime(time())));
                    return notify_fail("[1;31m����ǿ���ɽ���ѧ....�㱻�򽣷���..[0m\n");
           }
if(me->query("class")!="swordsman")
return notify_fail("���ǽ�ʿ������ม�\n");
         if(me->query("force") < swordkee_lv*9+100)
             return notify_fail("�������������\n");
        if(me->query("kee") < 500)
             return notify_fail("�����������\n");
        message_vision(HIB" $N����һԾ ,���ڰ����ھ� ,���帡���ڰ��֮�� , ͻȻ����Χ��ľ���ʶ�������
        �������� ,һ������Ϊ���ƴ���������\n"NOR,me,target[0]);
        message_vision(HIW"\n\n         $Nָ�ɽ��˴��һ��   ��"HIY"��Ӱ���� ��������"HIW"��   ˲���������뷢..��\n\n\n"NOR,me,target[0]);
// ����100 ��sha_kee ��ǿ����
if (kee_lv==100 && swordkee_lv==100)
{
       message_vision("[1;34m���ڴ�ʱ����$N������������һ��...![0m \n[1;31mֻ������ɫ�Ľ�����Ѫ��ܳ�..[0m \n[1;37m����л����Ÿ�ʽ����..ɲ�Ǽ���ֽ���ת������ֽ��� ...[0m \n[1;34mֻ��$N�ߺ�[1;31m����[1;37m�Ƶ�[1;33m---��ʯ���쾪��![0m\n",me);
     for(j=0;j < i;j++){
        if(!target[j]) continue;

          target[j]->receive_damage("kee",(sha_value*5+kee_lv*5+sword_lv*6));
          target[j]->start_busy(1);
          target[j]->receive_wound("kee",sword_lv*10);
}
//��������
       if(me->query("quest/sun_fire_sword")==1)
          me->add("kee",-((sha_value*5+kee_lv*5+sword_lv*5)/8));
       else
          me->add("kee",-((sha_value*5+kee_lv*5+sword_lv*5)/5));
          me->start_busy(1);
          me->add("force",-kee_lv*4);
}
      else if ( ski_value <  5 ){
           me->add("force",-kee_lv);
          write(HIM"\n ����һ�Ѷ�û������ ,�㵱���ߺ����������ջ�\n"NOR);
          COMBAT_D->report_status(me);
		  say(HIM" �㷢�ֿ����ҽ����� ,��������û�����е��� ,����ָ��"+me->query("name")+"�ı��Ӵ�Ц\n"NOR);
          }
        else if( ski_value < 20  )
          {
          me->add("force",-kee_lv);
     for(j=0;j < i;j++){
        if(!target[j]) continue;
          target[j]->receive_damage("kee",(sha_value/2+kee_lv*2+sword_lv*2));
         COMBAT_D->report_status(target[j]);
                       }
          write (HIM" �㷢�ִ󲿷ֵĽ��������ϴ�ȥ ,�����������Լ� ,�㷢��Ҫ�ú�����
                   ����������ȫ��Ԧ\n"NOR);
		  say(HIM" �㿴������һ�ѽ��������� ,�谡������..����ԭ����"+me->query("name")+"����һ����轣\n"NOR);
          }
          else if( ski_value < 40 )
          {
           me->add("force",-kee_lv);
     for(j=0;j < i;j++){
        if(!target[j]) continue;
          target[j]->receive_damage("kee",(sha_value/2+kee_lv*2+sword_lv*2));
          COMBAT_D->report_status(target[j]);
                       }
          write (HIM" ����һЩ��׼ȷ���е��� ,ʹ�ĵ����ܴ���С\n"NOR);
          say(HIM" �㿴������һЩ������"+me->query("name")+"�������� ,���а�������\n"NOR);
                 }
          else if( ski_value < 60)
          {
           me->add("force",-kee_lv);
     for(j=0;j < i;j++){
        if(!target[j]) continue;
          target[j]->receive_damage("kee",(sha_value+kee_lv*3+sword_lv*3));
         COMBAT_D->report_status(target[j]);
                       }
          write(HIM"\n ʮ֮�˾ŵ����������˼����ȥ ,ʹ�����ܵ����صĴ���\n"NOR);
		  say(HIM"\n ��ǧ���������Ⱥ����һĿ����ȥ ,�������Ŀ���� , ����˵��������\n"NOR);
          }
          else
          {
          me->add("force",-kee_lv*3);

          me->start_busy(1);
//������enable�����߾����������ӱ�
//roger 98/8/17

     for(j=0;j < i;j++){
        if(!target[j]) continue;
          target[j]->receive_damage("kee",(sha_value*3+kee_lv*4+sword_lv*4));
                       }

          write(HIY" ����˫�ֻ���֮�� ,�򽣾����е��� ,������� ,����ʹ���˻����\n"NOR);
say(HIY" �㲻��������ǰ�貪������ ,Ⱥ��������ڸ�\��ҫ�۵����� ,ȴ����һ��
                ��ΪѤ���Ĺ�â\n"NOR);
           }

         write("\n��ķѴ������� ,����Ϣһ�غϲ��ܼ�������\n");
  while(i--) {
  if(target[i])
        message_vision(HIR"$N��Դ��龳����ȫɥʧ�м��������ɽ����������ϻ����������˺ۣ�\n"NOR,target[i]);
          COMBAT_D->report_status(target[i]);
}
           if(kee_lv >=100) me->set("functions/sha_kee/level",100);
           else function_improved("sha_kee",random(kee_lv*5)+kee_lv*5);
        return 1;
}
