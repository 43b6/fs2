// 1998/9/29  wataru �ı����׻�֮��
//��������ɱ�ֵĵ�����תְ�ſ���ѧ������
//���Ի����ϣ���Ƚ�ǿ�󣬿������ǽ��׵ļ��ɣ���QC�Ĵ���������
//ѧ����һ���������EXP��Լ������ 80�����ϣ�������ÿ���˶�����ѧ����
//��Ҫ������ɱ�������������bellupʹ�ó�����һ��ɱ��ħ��
//��Ϊ���ѵ���ɱ������ɱ���������Զ��ظ���������������ȻҲǿ��
//Ч����Ҫ����ǿ���ɱ��ȥ������ֵľ����񣬲���ʹ���ֶ����ٻ�
//����Ϊ�涨ֻ����busy 1 �����ԣ�ǣ�ƵĻ��������ӣ�ϣ��qcer����ͨ��
//ǣ�ƵĻ������������ѵ�ɱ���йأ����ɻ���ɱ������ҵ�magic lv�й�
//ɱ�ֵ�master yar magic lv ��20��������qcer���뿼��
//1998/12/11 �ٴ������������й���Ϊmagic lv ���׿���
//1999/4/29   �ٴ������������й�û�����������⣬������ѶϢ�����
//1999/5/19   �ٴ������������йس��¾�����ҩ�����������
//2000/1/24   �ٴ�������Ϊ��ӦĿǰfs��ǿ�ȣ�����ɱ��ħ��
#include <combat.h>
#include <ansi.h>
inherit SSERVER;
int kee_out(object me,object target)
{
    int mkilluse,cor,maxskee;
    int magic_lv,makee_lv;
    int sha_lv,rain_lv;
    int mix_power;
    int ext_power=0;

    if (me->query("quest/worldpill") == 1)
        ext_power=120;  //���¾�����ҩ�����������
    cor=me->query("cor");
    maxskee   =me->query("max_s_kee");
    magic_lv  =me->query_skill("magic",1);
    sha_lv    =me->query_skill("shadow-kill",1)*2;         //max lv 90
    rain_lv   =me->query_skill("rain-throwing",1);       //max lv 100
    makee_lv  =me->query("/functions/manakee/level")*2;    //max lv 150
    mix_power=sha_lv+rain_lv+makee_lv+ext_power;

    //���magic lv 80�Ļ���������ʹ��10��λ��ɱ��
    //��1�Ǳ��������εĻ���
    //���ڿ��Ƴ�������
    if (magic_lv > 80)
        magic_lv=80;
    mkilluse=random(magic_lv /8)+1;

        if(me->query("class") != "killer")
        {
         tell_object(me,"�Դ����뿪ɱ�ֺ󣬾ͷ������е�ħ������ʧ...\n");
                return 1;
        }
        if(me->query("quest/head-kill") != 1)
        {
                tell_object(me,"��......������ʲô��ѽ��Ҫ�ã��Լ���ƨ���һ��\n");
                return 1;
        }
        if(me->query("s_kee")< 20)
        {
                tell_object(me,"���ɱ��ħ�����������������һ�����ðɣ�\n");
                return 1;
        }

      if( !target   ||   !target->is_character()   ||      !me->is_fighting(target) )
                return notify_fail("��ɱ��ħ����ֻ�ܶ�ս���еĶ���ʹ�á�\n");

        if(target->query_temp("mkill")==1)
        {
                tell_object(me,"����Ŀǰ��ɱ��ħ�������ţ��ȹ����Ȼ��ٷ�ɱ��\n");
                return 1;
        }
        if (me->query("bellup") != 1)
        {
                tell_object(me, "�о������㻹������ɱ�����ô����ɱ������һ��\n");
                return 1;
        }
        if (me->query("bellicosity") < 500)
        {
                tell_object(me, "ɱ������������Ҫ��ô��ɱ�������Ŷ����أ�\n");
                return 1;
        }
        if (me->query_skill("magic") < 10)
        {
                tell_object(me, "���㷨��Ҳ��ѧ������ô�����㹻������������ɱ��\n");
                return 1;
        }
        if (me->query("atman") < 30)
        {
                tell_object(me, "�����������������������Ŷ����\n");
                return 1;
        }
    //�����ǻ���
    me->add("bellicosity",-(mkilluse*5));  //��Ϊʹ��ɱ�����ŶԷ�
    me->add("atman",-30);                      //ʹ�����������ɱ��������
    me->add("s_kee",-20);                      //���軨ȥ��������


//�����������mkilluse���ܵ�10��������������������ֵȼ�
//������Ǳ�̬������������lv 250���ϣ���lv200->lv 250������Ҫ230000��atmanֵ
//���Ը���һ����ɱ�����������������ȼ���30��ʹ��Ҳ�������lv 250����
 if (maxskee > 250)
 {
   me->add("max_s_kee",-30);                   //���軨ȥ�������ȼ�
   message_vision(HIM"  ɱ      ��      ħ      ��\n\n"NOR,me);
   message_vision(HIM"����������        **��**��**ħ**��**      \n\n"NOR,me);
   message_vision(HIM"��������ɱ��ħ��������Ԫ��$N������������Ǿ����ޱ�������ħ��\n"NOR,me);
   message_vision(HIM"$N��ħ����Ԫ��˲������$n���ڣ��ޱȵ������������ڱ�����\n"NOR,me,target);
   target->start_busy(2);
   target->receive_damage("gin",random(mix_power*2));
   target->receive_damage("sen",random(cor*40));   //��ʶ30*40=1200 һ����һ����ɱ����ҪNPC����������
   //��ɱ�ֵĵ�ʶ��Լ��20-25֮��, 20*20��400��Ҳ����ֻҪ��ʶ��һЩ�������ͽ��ܶ�
 }
 else if (maxskee > 200)
 {
   message_vision(HIM"  ɱ      ��      ħ      ��\n\n"NOR,me);
   message_vision(HIG"��������          *��*��*ħ*��*   \n\n"NOR,me);
   message_vision(HIG"$N��������ǿ�ҵ�ɱ��������һ�ִ���ħ����ɱ��\n"NOR,me);
   message_vision(HIG"$N�������ħ��˲������$n������е����ҵĿ־�У�\n"NOR,me,target);
   target->start_busy(2);
   target->receive_damage("gin",random(mix_power));
   target->receive_damage("sen",random(cor*20));                  //��ʶ30*20=600
 }
 else if (maxskee > 150)
 {
   message_vision(HIM"  ɱ      ��      ħ      ��\n\n"NOR,me);
   message_vision(HIR"���ϼ�����        *��*��*ħ*��*   \n\n"NOR,me);
   message_vision(HIR"$N��������ǿ�ҵ�ɱ��������һ�ִ���ħ����ɱ��\n"NOR,me);
   message_vision(HIR"$N�������ħ��˲������$n������е����ҵĿ־�У�\n"NOR,me,target);
   target->start_busy(2);
   target->receive_damage("gin",random(mix_power));
   target->receive_damage("sen",random(cor*10));                          //��ʶ30*10=300
 }
 else if (maxskee > 100)
 {
   message_vision(HIM"  ɱ      ��      ħ      ��\n\n"NOR,me);
   message_vision(HIY"�ϼ�����          *��*��*ħ*��*   \n\n"NOR,me);
   message_vision(HIY"$N��������ǿ�ҵ�ɱ��������һ�ִ���ħ����ɱ��\n"NOR,me);
   message_vision(HIY"$N�������ħ��˲������$n������е����ҵĿ־�У�\n"NOR,me,target);
   target->start_busy(2);
   target->receive_damage("gin",random(mix_power*0.9)); //max 249
   target->receive_damage("sen",random(cor*8));                         //��ʶ30*8=240
 }
 else if (maxskee > 70)
 {
   message_vision(HIM"  ɱ      ��      ħ      ��\n\n"NOR,me);
   message_vision(HIB"�м�����          *��*��*ħ*��*   \n\n"NOR,me);
   message_vision(HIB"$N��������ǿ�ҵ�ɱ��������һ�ִ���ħ����ɱ��\n"NOR,me);
   message_vision(HIB"$N�������ħ��˲������$n������е����ҵĿ־�У�\n"NOR,me,target);
   target->start_busy(1);                                     //busy 1
   target->receive_damage("gin",random(mix_power*0.8)); //max 249
   target->receive_damage("sen",random(cor*7));                         //��ʶ30*6=180
 }
 else if (maxskee > 40)
 {
   message_vision(HIM"  ɱ      ��      ħ      ��\n\n"NOR,me);
   message_vision(RED"          *��*��*ħ*��*   \n\n"NOR,me);
   message_vision(RED"$N��������ǿ�ҵ�ɱ��������һ�ִ���ħ����ɱ��\n"NOR,me);
   message_vision(RED"$N�������ħ��˲������$n������е����ҵĿ־�У�\n"NOR,me,target);
   target->start_busy(1);                                     //busy 1
   target->receive_damage("gin",random(mix_power*0.7)); //max 150
   target->receive_damage("sen",random(cor*6));                         //��ʶ30*6=180
 }
 else if (maxskee > 10)
 {
   message_vision(HIM"  ɱ      ��      ħ      ��\n\n"NOR,me);
   message_vision(MAG"          *��*��*ħ*��*   \n\n"NOR,me);
   message_vision(MAG"$N��������ǿ�ҵ�ɱ��������һ�ִ���ħ����ɱ��\n"NOR,me);
   message_vision(MAG"$N�������ħ��˲������$n������е����ҵĿ־�У�\n"NOR,me,target);
   target->start_busy(1);                                     //busy 1
   target->receive_damage("gin",random(mix_power*0.5)); //max 120
   target->receive_damage("sen",random(cor*4));                         //��ʶ30*5=120
 }
   target->set_temp("mkill",1);
   target->apply_condition("mkill_out",mkilluse);
   return 1;
}

