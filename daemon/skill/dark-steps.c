#include <ansi.h>
inherit SKILL;
inherit SSERVER;
void reattack();
//�����������Ӱ����ʱ�򣬻����ǰ����(������ڼ�)
//Ȼ����������ֹ�����ʱ�򣬻���ֺ�����
string *dodge_msg = ({
    "$n��Ӱ΢��,�Ѿ���һ�С�"HIC"��Ӱ����"NOR"���Ƶ�$N�����γ��ĸ���Ӱ��\n",
    "$n����һתʹ����"HIC"��  ��"NOR"��˲ʱ����ԭλ�����˿�ȥ,$N�����˻�Ӱ��\n",
    "ֻ��$n��Ӱһ�μ�ʧ,һʽ��"HIC"˲��Ӱ��"NOR"���ѻû�������֮�⡣\n",
});

int valid_enable(string usage)
{
        return (usage=="dodge") || (usage=="move");
}

string query_dodge_msg(string limb)
{
   int x=0,sk_lv=1,now_exp,skrate;
   object target,me=this_player();
   
   if(!me) return "";
   target=offensive_target(me);
//��ʵ��dodge����ʱ�����Ѿ�����û���ܵ��˺�
//���Ҷ���̫ǿ�Ķ�����˵��dodge�����Ļ��ʲ�����
//���ԣ���һ��Ϊ����һ����׼�����ڶ�����һЩ����ǿ��   

   if (me->query_temp("step-shadow"))
   {//�������ʹ�û�Ӱ��
   	if (me->query("dark-steps/shadow/exp"))
   	{//�������Ƿ��һ��ʹ�û�Ӱ��
        	 me->add("dark-steps/shadow/exp",1);
        	 now_exp=me->query("dark-steps/shadow/exp");
        	 sk_lv=me->query("dark-steps/shadow/lv");
        	 if ( now_exp > (20*sk_lv))
        	 {//���������
        	 	me->set("dark-steps/shadow/exp",1);
        	 	if (me->query("dark-steps/shadow/lv") < 100)
        	 		me->add("dark-steps/shadow/lv",1);
        	 	now_exp=0;
        	 }
        }
   	else
   	{
   		 me->set("dark-steps/shadow/lv",1);
        	 me->set("dark-steps/shadow/exp",1);
        }
   	sk_lv=me->query("dark-steps/shadow/lv");
   	switch (sk_lv)
   	{
		case 0..10://��ҽ���40%~50%�Ļ��ʷ�����Ӱ��
			skrate= random (100)+ sk_lv +1;
			if (skrate > 60)
			{
				if (me->query("atman") > 30)
				    me->add("atman",-30);
				else
				    me->set("atman",0);
				me->set_temp("shadowfun",2);
message_vision(HIW"\n            ��	 ��	 ��	 Ӱ	 ��	 ��!"NOR,target);
message_vision(HBMAG"\n              ��		Ӱ		��   \n"NOR,target);
			}
			break;
		case 11..40://��ҽ���40%~70%�Ļ��ʷ�����Ӱ��
			skrate= random (100)+ sk_lv +1;
			if (skrate > 70)
			{
				if (me->query("atman") > 30)
				    me->add("atman",-30);
				else
				    me->set("atman",0);
				    
				me->set_temp("shadowfun",2);
				me->receive_heal("gin",skrate+50);
      				target->receive_wound("gin",skrate+50,me);
message_vision(HIW"\n            ��	��	��	Ӱ	��	��!"NOR,target);
message_vision(HBMAG"\n              ��		Ӱ		��   \n"NOR,target);
message_vision(HBYEL"\n$N�ó������Ӱ����$n�ۻ����ң��޷������������ʵ��\n"NOR,me,target);
			}
			break;
		case 41..70://��ҽ���40%~70%�Ļ��ʷ�����Ӱ��
			skrate= random (100)+ sk_lv - 40;
			if (skrate > 60)
			{
				if (me->query("atman") > 30)
				    me->add("atman",-30);
				else
				    me->set("atman",0);
				//��set�Ǳ�����������������ۼ���ȥ				    
				me->set_temp("shadowfun",3);
				me->delete_busy();
				target->receive_wound("gin",skrate+100,me);
message_vision(HIW"\n            ��	��	��	Ӱ	��	��!"NOR,target);
message_vision(HBMAG"\n              ��		Ӱ		��   \n"NOR,target);
message_vision(HBYEL"\n$N�ó������Ӱ����$n�ۻ����ң��޷������������ʵ�� \n"NOR,me,target);
message_vision(HBCYN"\nɲ�Ǽ䣬�����ռ��ж���$N����Ӱ��$n�е���ͷת����\n"NOR,me,target);
			}
			break;
		case 71..100://��ҽ���60%~80%�Ļ��ʷ�����Ӱ��
			skrate= random (100)+ sk_lv - 70;
			if (skrate > 40)
			{
				if (me->query("atman") > 30)
				    me->add("atman",-30);
				else
				    me->set("atman",0);
				//��set�Ǳ�����������������ۼ���ȥ				    
				me->set_temp("shadowfun",3);
				me->delete_busy();
				target->start_busy(1);
				me->receive_heal("gin",sk_lv);
				me->receive_heal("sen",sk_lv);				
      				target->receive_wound("gin",sk_lv*2+30,me);
      				target->receive_wound("sen",sk_lv*2+30,me);
message_vision(HIW"\n            ��	��	��	Ӱ	��	��!"NOR,target);
message_vision(HBMAG"\n              ��		Ӱ		��   \n"NOR,target);
message_vision(HBYEL"\n   $N�ó�����Ӱ����$n�ۻ����ң��޷������������ʵ��\n"NOR,me,target);
message_vision(HBCYN"\n   ɲ�Ǽ䣬�����ռ��ж���$N����Ӱ��$n�е���ͷת����\n"NOR,me,target);
message_vision(HBRED"\n   $N����ӰԽ�û�Խ�࣬�·������ռ�Ϊ֮ǣ��........\n"NOR,me,target);
			}
			break;
		case 101..150://�ر�ȼ���ֻ�л�ý�������Ҳ��п��� 90% ����
			if (random(100) < 90)
			{//ר�Ҽ����Ƿ������ʱ�ߣ��˺���ʽ������������¸ߵ�
				if (me->query("atman") > 100)
				    me->add("atman",-100);
				else
				    me->set("atman",0);
				//��set�Ǳ�����������������ۼ���ȥ				    
				me->set_temp("shadowfun",3);
				me->delete_busy();
				target->start_busy(1);
				me->receive_heal("gin",sk_lv);
				me->receive_heal("sen",sk_lv);				
      				target->receive_wound("gin",sk_lv*2+30,me);
      				target->receive_wound("sen",sk_lv*2+30,me);
message_vision(HIW"\n            ר		��		��"NOR,target);
message_vision(HIW"\n            ��	��	 ��	 Ӱ	 ��	 ��!"NOR,target);
message_vision(HBMAG"\n               ��		Ӱ		��   \n"NOR,target);
message_vision(HBYEL"\n   $N�ó�����Ӱ����$n�ۻ����ң��޷������������ʵ��\n"NOR,me,target);
message_vision(HBCYN"\n   ɲ�Ǽ䣬�����ռ��ж���$N����Ӱ��$n�е���ͷת����\n"NOR,me,target);
message_vision(HBRED"\n   $N����ӰԽ�û�Խ�࣬�·������ռ�Ϊ֮ǣ��........\n"NOR,me,target);
			}
			break;

		default://��ʦ��(��������)     ��100%�Ļ��ʷ�����Ӱ��
			{
message_vision(HIW"\n            ��		ʦ		��"NOR,target);
message_vision(HIW"\n            ��	��	��	Ӱ	��	��!"NOR,target);
message_vision(HIY"\n   $N�ó�����Ӱ����$n�ۻ����ң��޷������������ʵ��\n"NOR,me,target);
message_vision(HIR"\n   ɲ�Ǽ䣬�����ռ��ж���$N����Ӱ��$n�е���ͷת����\n"NOR,me,target);
message_vision(HIG"\n   $N����ӰԽ�û�Խ�࣬�·������ռ�Ϊ֮ǣ��........\n"NOR,me,target);
				me->set_temp("shadowfun",4);
				me->delete_busy();
				target->start_busy(2);
				me->receive_heal("gin",sk_lv*5);
				me->receive_heal("sen",sk_lv*5);
      				target->receive_wound("gin",sk_lv*2+30,me);
      				target->receive_wound("sen",sk_lv*2+30,me);
      				me->set_temp("power-down",17);
			}
			break;
	}					
	return dodge_msg[random(3)];		
   }
   if (me->query_temp("step-share"))
   {//�������ʹ�÷ֹ���
    //Ŀǰ��ʱû������һ���֣�Ӧ�û�ȵ��ȽϺ���Ĺ�����Ū
   	if (me->query("dark-steps/share/exp"))
   	{
        	 me->add("dark-steps/share/exp",1);
        	 now_exp=me->query("dark-steps/share/exp");
        	 sk_lv=me->query("dark-steps/share/lv");
        	 if ( now_exp > (20*sk_lv))
        	 {//���������
        	 	me->set("dark-steps/share/exp",1);
        	 	me->add("dark-steps/share/lv",1);
        	 	now_exp=0;
        	 }
        }
   	else
   	{
        	 me->set("dark-steps/share/exp",1);
        	 me->set("dark-steps/share/lv",1);
        }
   	sk_lv=me->query("dark-steps/share/lv");
   }   
   return dodge_msg[random(sizeof(dodge_msg))];
}

int valid_learn(object me)
{
tell_object(me,"�ֹ���Ӱ�޷���ѧϰ�л�ý�չ, �����Լ����з��гɹ�!!\n");
return 0;
}
string perform_action_file(string action)
{
        return CLASS_D("killer")+"/dark-steps/"+action;
}



